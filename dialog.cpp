#include "dialog.h"
#include "ui_dialog.hpp"
#include <qapplication.h>
#include <qdir.h>
#include <qevent.h>
#include <qfileinfo.h>
#include <qimage.h>
#include <qdebug.h>
#include <qpainter.h>

//get files
QStringList findFiles(const QString& path = QString(""))
{
  QStringList files;


  QDir dir = QApplication::applicationDirPath();
  if(!path.isEmpty())
    dir = QDir(path);
  qDebug()<<dir;
  dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
#if QT_VERSION >= 0x040000
  QFileInfoList list = dir.entryInfoList();
  for (int i = 0; i < list.size(); ++i)
  {
    QFileInfo fileInfo = list.at(i);
    files.append(dir.absoluteFilePath(fileInfo.fileName()));
  }
#else
  const QFileInfoList* list = dir.entryInfoList();
  if(list)
  {
    QFileInfoListIterator it( *list );
    QFileInfo * fi;
    while( (fi=it.current()) != 0 )
    {
      ++it;
      files.append(dir.absFilePath(fi->fileName()));

    }
  }
#endif

  return files;
}
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(this,SIGNAL(SetImages(QList<QImage>)),ui->PictureFlowScrollCombo,SLOT(GetImages(QList<QImage>)));
    connect(this,SIGNAL(SetInitialConditions(int,QStringList&,int)),ui->PictureFlowScrollCombo,SLOT(GetInitialConditions(int,QStringList&,int)));
    connect(ui->PictureFlowScrollCombo,SIGNAL(SetItemClickedHS(int)),this,SLOT(ItemClicked(int)));
    //this->setFixedSize(659,347);

Images.clear();
ItemNames.clear();
    //
    QStringList files = findFiles();
    QString path=QApplication::applicationDirPath();
    QString temp;
    QImage img;
    for(int i = 0; i < (int)files.count(); i++)
      {
          if(img.load(files[i]))
          {
              Images.append(img);
              temp=files.at(i);
              temp.remove(0,path.length()+1);
              ItemNames.append(temp);


          }
      }
    qDebug()<<ItemNames.count();
    if (Images.count()==0)
    {
        QPen pen(Qt::black, 30, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
        ItemNames<< "No \nImages \nPresent" ;
        Template.load(":/Images/pfGreenWhite.png");
        pen.setColor(QColor(222,120,56));

        QPainter painter(&Template);
        painter.setFont(QFont("Serif",70));
                    painter.setPen(pen);
                    painter.drawText(Template.rect(),Qt::AlignCenter, ItemNames.at(0));

                    painter.end();

                    Images.append(Template);





    }
        emit SetImages(Images);
        emit SetInitialConditions (Images.count(),ItemNames, Images.count()/2);
        qDebug()<<QDir::current().path();
    //resize scroll for expanding



}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::ItemClicked(int SelectedItem)
{
    qDebug()<<SelectedItem;
}
