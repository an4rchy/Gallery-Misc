#include <QtGui>
#include "CPicFlowWidget.hpp"
#include <iostream>
#include <QDir>
#include <QFileInfo>
#include <QImage>


using namespace std;


CPicFlowWidget::CPicFlowWidget(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
    this->ScrollBar->hide();
     
   


// PictureFlow->setSlideSize(QSize(4*50, 5*40)); //a.p mod from 3*40 to 3*50
//     PictureFlow->resize(750, 270);

     	
      emit StartVal(PictureFlow->slideCount()/2);
      connect (ScrollBar, SIGNAL(valueChanged(int)),PictureFlow,SLOT(showSlide(int)));
      connect (LeftArrow, SIGNAL(released()), PictureFlow, SLOT(showPrevious()));
      connect (RightArrow, SIGNAL(released()),PictureFlow, SLOT(showNext()));
      connect (LeftArrow, SIGNAL(released()), this, SLOT(moveScrollBarLeft()));
      connect (RightArrow, SIGNAL(released()),this, SLOT(moveScrollBarRight()));
      connect (PictureFlow, SIGNAL(moveLeft()),this, SLOT(moveScrollBarLeft()));
      connect (PictureFlow, SIGNAL(moveRight()),this, SLOT(moveScrollBarRight()));
      connect (ScrollBar, SIGNAL(sliderReleased()),this,SLOT(scrollBarReleased()));
      connect(PictureFlow,SIGNAL(centerItemClicked(int)),this,SLOT(GetItemClickedHF(int)));
      connect (this,SIGNAL(LeftArrowReleased()),PictureFlow,SLOT(showPrevious()));
      connect (this,SIGNAL(RightArrowReleased()),PictureFlow,SLOT(showNext()));
//       disconnect (PictureFlow, SIGNAL(centerIndexChanged(int)),ScrollBar, SLOT(setValue(int)));
//       disconnect (PictureFlow, SIGNAL(centerIndexChanged(int)),ScrollBar, SLOT(setValue(int)));

}

CPicFlowWidget::~CPicFlowWidget()
{
  
}
void CPicFlowWidget::GetImages(QList <QImage >ImageList)
{
   PictureFlow->clear();
    for (int i=0;i<ImageList.count(); ++i)
      PictureFlow->addSlide(ImageList.at(i));
          
      PictureFlow->setCenterIndex(PictureFlow->slideCount()/2);
      PictureFlow->setBackgroundColor(QColor(144,178,196));  
      ScrollBar->setMinimum(0);
      ScrollBar->setMaximum((PictureFlow->slideCount())-1);
      ScrollBar->setValue(PictureFlow->slideCount()/2);
    
      
      int ww = PictureFlow->width();
      int wh = PictureFlow->height();
      int dim = (ww < wh) ? wh : ww;
      dim = dim * 3 / 4;
//      qDebug()<<dim; Interesting resize
       PictureFlow->setSlideSize(QSize(200, 200));
       emit LeftArrowReleased();
       emit RightArrowReleased();
       if (ScrollBar->value()==0)
       {
           this->LeftArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/leftarrowdisabled.png);"));
       }
       else

       {
           this->LeftArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/left4.png);"));
           this->RightArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/right4.png);"));
       }
       if (ScrollBar->value()==(PictureFlow->slideCount()-1))
          {

              this->RightArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/rightarrowdisabled.png);"));
          }
       else
      {
           this->RightArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/right4.png);"));
           this->LeftArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/left4.png);"));

      }

}
void CPicFlowWidget::ShowSlide(int index)
{
  
  
}

void CPicFlowWidget::moveScrollBarLeft()
{
  disconnect (ScrollBar, SIGNAL(valueChanged(int)),PictureFlow,SLOT(showSlide(int)));
  ScrollBar->setValue((ScrollBar->value())-1);
  connect (ScrollBar, SIGNAL(valueChanged(int)),PictureFlow,SLOT(showSlide(int)));
  emit DecrementVal(ScrollBar->value());
  if (ScrollBar->value()==0)
  {
      this->LeftArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/leftarrowdisabled.png);"));
  }
  else

  {
      this->LeftArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/left4.png);"));
      this->RightArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/right4.png);"));
  }
}
void CPicFlowWidget::moveScrollBarRight()
{
    disconnect (ScrollBar, SIGNAL(valueChanged(int)),PictureFlow,SLOT(showSlide(int)));
  ScrollBar->setValue((ScrollBar->value())+1);
  connect (ScrollBar, SIGNAL(valueChanged(int)),PictureFlow,SLOT(showSlide(int)));
  emit IncrementVal(ScrollBar->value());
  if (ScrollBar->value()==(PictureFlow->slideCount()-1))
     {

         this->RightArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/rightarrowdisabled.png);"));
     }
  else
 {
      this->RightArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/right4.png);"));
      this->LeftArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/left4.png);"));

 }
 }
void CPicFlowWidget::scrollBarReleased()
{
    emit scrollBarVal(ScrollBar->value());
}
void CPicFlowWidget::GetItemClickedHF(int ItemClickedHF)
{
    emit SetItemClickedHF(ScrollBar->value());
}
