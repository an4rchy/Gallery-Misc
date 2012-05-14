#include <QtGui>
#include "CPicScrollWidget.hpp"
#include <iostream>

using namespace std;

CPicScrollWidget::CPicScrollWidget(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

    connect (this,SIGNAL(SetImages(QList<QImage>)),PicFlow,SLOT(GetImages(QList<QImage>)));
    connect(this,SIGNAL(SetInitialConditions(int, QStringList& , int)),Scroll,SLOT(GetInitialConditions(int, QStringList& , int)));
    connect(PicFlow,SIGNAL(DecrementVal(int)),Scroll,SLOT(ShowItem(int)));
    connect(PicFlow,SIGNAL(IncrementVal(int)),Scroll,SLOT(ShowItem(int)));
    connect(PicFlow,SIGNAL(scrollBarVal(int)),Scroll,SLOT(ShowItem(int)));
    connect(PicFlow,SIGNAL(SetItemClickedHF(int)),this,SLOT(GetItemClickedHS(int)));


    
    

 
}

CPicScrollWidget::~CPicScrollWidget()
{
  
}
void CPicScrollWidget::GetImages(QList<QImage> ImageList)
{
    emit SetImages(ImageList);

  }
void CPicScrollWidget::GetInitialConditions (int MaxItems, QStringList &ItemNames, int StartVal)
{
    emit SetInitialConditions(MaxItems, ItemNames, StartVal);
//    qDebug()<<ItemNames;
}

void CPicScrollWidget::GetItemClickedHS(int ItemClickedHS)
{
    emit SetItemClickedHS(ItemClickedHS);
}
