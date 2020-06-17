#include "loginwindow.h"
#include "mainwindow.h"
#include "cameracontrol.h"
#include <QApplication>
#include <share.h>
#include <string>

int main(int argc, char *argv[])
{

    std::shared_ptr<CameraControl> handle = std::make_shared<CameraControl>();
    handle->init();

    QApplication a(argc, argv);
    loginWindow loginPage;
    loginPage.show();
    loginPage.setCommandHandle(handle);

    std::cout<<"camera control handle init success"<<std::endl;
    MainWindow masterPage;
    masterPage.init();
    masterPage.show();
    masterPage.setCommandHandle(handle);

    return a.exec();
}