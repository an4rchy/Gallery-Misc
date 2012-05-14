#include <QtGui>
#include "CScrollWidget.hpp"
#include <iostream>





using namespace std;

CScrollWidget::CScrollWidget(QWidget *parent)
    : QWidget(parent)
{

 setupUi(this);

m_MaxItems=10;
m_LowerLimit=0;
m_ItemsPerPage=5;
m_CurrentItemValue=1;
AnimationTimer = new QTimeLine(200);
m_ScrollWidgetItemHeight=(CScrollWidget::height()/m_ItemsPerPage);
m_ScrollWidgetItemWidth=(CScrollWidget::width());
m_ScrollWidgetItemPosY=(-(m_ScrollWidgetItemHeight*m_ItemsPerPage)/2+(scrollView->rect().height())/2);
m_ScrollWidgetItemPosX=(-(m_ScrollWidgetItemWidth)/2+(scrollView->rect().width())/2);

    
    for(int i=-1;i<(m_ItemsPerPage+1);i++)
    {
        m_ScrollWidgetItemAllPositions[i+1]=m_ScrollWidgetItemPosY+i*m_ScrollWidgetItemHeight;
    }






}

CScrollWidget::~CScrollWidget()
{

}
void CScrollWidget::GetInitialConditions(int MaxItems,QStringList &ItemNames, int StartVal)
{
        QString tmp;
        ItemNamesList.clear();
        ItemNamesList.append(ItemNames);
        m_MaxItems=MaxItems;
        m_RequiredItemValue=StartVal;

        ScrollWidgetItemLabels.clear();
        ScrollWidgetItems.clear();
        ScrollWidgetAnimations.clear();
        m_MaxLength=17;
        m_ReplacementString="!";



//        qDebug()<<ItemNamesList;
/*---------------------------------------------------------*/
        for (int i=0; i< ItemNamesList.count(); i++)
        {
            tmp=ItemNamesList.at(i);
            tmp.replace(QRegExp("\n"),"");
            int m_SpacesCount[tmp.count(QRegExp(" "))+1];
            int m_SpacesCountIncremented[tmp.count(QRegExp(" "))+1];
            m_SpacesCountIncremented[0]=0;
//
            for (int j=0; j<tmp.count(QRegExp(" "));++j)
            {
                m_SpacesCount[j]=tmp.indexOf(QRegExp(" "),m_SpacesCountIncremented[j]);
                m_SpacesCountIncremented[j+1]=m_SpacesCount[j]+1;

            }

            for (int k=0; k<(tmp.length()); k++)
            {
                if((k+m_MaxLength-1)<tmp.length())
                {
                     if(tmp.at(k+m_MaxLength-1)==' ')
                    {

                    tmp.replace(k+m_MaxLength-1,1,m_ReplacementString);
                    k=k+m_MaxLength-1;


                    }

                    else
                    {

                       for (int l=(k+m_MaxLength-1); l>0; l--)
                        {
                        if (tmp.at(l)== ' ')
                            {  tmp.replace(l,1,m_ReplacementString);
                            k=l;
                            break;
                            }
                        }
                    }


                }
            }
            tmp.replace("!","<br />");

        ItemNamesList.replace(i,tmp);
        }
/*---------------------------------------------------------*/
    for (int i = 0; i < m_MaxItems; ++i)
    {

        ScrollWidgetItemLabels << new QLabel();
	ScrollWidgetItemLabels.at(i)->setTextFormat(Qt::RichText);
        ScrollWidgetItemLabels.at(i)->setStyleSheet("QLabel {background-color: rgb(144,178,196); image: url(:/Images/blueBullet.png); image-position: left; }");
        ScrollWidgetItemLabels.at(i)->setText(QString("<p style=\" font-family: Droid Serif; font-size: 10pt;margin-left: 20px; color: black;\">%1</p>").arg(ItemNamesList.at(i)));
        ScrollWidgetItemLabels.at(i)->setFixedSize(m_ScrollWidgetItemWidth,m_ScrollWidgetItemHeight);
	
    }

    QGraphicsScene *scene=new QGraphicsScene();


    for (int i = 0; i < m_MaxItems; ++i)
    {

    ScrollWidgetItems << scene->addWidget(ScrollWidgetItemLabels.at(i));


    ScrollWidgetItems.at(i)->setX(m_ScrollWidgetItemPosX);


    if (i >= m_ItemsPerPage)
        ScrollWidgetItems.at(i)->setY(m_ScrollWidgetItemAllPositions[6]);
    else
    ScrollWidgetItems.at(i)->setY(m_ScrollWidgetItemAllPositions[i+1]);

    }


    for (int i=0; i<m_MaxItems; ++i)
    {
        ScrollWidgetAnimations << new QGraphicsItemAnimation();
        ScrollWidgetAnimations.at(i)->setItem(ScrollWidgetItems.at(i));
        ScrollWidgetAnimations.at(i)->setTimeLine(AnimationTimer);

    }

    scene->setSceneRect(scrollView->rect());

AnimationTimer->setFrameRange(0, 200);
AnimationTimer->setEasingCurve(QEasingCurve::OutBounce);


scrollView->setScene(scene);
scrollView->setRenderHints( QPainter::Antialiasing);
scrollView->show();
scene->setBackgroundBrush(QColor(144,178,196));
ShowItem(StartVal);
}

