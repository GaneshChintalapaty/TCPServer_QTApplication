/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TCPServer
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelIPAddress;
    QLineEdit *TCP_IP_Address;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelPort;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *TCP_Port;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TCPServer)
    {
        if (TCPServer->objectName().isEmpty())
            TCPServer->setObjectName("TCPServer");
        TCPServer->resize(592, 400);
        centralwidget = new QWidget(TCPServer);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 330, 571, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_4->addWidget(pushButton_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 90, 571, 231));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(verticalLayoutWidget);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_3->addWidget(textBrowser);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 571, 81));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelIPAddress = new QLabel(widget);
        labelIPAddress->setObjectName("labelIPAddress");

        horizontalLayout_2->addWidget(labelIPAddress);

        TCP_IP_Address = new QLineEdit(widget);
        TCP_IP_Address->setObjectName("TCP_IP_Address");
        TCP_IP_Address->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(TCP_IP_Address);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelPort = new QLabel(widget);
        labelPort->setObjectName("labelPort");

        horizontalLayout_3->addWidget(labelPort);

        horizontalSpacer_2 = new QSpacerItem(35, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        TCP_Port = new QLineEdit(widget);
        TCP_Port->setObjectName("TCP_Port");
        TCP_Port->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(TCP_Port);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        TCPServer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TCPServer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 592, 17));
        TCPServer->setMenuBar(menubar);
        statusbar = new QStatusBar(TCPServer);
        statusbar->setObjectName("statusbar");
        TCPServer->setStatusBar(statusbar);

        retranslateUi(TCPServer);

        QMetaObject::connectSlotsByName(TCPServer);
    } // setupUi

    void retranslateUi(QMainWindow *TCPServer)
    {
        TCPServer->setWindowTitle(QCoreApplication::translate("TCPServer", "TCPServer", nullptr));
        label->setText(QCoreApplication::translate("TCPServer", "Message: ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TCPServer", "Send", nullptr));
        labelIPAddress->setText(QCoreApplication::translate("TCPServer", "IP Address: ", nullptr));
        TCP_IP_Address->setText(QCoreApplication::translate("TCPServer", "192.168.30.100", nullptr));
        labelPort->setText(QCoreApplication::translate("TCPServer", "Port: ", nullptr));
        TCP_Port->setText(QCoreApplication::translate("TCPServer", "6031", nullptr));
        pushButton->setText(QCoreApplication::translate("TCPServer", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TCPServer: public Ui_TCPServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
