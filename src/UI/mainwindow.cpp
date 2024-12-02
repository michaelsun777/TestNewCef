#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 以下是将 SimpleHandler 与窗体进行关联的代码
    CefWindowInfo cef_wnd_info;
    QString str_url = "https://www.baidu.com";
    CefRect win_rect;
    QRect rect = this->geometry();
    win_rect.Set(rect.left(),rect.top(),rect.right()-rect.left(),rect.bottom()-rect.top());

    // win_rect.left = rect.left();
    // win_rect.right = rect.right();
    // win_rect.top = rect.top();
    // win_rect.bottom = rect.bottom();


    cef_wnd_info.SetAsChild(this->winId(), win_rect); //将cef界面嵌入qt界面中
    CefBrowserSettings cef_browser_settings;
    // simple_handler_ = CefRefPtr<SimpleHandler>(new SimpleHandler());
    // CefBrowserHost::CreateBrowser(cef_wnd_info,
    //     simple_handler_,
    //     str_url.toStdString(),
    //     cef_browser_settings,
    //     nullptr,
    //     CefRequestContext::GetGlobalContext());
}

MainWindow::~MainWindow()
{
    delete ui;
}
