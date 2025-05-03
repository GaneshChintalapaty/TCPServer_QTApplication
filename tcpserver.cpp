#include "tcpserver.h"
#include "ui_tcpserver.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>
#include <QMessageBox>
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
        serverRunning = false;
        ui->btnToStartTCPServer->setText("Start");
        return;
    }

    QString localIP;
    const QList<QHostAddress> &addresses = QNetworkInterface::allAddresses();
    for (const QHostAddress &addr : addresses) {
        if (addr.protocol() == QAbstractSocket::IPv4Protocol && !addr.isLoopback()) {
            localIP = addr.toString();
            break;
        }
    }
    ui->TCP_IP_Address->setText(localIP);

    ui->dispMsgFromClient->append("Server started on port " + QString::number(port));
    serverRunning = true;
    ui->btnToStartTCPServer->setText("Stop");

    connect(tcpServer, &QTcpServer::newConnection, this, [=]() {
        clientSocket = tcpServer->nextPendingConnection();
        ui->dispMsgFromClient->append("Client connected!");

        connect(clientSocket, &QTcpSocket::readyRead, this, [=]() {
            QByteArray data = clientSocket->readAll();
            ui->dispMsgFromClient->append("Client: " + QString(data));
        });
    });
}

void TCPServer::sendMessageToClient(const QString &message)
{
    if (clientSocket && clientSocket->state() == QAbstractSocket::ConnectedState)
    {
        clientSocket->write(message.toUtf8());
        ui->dispMsgFromClient->append("Server: " + message);
    }
    else
    {
        ui->dispMsgFromClient->append("No client connected.");
    }
}

void TCPServer::stopTCPServer(void)
{
    if(tcpServer)
    {
        tcpServer->close();
        tcpServer->deleteLater();
        tcpServer = nullptr;
    }
    clientSocket = nullptr;
    ui->dispMsgFromClient->append("Server stopped.");
    ui->btnToStartTCPServer->setText("Start");
    serverRunning = false;
}

void TCPServer::on_btnToStartTCPServer_clicked()
{
    if(!serverRunning)
    {
        quint16 port = ui->TCP_Port->text().toUInt();
        startTCPServer(port);
    }
    else
    {
        stopTCPServer();
    }
}

void TCPServer::closeEvent(QCloseEvent *event)
{
    if (QMessageBox::question(this, "Exit", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        if (serverRunning) {
            stopTCPServer();
        }
        event->accept();
    }
    else {
        event->ignore();  // cancel closing
    }
}

void TCPServer::on_btnToSendMsgToClient_clicked()
{
    QString msg = ui->msgToClient->text();
    if (!msg.isEmpty()) {
        sendMessageToClient(msg);
        ui->msgToClient->clear();
    }
}