void CScrollWidget::ShowItem(int m_RequiredItemValue)
{
//     qDebug()<<m_CurrentItemValue<<"C";
//     qDebug()<<m_RequiredItemValue<<"R";
    

    for (int i=0;i<m_MaxItems;i++)
    {
        if (i==m_RequiredItemValue)
        {
            ScrollWidgetItemLabels.at(i)->setStyleSheet("QLabel {background-color: rgb(144,178,196); image: url(:/Images/greenBullet.png); image-position: left; }");

        ScrollWidgetItemLabels.at(i)->setText(QString("<p style=\" font-family: Droid Serif; font-size: 10pt;margin-left: 20px;color: green;\">%1</p>").arg(ItemNamesList.at(i)));


        }
        else
        {
            ScrollWidgetItemLabels.at(i)->setStyleSheet("QLabel {background-color: rgb(144,178,196); image: url(:/Images/blueBullet.png); image-position: left; }");
            ScrollWidgetItemLabels.at(i)->setText(QString("<p style=\" font-family: Droid Serif; font-size: 10pt;margin-left: 20px; color: black;\">%1</p>").arg(ItemNamesList.at(i)));

        }
    }

    if (m_RequiredItemValue>=(m_CurrentItemValue+m_ItemsPerPage-1))
    {
        AnimationTimer->stop();

        if (m_RequiredItemValue<=(m_MaxItems-1))
          {
              for (int i = 0; i < 200; ++i)
            {
                for (int j=0; j<m_ItemsPerPage; j++)
                  {

                      ScrollWidgetAnimations.at(m_CurrentItemValue-1+j)->setPosAt(i / 200.0, QPointF(m_ScrollWidgetItemPosX,(m_ScrollWidgetItemAllPositions[j+1])-(j+1)*i*m_ScrollWidgetItemHeight/200));
                  }
                for (int k=0; k<m_ItemsPerPage; k++)
                   {
                       if((m_RequiredItemValue-1+k)<=(m_MaxItems-1))
                       ScrollWidgetAnimations.at(m_RequiredItemValue-1+k)->setPosAt(i / 200.0, QPointF(m_ScrollWidgetItemPosX,(m_ScrollWidgetItemAllPositions[m_ItemsPerPage+1])-(m_ItemsPerPage-k)*i*m_ScrollWidgetItemHeight/200));

                       else
                           break;
                   }
            }



          }
        m_CurrentItemValue=m_RequiredItemValue;


 AnimationTimer->start();

}



   else if (m_RequiredItemValue<(m_CurrentItemValue-1))
    {

        AnimationTimer->stop();
        if (m_RequiredItemValue>=m_LowerLimit)
          {

              for (int i = 0; i < 200; ++i)
            {
                for (int j=0; j<m_ItemsPerPage; j++)
                  {
                      if((m_CurrentItemValue-1+j)<=(m_MaxItems-1))
                      ScrollWidgetAnimations.at(m_CurrentItemValue-1+j)->setPosAt(i / 200.0, QPointF(m_ScrollWidgetItemPosX,(m_ScrollWidgetItemAllPositions[j+1])+(m_ItemsPerPage-j)*i*m_ScrollWidgetItemHeight/200));

                      else
                          break;

                  }
                if ((m_RequiredItemValue-(m_ItemsPerPage-1))>m_LowerLimit)
                for (int k=0; k<m_ItemsPerPage; k++)
                   {
                     ScrollWidgetAnimations.at(m_RequiredItemValue+1-k)->setPosAt(i / 200.0, QPointF(m_ScrollWidgetItemPosX,(m_ScrollWidgetItemAllPositions[1])+(m_ItemsPerPage-1-k)*i*m_ScrollWidgetItemHeight/200));

                    }
                else
                {
                    m_RequiredItemValue=3;
                    for (int k=0; k<m_ItemsPerPage; k++)
                       {
                         ScrollWidgetAnimations.at(m_RequiredItemValue+1-k)->setPosAt(i / 200.0, QPointF(m_ScrollWidgetItemPosX,(m_ScrollWidgetItemAllPositions[1])+(m_ItemsPerPage-1-k)*i*m_ScrollWidgetItemHeight/200));

                        }
                }

            }



          }
        m_CurrentItemValue=m_RequiredItemValue-2;



 AnimationTimer->start();

}
      }




