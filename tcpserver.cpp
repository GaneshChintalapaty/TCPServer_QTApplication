#include "tcpserver.h"
#include "ui_tcpserver.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>

QTcpServer *tcpServer = nullptr;
QTcpSocket *clientSocket = nullptr;

TCPServer::TCPServer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TCPServer)
{
    ui->setupUi(this);
}

TCPServer::~TCPServer()
{
    delete ui;
}

void TCPServer::startTCPServer(quint16 port)
{
    tcpServer = new QTcpServer(this);

    if(!tcpServer->listen(QHostAddress::Any, port))
    {
        qDebug()<<"Server could not start!\n";
        ui->dispMsgFromClient->append("Failed to start server!");
        return;
    }

    ui->dispMsgFromClient->append("Server started on port " + QString::number(port));

    connect(tcpServer, &QTcpServer::newConnection, this, [=]() {
        clientSocket = tcpServer->nextPendingConnection();
        ui->dispMsgFromClient->append("Client connected!");

        connect(clientSocket, &QTcpSocket::readyRead, this, [=]() {
            QByteArray data = clientSocket->readAll();
            ui->dispMsgFromClient->append("Client: " + QString(data));
        });
    });
}

void TCPServer::on_btnToStartTCPServer_clicked()
{
    quint16 port = ui->TCP_Port->text().toUInt();
    startTCPServer(port);
}

