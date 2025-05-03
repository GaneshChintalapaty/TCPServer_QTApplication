/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
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
    QLabel *labelMessageToClient;
    QLineEdit *msgToClient;
    QPushButton *btnToSendMsgToClient;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *dispMsgFromClient;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelIPAddress;
    QLineEdit *TCP_IP_Address;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelPort;
    QLineEdit *TCP_Port;
    QPushButton *btnToStartTCPServer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TCPServer)
    {
        if (TCPServer->objectName().isEmpty())
            TCPServer->setObjectName("TCPServer");
        TCPServer->resize(592, 407);
        centralwidget = new QWidget(TCPServer);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 330, 571, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelMessageToClient = new QLabel(horizontalLayoutWidget_3);
        labelMessageToClient->setObjectName("labelMessageToClient");

        horizontalLayout_4->addWidget(labelMessageToClient);

        msgToClient = new QLineEdit(horizontalLayoutWidget_3);
        msgToClient->setObjectName("msgToClient");

        horizontalLayout_4->addWidget(msgToClient);

        btnToSendMsgToClient = new QPushButton(horizontalLayoutWidget_3);
        btnToSendMsgToClient->setObjectName("btnToSendMsgToClient");

        horizontalLayout_4->addWidget(btnToSendMsgToClient);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 90, 571, 231));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        dispMsgFromClient = new QTextBrowser(verticalLayoutWidget);
        dispMsgFromClient->setObjectName("dispMsgFromClient");

        verticalLayout_3->addWidget(dispMsgFromClient);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 571, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelIPAddress = new QLabel(layoutWidget);
        labelIPAddress->setObjectName("labelIPAddress");

        horizontalLayout_2->addWidget(labelIPAddress);

        TCP_IP_Address = new QLineEdit(layoutWidget);
        TCP_IP_Address->setObjectName("TCP_IP_Address");
        TCP_IP_Address->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TCP_IP_Address->setReadOnly(true);

        horizontalLayout_2->addWidget(TCP_IP_Address);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(35, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        labelPort = new QLabel(layoutWidget);
        labelPort->setObjectName("labelPort");

        horizontalLayout_3->addWidget(labelPort);

        TCP_Port = new QLineEdit(layoutWidget);
        TCP_Port->setObjectName("TCP_Port");
        TCP_Port->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(TCP_Port);

        btnToStartTCPServer = new QPushButton(layoutWidget);
        btnToStartTCPServer->setObjectName("btnToStartTCPServer");

        horizontalLayout_3->addWidget(btnToStartTCPServer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        TCPServer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TCPServer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 592, 21));
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
        labelMessageToClient->setText(QCoreApplication::translate("TCPServer", "Message: ", nullptr));
        btnToSendMsgToClient->setText(QCoreApplication::translate("TCPServer", "Send", nullptr));
        labelIPAddress->setText(QCoreApplication::translate("TCPServer", "IP Address: ", nullptr));
        TCP_IP_Address->setText(QCoreApplication::translate("TCPServer", "192.168.30.100", nullptr));
        labelPort->setText(QCoreApplication::translate("TCPServer", "Port: ", nullptr));
        TCP_Port->setText(QCoreApplication::translate("TCPServer", "6031", nullptr));
        btnToStartTCPServer->setText(QCoreApplication::translate("TCPServer", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TCPServer: public Ui_TCPServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
