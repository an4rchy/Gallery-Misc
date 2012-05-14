/********************************************************************************
** Form generated from reading UI file 'CPicFlowWidget.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPICFLOWWIDGET_H
#define UI_CPICFLOWWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "CPictureFlowWidget.hpp"

QT_BEGIN_NAMESPACE

class Ui_Ui_CPicFlowWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *LeftArrowFrame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *LeftArrow;
    QFrame *CenterFrame;
    QVBoxLayout *verticalLayout;
    CPictureFlowWidget *PictureFlow;
    QScrollBar *ScrollBar;
    QFrame *RightArrowFrame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *RightArrow;

    void setupUi(QWidget *Ui_CPicFlowWidget)
    {
        if (Ui_CPicFlowWidget->objectName().isEmpty())
            Ui_CPicFlowWidget->setObjectName(QString::fromUtf8("Ui_CPicFlowWidget"));
        Ui_CPicFlowWidget->resize(603, 353);
//        Ui_CPicFlowWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 178, 196)"));
        Ui_CPicFlowWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 138, 126)"));
        horizontalLayout = new QHBoxLayout(Ui_CPicFlowWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LeftArrowFrame = new QFrame(Ui_CPicFlowWidget);
        LeftArrowFrame->setObjectName(QString::fromUtf8("LeftArrowFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LeftArrowFrame->sizePolicy().hasHeightForWidth());
        LeftArrowFrame->setSizePolicy(sizePolicy);
        LeftArrowFrame->setMinimumSize(QSize(50, 0));
        LeftArrowFrame->setFrameShape(QFrame::NoFrame);
        LeftArrowFrame->setFrameShadow(QFrame::Plain);
        LeftArrowFrame->setLineWidth(0);
        verticalLayout_2 = new QVBoxLayout(LeftArrowFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 0, 2, 0);
        LeftArrow = new QPushButton(LeftArrowFrame);
        LeftArrow->setObjectName(QString::fromUtf8("LeftArrow"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(128);
        sizePolicy1.setVerticalStretch(128);
        sizePolicy1.setHeightForWidth(LeftArrow->sizePolicy().hasHeightForWidth());
        LeftArrow->setSizePolicy(sizePolicy1);
        LeftArrow->setMinimumSize(QSize(50, 50));
        LeftArrow->setStyleSheet(QString::fromUtf8("border-image:url(:/Images/left4.png);"));
        LeftArrow->setAutoDefault(false);

        verticalLayout_2->addWidget(LeftArrow);


        horizontalLayout->addWidget(LeftArrowFrame);

        CenterFrame = new QFrame(Ui_CPicFlowWidget);
        CenterFrame->setObjectName(QString::fromUtf8("CenterFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CenterFrame->sizePolicy().hasHeightForWidth());
        CenterFrame->setSizePolicy(sizePolicy2);
        CenterFrame->setFrameShape(QFrame::NoFrame);
        CenterFrame->setFrameShadow(QFrame::Plain);
        CenterFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(CenterFrame);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 5);
        PictureFlow = new CPictureFlowWidget(CenterFrame);
        PictureFlow->setObjectName(QString::fromUtf8("PictureFlow"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(PictureFlow->sizePolicy().hasHeightForWidth());
        PictureFlow->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(PictureFlow);

        ScrollBar = new QScrollBar(CenterFrame);
        ScrollBar->setObjectName(QString::fromUtf8("ScrollBar"));
        ScrollBar->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal { \n"
"	border-image: url(:/Images/scrollbar_h_bg.png) 0 4 0 4 stretch; \n"
"	height: 15px; \n"
"	margin: 0 15px 0 15px; \n"
"	padding-left:-5px; \n"
"	padding-right:-5px; \n"
"	border-width: 0px 4px 0px 4px;\n"
"} \n"
"QScrollBar::handle:horizontal { \n"
"	border-image: url(:/Images/scrollbar_h_body.png) 0 4 0 4 stretch; \n"
"	min-width: 20px; \n"
"	border-width: 0px 4px 0px 4px;\n"
"} \n"
"QScrollBar::handle:horizontal:hover { \n"
"	border-image: url(:/Images/scrollbar_h_body_hover.png)0 4 0 4 stretch; \n"
"	border-width: 0px 4px 0px 4px;\n"
"} \n"
"QScrollBar::handle:horizontal:pressed { \n"
"	border-image: url(:/Images/scrollbar_h_body_pressed.png) 0 4 0 4 stretch; \n"
"	border-width: 0px 4px 0px 4px;\n"
"} \n"
"QScrollBar::sub-line:horizontal { \n"
"	border: 0px; \n"
"	background: none; \n"
"	width: 15px; \n"
"	subcontrol-position: left; \n"
"	subcontrol-origin: margin;\n"
"} \n"
"QScrollBar::add-line:horizontal { \n"
"	border: 0px; \n"
"	background: none; \n"
"	width: 15px; \n"
"	su"
                        "bcontrol-position: right; \n"
"	subcontrol-origin: margin;\n"
"} \n"
"QScrollBar::left-arrow:horizontal { \n"
"	background-image: url(:/Images/scrollbar_h_leftArrow.png); \n"
"	background-repeat: no repeat; \n"
"	width: 15px; \n"
"	height: 15px;\n"
"} \n"
"QScrollBar::left-arrow:horizontal:hover { \n"
"	background-image: url(:/Images/scrollbar_h_leftArrow_hover.png); \n"
"	background-repeat: no repeat; \n"
"	width: 15px; \n"
"	height: 15px;\n"
"} \n"
"QScrollBar::left-arrow:horizontal:pressed { \n"
"	background-image: url(:/Images/scrollbar_h_leftArrow_pressed.png); \n"
"	background-repeat: no repeat; \n"
"	width: 15px; \n"
"	height: 15px;\n"
"} \n"
"QScrollBar::right-arrow:horizontal { \n"
"	background-image: url(:/Images/scrollbar_h_rightArrow.png); \n"
"	background-repeat: no repeat; \n"
"	width: 15px; \n"
"	height: 15px;\n"
"} \n"
"QScrollBar::right-arrow:horizontal:hover { \n"
"	background-image: url(:/Images/scrollbar_h_rightArrow_hover.png); \n"
"	background-repeat: no repeat; \n"
"	width: 15px; \n"
"	h"
                        "eight: 15px;\n"
"} \n"
"QScrollBar::right-arrow:horizontal:pressed { \n"
"	background-image: url(:/Images/scrollbar_h_rightArrow_pressed.png);\n"
"	background-repeat: no repeat; \n"
"	width: 15px; \n"
"	height: 15px;\n"
"} \n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal { \n"
"	background: none;\n"
"} \n"
""));
        ScrollBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(ScrollBar);


        horizontalLayout->addWidget(CenterFrame);

        RightArrowFrame = new QFrame(Ui_CPicFlowWidget);
        RightArrowFrame->setObjectName(QString::fromUtf8("RightArrowFrame"));
        sizePolicy.setHeightForWidth(RightArrowFrame->sizePolicy().hasHeightForWidth());
        RightArrowFrame->setSizePolicy(sizePolicy);
        RightArrowFrame->setMinimumSize(QSize(50, 0));
        RightArrowFrame->setFrameShape(QFrame::NoFrame);
        RightArrowFrame->setFrameShadow(QFrame::Plain);
        RightArrowFrame->setLineWidth(0);
        verticalLayout_3 = new QVBoxLayout(RightArrowFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 0, 2, 0);
        RightArrow = new QPushButton(RightArrowFrame);
        RightArrow->setObjectName(QString::fromUtf8("RightArrow"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(50);
        sizePolicy4.setVerticalStretch(50);
        sizePolicy4.setHeightForWidth(RightArrow->sizePolicy().hasHeightForWidth());
        RightArrow->setSizePolicy(sizePolicy4);
        RightArrow->setMinimumSize(QSize(50, 50));
        RightArrow->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/right4.png);"));

        verticalLayout_3->addWidget(RightArrow);


        horizontalLayout->addWidget(RightArrowFrame);


        retranslateUi(Ui_CPicFlowWidget);

        QMetaObject::connectSlotsByName(Ui_CPicFlowWidget);
    } // setupUi

    void retranslateUi(QWidget *Ui_CPicFlowWidget)
    {
        Ui_CPicFlowWidget->setWindowTitle(QApplication::translate("Ui_CPicFlowWidget", "Form", 0, QApplication::UnicodeUTF8));
        LeftArrow->setText(QString());
#ifndef QT_NO_TOOLTIP
        PictureFlow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        PictureFlow->setWhatsThis(QApplication::translate("Ui_CPicFlowWidget", "This is Picture Flow, an image display plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        RightArrow->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ui_CPicFlowWidget: public Ui_Ui_CPicFlowWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPICFLOWWIDGET_H
