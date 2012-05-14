#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
public:
signals:
     void SetImages(QList <QImage >ImageList);
     void SetInitialConditions(int MaxItems, QStringList &ItemNames, int StartVal);
public slots:
     void ItemClicked(int);
private:
    Ui::Dialog *ui;
    QList <QImage >Images;
    QStringList ItemNames;
    QImage Template;

};

#endif // DIALOG_H
