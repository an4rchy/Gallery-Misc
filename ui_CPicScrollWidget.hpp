/********************************************************************************
** Form generated from reading UI file 'CPicScrollWidget.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPICSCROLLWIDGET_H
#define UI_CPICSCROLLWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include "CPicFlowWidget.hpp"
#include "CScrollWidget.hpp"

QT_BEGIN_NAMESPACE

class Ui_Ui_CPicScrollWidget
{
public:
    QHBoxLayout *horizontalLayout;
    CPicFlowWidget *PicFlow;
    CScrollWidget *Scroll;

    void setupUi(QWidget *Ui_CPicScrollWidget)
    {
        if (Ui_CPicScrollWidget->objectName().isEmpty())
            Ui_CPicScrollWidget->setObjectName(QString::fromUtf8("Ui_CPicScrollWidget"));
        Ui_CPicScrollWidget->resize(672, 322);
        horizontalLayout = new QHBoxLayout(Ui_CPicScrollWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PicFlow = new CPicFlowWidget(Ui_CPicScrollWidget);
        PicFlow->setObjectName(QString::fromUtf8("PicFlow"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PicFlow->sizePolicy().hasHeightForWidth());
        PicFlow->setSizePolicy(sizePolicy);
        PicFlow->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 178, 196)"));

        horizontalLayout->addWidget(PicFlow);

        Scroll = new CScrollWidget(Ui_CPicScrollWidget);
        Scroll->setObjectName(QString::fromUtf8("Scroll"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Scroll->sizePolicy().hasHeightForWidth());
        Scroll->setSizePolicy(sizePolicy1);
        Scroll->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(Scroll);
        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(Ui_CPicScrollWidget);

        QMetaObject::connectSlotsByName(Ui_CPicScrollWidget);
    } // setupUi

    void retranslateUi(QWidget *Ui_CPicScrollWidget)
    {
        Ui_CPicScrollWidget->setWindowTitle(QApplication::translate("Ui_CPicScrollWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PicFlow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        PicFlow->setWhatsThis(QApplication::translate("Ui_CPicScrollWidget", "This is the Pic Flow Widget plugin, it adds Arrows and ScrollBar functionality to PictureFlow plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        Scroll->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Scroll->setWhatsThis(QApplication::translate("Ui_CPicScrollWidget", "This is Scroll Widget, an List Scroll display plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class Ui_CPicScrollWidget: public Ui_Ui_CPicScrollWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPICSCROLLWIDGET_H
