/********************************************************************************
** Form generated from reading UI file 'CScrollWidget.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSCROLLWIDGET_H
#define UI_CSCROLLWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ui_CScrollWidget
{
public:
    QGraphicsView *scrollView;

    void setupUi(QWidget *Ui_CScrollWidget)
    {
        if (Ui_CScrollWidget->objectName().isEmpty())
            Ui_CScrollWidget->setObjectName(QString::fromUtf8("Ui_CScrollWidget"));
        Ui_CScrollWidget->resize(226, 328);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Ui_CScrollWidget->sizePolicy().hasHeightForWidth());
        Ui_CScrollWidget->setSizePolicy(sizePolicy);
        scrollView = new QGraphicsView(Ui_CScrollWidget);
        scrollView->setObjectName(QString::fromUtf8("scrollView"));
        scrollView->setGeometry(QRect(0, 0, 226, 328));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollView->sizePolicy().hasHeightForWidth());
        scrollView->setSizePolicy(sizePolicy1);
        scrollView->setFrameShape(QFrame::NoFrame);
        scrollView->setFrameShadow(QFrame::Plain);
        scrollView->setLineWidth(0);
        scrollView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        retranslateUi(Ui_CScrollWidget);

        QMetaObject::connectSlotsByName(Ui_CScrollWidget);
    } // setupUi

    void retranslateUi(QWidget *Ui_CScrollWidget)
    {
        Ui_CScrollWidget->setWindowTitle(QApplication::translate("Ui_CScrollWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ui_CScrollWidget: public Ui_Ui_CScrollWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSCROLLWIDGET_H
