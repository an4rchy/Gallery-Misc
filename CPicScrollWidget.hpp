#ifndef CPICSCROLLWIDGET_HPP
#define CPICSCROLLWIDGET_HPP

#include <QWidget>
#include <QtDesigner/QDesignerExportWidget>
#include "ui_CPicScrollWidget.hpp"


class QDESIGNER_WIDGET_EXPORT CPicScrollWidget : public QWidget, private Ui::Ui_CPicScrollWidget
{
    Q_OBJECT
public:
    CPicScrollWidget ( QWidget *parent = 0);
    ~CPicScrollWidget();

public:
signals:
    void SetInitialConditions(int MaxItems,QStringList &ItemNames, int StartVal);
    void SetImages (QList<QImage >ImageList);
    void SetItemClickedHS(int ItemClickedHS);
public slots:
    void GetImages(QList<QImage >ImageList);
    void GetInitialConditions (int MaxItems, QStringList &ItemNames, int StartVal);
    void GetItemClickedHS(int ItemClickedHS);

    



};
#endif
