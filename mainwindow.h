#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QInputDialog>
#include <QDir>


#include "header.h"
#include "customer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_btn_Home_clicked();

    void on_btn_Products_clicked();

    void on_btn_About_Us_clicked();

    void on_btn_Contact_Us_clicked();

    void on_btn_Help_clicked();

    void on_btn_LogIn_clicked();

    void on_btn_Exit_LogIn_clicked();

    void on_pb_Add_Member_clicked();

    void AddMember(QVector <Customer> *customerList);

    void on_btn_LogIn_2_clicked();

    void on_btn_RequestCopy_clicked();

    void on_btn_Delete_Member_clicked();

    void on_btn_Product_1_clicked();

    void on_btn_Product_2_clicked();

    void on_btn_Product_3_clicked();

private:
    Ui::MainWindow *ui;
    QVector <Customer> customerList;
    QVector <LoginInfo> loginList;
};

#endif // MAINWINDOW_H
