/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *SerialNumber;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *baudrate;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *StopBt;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *DataBt;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *CheckBt;
    QVBoxLayout *verticalLayout_4;
    QPushButton *UartOpen;
    QPushButton *UartClose;
    QPlainTextEdit *Receive;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Send;
    QSpacerItem *verticalSpacer;
    QPushButton *Clear;
    QLineEdit *Transmit;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(700, 600);
        Widget->setAutoFillBackground(false);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);

        verticalLayout->addWidget(label);

        SerialNumber = new QComboBox(Widget);
        SerialNumber->setObjectName(QString::fromUtf8("SerialNumber"));
        SerialNumber->setMinimumSize(QSize(190, 30));

        verticalLayout->addWidget(SerialNumber);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 30));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        baudrate = new QComboBox(Widget);
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->setObjectName(QString::fromUtf8("baudrate"));
        baudrate->setMinimumSize(QSize(90, 30));

        horizontalLayout->addWidget(baudrate);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 30));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        StopBt = new QComboBox(Widget);
        StopBt->addItem(QString());
        StopBt->addItem(QString());
        StopBt->addItem(QString());
        StopBt->setObjectName(QString::fromUtf8("StopBt"));
        StopBt->setMinimumSize(QSize(90, 30));

        horizontalLayout_2->addWidget(StopBt);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(80, 30));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        DataBt = new QComboBox(Widget);
        DataBt->addItem(QString());
        DataBt->addItem(QString());
        DataBt->addItem(QString());
        DataBt->addItem(QString());
        DataBt->setObjectName(QString::fromUtf8("DataBt"));
        DataBt->setMinimumSize(QSize(90, 30));

        horizontalLayout_3->addWidget(DataBt);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 30));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        CheckBt = new QComboBox(Widget);
        CheckBt->addItem(QString());
        CheckBt->addItem(QString());
        CheckBt->addItem(QString());
        CheckBt->setObjectName(QString::fromUtf8("CheckBt"));
        CheckBt->setMinimumSize(QSize(90, 30));

        horizontalLayout_4->addWidget(CheckBt);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        UartOpen = new QPushButton(Widget);
        UartOpen->setObjectName(QString::fromUtf8("UartOpen"));
        UartOpen->setMinimumSize(QSize(190, 30));
        UartOpen->setFont(font);

        verticalLayout_4->addWidget(UartOpen);

        UartClose = new QPushButton(Widget);
        UartClose->setObjectName(QString::fromUtf8("UartClose"));
        UartClose->setMinimumSize(QSize(190, 30));
        UartClose->setFont(font);

        verticalLayout_4->addWidget(UartClose);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 2);

        Receive = new QPlainTextEdit(Widget);
        Receive->setObjectName(QString::fromUtf8("Receive"));
        Receive->setReadOnly(true);

        gridLayout->addWidget(Receive, 0, 2, 2, 1);

        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Send = new QPushButton(Widget);
        Send->setObjectName(QString::fromUtf8("Send"));
        QFont font1;
        font1.setPointSize(11);
        Send->setFont(font1);

        verticalLayout_3->addWidget(Send);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        Clear = new QPushButton(Widget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setFont(font1);

        verticalLayout_3->addWidget(Clear);


        horizontalLayout_5->addLayout(verticalLayout_3);

        Transmit = new QLineEdit(Widget);
        Transmit->setObjectName(QString::fromUtf8("Transmit"));
        Transmit->setMinimumSize(QSize(560, 90));

        horizontalLayout_5->addWidget(Transmit);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 171, 21));
        QFont font2;
        font2.setPointSize(12);
        label_6->setFont(font2);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 40, 121, 21));
        label_7->setFont(font2);

        gridLayout->addWidget(groupBox, 3, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        baudrate->setItemText(0, QCoreApplication::translate("Widget", "9600", nullptr));
        baudrate->setItemText(1, QCoreApplication::translate("Widget", "2400", nullptr));
        baudrate->setItemText(2, QCoreApplication::translate("Widget", "4800", nullptr));
        baudrate->setItemText(3, QCoreApplication::translate("Widget", "19200", nullptr));
        baudrate->setItemText(4, QCoreApplication::translate("Widget", "38400", nullptr));
        baudrate->setItemText(5, QCoreApplication::translate("Widget", "115200", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        StopBt->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        StopBt->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        StopBt->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        DataBt->setItemText(0, QCoreApplication::translate("Widget", "8", nullptr));
        DataBt->setItemText(1, QCoreApplication::translate("Widget", "7", nullptr));
        DataBt->setItemText(2, QCoreApplication::translate("Widget", "6", nullptr));
        DataBt->setItemText(3, QCoreApplication::translate("Widget", "5", nullptr));

        label_5->setText(QCoreApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        CheckBt->setItemText(0, QCoreApplication::translate("Widget", "None", nullptr));
        CheckBt->setItemText(1, QCoreApplication::translate("Widget", "\345\245\207\346\240\241\351\252\214", nullptr));
        CheckBt->setItemText(2, QCoreApplication::translate("Widget", "\345\201\266\346\240\241\351\252\214", nullptr));

        UartOpen->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        UartClose->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        Send->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        Clear->setText(QCoreApplication::translate("Widget", "\345\206\205\345\256\271\346\270\205\351\231\244", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QCoreApplication::translate("Widget", "\347\256\200\346\230\223\344\270\262\345\217\243\345\212\251\346\211\213V1.0", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\344\275\234\350\200\205\357\274\232\351\231\210\344\274\237\346\235\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
