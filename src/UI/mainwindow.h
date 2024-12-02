#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QString>
#include <QRect>


#include "../../3rd/cef/code/simple_handler.h"
#include "../../3rd/cef/code/include/cef_request_context.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CefRefPtr<SimpleHandler> simple_handler_;
};

#endif // MAINWINDOW_H
