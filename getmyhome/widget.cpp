#include "widget.h"
#include "ui_widget.h"

#include <QDir>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setHomePath()
{
    QString path = QDir::homePath();
    ui->pathLabel->setText(path);
}
