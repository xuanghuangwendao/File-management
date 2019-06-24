/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_5;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(600, 500);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 130, 100, 40));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 190, 100, 40));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 250, 100, 40));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 370, 100, 40));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 550, 50));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 310, 100, 40));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 450, 201, 20));

        retranslateUi(Widget);
        QObject::connect(pushButton_5, SIGNAL(clicked()), Widget, SLOT(slot1()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\346\237\245\350\257\242\346\226\207\346\241\243", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\347\273\237\350\256\241\346\226\207\346\241\243", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\346\237\245\346\211\276\346\226\207\346\241\243", nullptr));
        pushButton_4->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600;\">\346\226\207\346\241\243\346\237\245\350\257\242\347\256\241\347\220\206\347\263\273\347\273\237 V2.0</span></p></body></html>", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "\347\256\241\347\220\206\346\226\207\346\241\243", nullptr));
        label_2->setText(QApplication::translate("Widget", "\350\201\224\347\263\273\346\226\271\345\274\2173406401355@qq.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
