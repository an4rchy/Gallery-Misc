#ifndef CSCROLLWIDGET_HPP
#define CSCROLLWIDGET_HPP

#include <QWidget>
#include <QtDesigner/QDesignerExportWidget>
#include "ui_CScrollWidget.hpp"
#include <QList>
#include <QLabel>
#include <QGraphicsItemAnimation>
#include <QGraphicsScene>

class QDESIGNER_WIDGET_EXPORT CScrollWidget : public QWidget, private Ui::Ui_CScrollWidget
{
    Q_OBJECT

    public:
        CScrollWidget (QWidget *parent = 0);
        ~CScrollWidget();

public:
signals:
  void GetInitialConditions ();
 
    public slots:

        void ShowItem(int Item);
        void GetInitialConditions (int MaxItems,QStringList &ItemNames, int StartVal);
    private:
        int m_ScrollWidgetItemHeight;
        int m_ScrollWidgetItemWidth;
        int m_ScrollWidgetItemPosX;
        int m_ScrollWidgetItemPosY;
        int m_ScrollWidgetItemAllPositions[7];
        QTimeLine *AnimationTimer;
        QList <QLabel *> ScrollWidgetItemLabels;
	QStringList ItemNamesList;
        QList<QGraphicsProxyWidget *>ScrollWidgetItems;
        QList<QGraphicsItemAnimation *>ScrollWidgetAnimations;
	QGraphicsScene *scene;
        QString m_ReplacementString;
        int m_CurrentItemValue;
        int m_RequiredItemValue;
        int m_MaxItems;
        int m_LowerLimit;
        int m_ItemsPerPage;
        int m_MaxLength;


	



};
#endif
