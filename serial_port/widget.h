#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSerialPort>
#include <QString>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QSerialPort *serialPort;
private slots:
    void on_UartOpen_clicked();

    void on_UartClose_clicked();

    void serialPortReadyRead_solt();

    void on_Send_clicked();

    void on_Clear_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
