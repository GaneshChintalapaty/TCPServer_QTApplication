#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QMainWindow>
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class TCPServer;
}
QT_END_NAMESPACE

class TCPServer : public QMainWindow
{
    Q_OBJECT

public:
    TCPServer(QWidget *parent = nullptr);
    ~TCPServer();

    void startTCPServer(quint16 port);
    void stopTCPServer(void);

private slots:
    void on_btnToStartTCPServer_clicked();

private:
    Ui::TCPServer *ui;

    bool serverRunning = false;  //Server status

protected:

    void closeEvent(QCloseEvent *event) override;

};
#endif // TCPSERVER_H
