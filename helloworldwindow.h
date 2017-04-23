#ifndef HELLOWORLDWINDOW_H
#define HELLOWORLDWINDOW_H

#include <QMainWindow>

namespace Ui {
class HelloWorldWindow;
}

class HelloWorldWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HelloWorldWindow(QWidget *parent = 0);
    ~HelloWorldWindow();

private slots:
    void on_btn_helloworld_clicked();

private:
    Ui::HelloWorldWindow *ui;
};

#endif // HELLOWORLDWINDOW_H
