#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
# include<QMessageBox>
#include "menu.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_restartButton_clicked()
{
    qApp->exit(0);
}

void MainWindow::on_loginButton_clicked()
{
    QString user = ui->username->text();
    QString pass = ui->password->text();
    if(user=="admin" && pass=="1234"){
        menu* app =new menu();
        app->show();
        close();
    }
    else
    {
       //QMessageBox::information(this,tr("WARNING"),tr("JHSHSHSHS"),QMessageBox::Ok | QMessageBox::Cancel ,QMessageBox::Cancel);
        QMessageBox msgBox;
        msgBox.setWindowTitle("Advertencia");
        msgBox.setText("Usuario o contraseña incorrecta.");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
}
