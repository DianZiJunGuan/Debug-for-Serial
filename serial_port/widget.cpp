#include "widget.h"
#include "ui_widget.h"
#include <QSerialPortInfo>
#include <QMessageBox>//��ʾ��Ϣ���ͷ�ļ�
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList serialNamePort;

    serialPort = new QSerialPort(this);

    connect(serialPort,SIGNAL(readyRead()),this,SLOT(serialPortReadyRead_solt()));

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        serialNamePort<<info.portName();//QSerialPortInfo::availablePorts()�Զ��������ô���
    }
    ui->SerialNumber->addItems(serialNamePort);//����ȡ���Ĵ�����ʾ��UI�ϵĶ�Ӧ�����
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
    QSerialPort::BaudRate baudRate;//����һЩ����
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
    else if(ui -> CheckBt -> currentText() == "��У��")
    {
        checkBits = QSerialPort::OddParity;
    }
    else if(ui -> CheckBt -> currentText() == "żУ��")
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
        QMessageBox::information(this,QString::fromLocal8Bit("��ʾ"),QString::fromLocal8Bit("�ɹ�"));
    }
    else
    {
        QMessageBox::critical(this,QString::fromLocal8Bit("��ʾ"),QString::fromLocal8Bit("ʧ��"));
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
