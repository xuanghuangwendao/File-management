/********************************************************************************
** Form generated from reading UI file 'mainwindow4.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW4_H
#define UI_MAINWINDOW4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow4
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *key_word;
    QTextEdit *root_name;

    void setupUi(QWidget *mainwindow4)
    {
        if (mainwindow4->objectName().isEmpty())
            mainwindow4->setObjectName(QString::fromUtf8("mainwindow4"));
        mainwindow4->resize(850, 660);
        pushButton = new QPushButton(mainwindow4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(740, 30, 93, 28));
        pushButton_2 = new QPushButton(mainwindow4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 30, 100, 60));
        textBrowser = new QTextBrowser(mainwindow4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 110, 800, 500));
        gridLayoutWidget = new QWidget(mainwindow4);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 30, 381, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(1, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        key_word = new QTextEdit(gridLayoutWidget);
        key_word->setObjectName(QString::fromUtf8("key_word"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(key_word->sizePolicy().hasHeightForWidth());
        key_word->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(key_word, 2, 1, 1, 1);

        root_name = new QTextEdit(gridLayoutWidget);
        root_name->setObjectName(QString::fromUtf8("root_name"));
        root_name->setEnabled(true);
        sizePolicy1.setHeightForWidth(root_name->sizePolicy().hasHeightForWidth());
        root_name->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(root_name, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 10);
        gridLayout->setColumnMinimumWidth(0, 1);
        gridLayout->setColumnMinimumWidth(1, 10);

        retranslateUi(mainwindow4);
        QObject::connect(pushButton, SIGNAL(clicked()), mainwindow4, SLOT(slot1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), mainwindow4, SLOT(slot2()));

        QMetaObject::connectSlotsByName(mainwindow4);
    } // setupUi

    void retranslateUi(QWidget *mainwindow4)
    {
        mainwindow4->setWindowTitle(QApplication::translate("mainwindow4", "mainwindow4", nullptr));
        pushButton->setText(QApplication::translate("mainwindow4", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QApplication::translate("mainwindow4", "\346\225\264\347\220\206", nullptr));
        textBrowser->setHtml(QApplication::translate("mainwindow4", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QApplication::translate("mainwindow4", "\346\226\207\344\273\266\347\233\256\345\275\225", nullptr));
        label_2->setText(QApplication::translate("mainwindow4", "\347\233\256\346\240\207\347\233\256\345\275\225", nullptr));
        key_word->setHtml(QApplication::translate("mainwindow4", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        root_name->setHtml(QApplication::translate("mainwindow4", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow4: public Ui_mainwindow4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW4_H
