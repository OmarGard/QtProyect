#include "menu.h"
#include "ui_menu.h"
#include "cgmedicos.h"
# include "cemedicos.h"
menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_actionSalir_triggered()
{
    qApp->exit(0);
}

void menu::on_actionGeneral_triggered()
{
    CGMedicos* w= new CGMedicos();
    w->show();
}

void menu::on_actionEspecialista_triggered()
{
    cemedicos* w=new cemedicos();
    w->show();
}
