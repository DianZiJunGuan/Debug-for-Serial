#include "widget.h"
#include "ui_widget.h"
#include <QSerialPortInfo>
#include <QMessageBox>//提示信息框的头文件
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList serialNamePort;

    serialPort = new QSerialPort(this);

    connect(serialPort,SIGNAL(readyRead()),this,SLOT(serialPortReadyRead_solt()));

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        serialNamePort<<info.portName();//QSerialPortInfo::availablePorts()自动搜索可用串口
    }
    ui->SerialNumber->addItems(serialNamePort);//将获取到的串口显示到UI上的对应的组件
}

Widget::~Widget()
{
    delete ui;
}

void Widget::serialPortReadyRead_solt()
{
    QString buf;
    buf = QString(serialPort->readAll());
    ui->Receive->appendPlainText(buf);
}

void Widget::on_UartOpen_clicked()
{
    QSerialPort::BaudRate baudRate;//定义一些变量
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity checkBits;

    if(ui -> baudrate -> currentText() == "2400")
    {
        baudRate = QSerialPort::Baud2400;
    }
    else if(ui -> baudrate -> currentText() == "4800")
    {
        baudRate = QSerialPort::Baud4800;
    }
    else if(ui -> baudrate -> currentText() == "9600")
    {
        baudRate = QSerialPort::Baud9600;
    }
    else if(ui -> baudrate -> currentText() == "19200")
    {
        baudRate = QSerialPort::Baud19200;
    }
    else if(ui -> baudrate -> currentText() == "38400")
    {
        baudRate = QSerialPort::Baud38400;
    }
    else if(ui -> baudrate -> currentText() == "115200")
    {
        baudRate = QSerialPort::Baud115200;
    }

    if(ui -> DataBt -> currentText() == "5")
    {
        dataBits = QSerialPort::Data5;
    }
    else if(ui -> DataBt -> currentText() == "6")
    {
        dataBits = QSerialPort::Data6;
    }
    else if(ui -> DataBt -> currentText() == "7")
    {
        dataBits = QSerialPort::Data7;
    }
    else if(ui -> DataBt -> currentText() == "8")
    {
        dataBits = QSerialPort::Data8;
    }

    if(ui -> StopBt -> currentText() == "1")
    {
        stopBits = QSerialPort::OneStop;
    }
    else if(ui -> DataBt -> currentText() == "1.5")
    {
        stopBits = QSerialPort::OneAndHalfStop;
    }
    else if(ui -> DataBt -> currentText() == "2")
    {
        stopBits = QSerialPort::TwoStop;
    }

    if(ui -> CheckBt -> currentText() == "None")
    {
        checkBits = QSerialPort::NoParity;
    }
    else if(ui -> CheckBt -> currentText() == "奇校验")
    {
        checkBits = QSerialPort::OddParity;
    }
    else if(ui -> CheckBt -> currentText() == "偶校验")
    {
        checkBits = QSerialPort::EvenParity;
    }

    serialPort ->setPortName(ui->SerialNumber->currentText());
    serialPort ->setBaudRate(baudRate);
    serialPort ->setDataBits(dataBits);
    serialPort ->setStopBits(stopBits);
    serialPort ->setParity(checkBits);

    if(serialPort->open(QIODevice::ReadWrite) == true)
    {
        QMessageBox::information(this,QString::fromLocal8Bit("提示"),QString::fromLocal8Bit("成功"));
    }
    else
    {
        QMessageBox::critical(this,QString::fromLocal8Bit("提示"),QString::fromLocal8Bit("失败"));
    }
}

void Widget::on_UartClose_clicked()
{
    serialPort ->close();
}

void Widget::on_Send_clicked()
{
    serialPort->write(ui->Transmit->text().toLocal8Bit().data());
}

void Widget::on_Clear_clicked()
{
    ui->Transmit->clear();
}
