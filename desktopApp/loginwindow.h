#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "devicelistwindow.h"

namespace Ui {
class loginWindow;
}

class loginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = nullptr);
    ~loginWindow();

    void setCommandHandle(std::shared_ptr<CameraControl> camera);
private slots:

    void on_deviceSearchButton_clicked();

private:
    Ui::loginWindow *ui;
    MainWindow* masterPage;

    std::shared_ptr<CameraControl> handle;
    devicelistwindow* devicelistWindow;

};

#endif // LOGINWINDOW_H
