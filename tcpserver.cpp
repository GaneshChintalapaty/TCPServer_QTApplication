#include "tcpserver.h"
#include "ui_tcpserver.h"
#include <QTcpServer>
#include <QTcpSocket>

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

void TCPServer::on_btnToStartTCPServer_clicked()
{

}

