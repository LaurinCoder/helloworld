#include "helloworldwindow.h"
#include "ui_helloworldwindow.h"

HelloWorldWindow::HelloWorldWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HelloWorldWindow)
{
    ui->setupUi(this);
}

HelloWorldWindow::~HelloWorldWindow()
{
    delete ui;
}

void HelloWorldWindow::on_btn_helloworld_clicked()
{
    ui->lblhelloworld->setText("Hallo Welt für GIT");
}
