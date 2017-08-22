#include "widget.h"
#include "ui_widget.h"
#include <QTime>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    updateTime();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::updateTime()
{
    QTime time = QTime::currentTime();
    QString str = time.toString("hh:mm:ss");
    ui->label_2->setText(str);
}
