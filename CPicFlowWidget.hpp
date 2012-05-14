#ifndef CPICFLOWWIDGET_HPP
#define CPICFLOWWIDGET_HPP

#include <QWidget>
#include <QtDesigner/QDesignerExportWidget>
#include "ui_CPicFlowWidget.hpp"

class QDESIGNER_WIDGET_EXPORT CPicFlowWidget : public QWidget, private Ui::Ui_CPicFlowWidget
{
    Q_OBJECT
public:
    CPicFlowWidget (QString &folderpath, QWidget *parent = 0);
    CPicFlowWidget (QWidget *parent =0);
    ~CPicFlowWidget();

public:
signals:

    void LeftArrowReleased ();
    void RightArrowReleased ();
    void scrollBarVal(int scrollbarvalue);
    void DecrementVal(int leftarrowvalue);
    void IncrementVal(int rightarrowvalue);
    void StartVal(int startingvalue);
    void SetItemClickedHF(int ItemClickedHF);
public slots:
  
    void GetImages(QList <QImage >ImageList);
    void ShowSlide(int index);
    void moveScrollBarLeft();
    void moveScrollBarRight();
    void scrollBarReleased();
    void GetItemClickedHF(int ItemClickedHF);

    
    



};
#endif
