#include "cemedicos.h"
#include "ui_cemedicos.h"
# include <QString>
#include <QStringList>
# include<QFile>
# include<QTextStream>
#include<QMessageBox>
#include "medico.h"
cemedicos::cemedicos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cemedicos)
{
    ui->setupUi(this);
    QStringList titulos;
    setWindowTitle("Consulta General de Doctores");
    ui->tableWidget->setColumnCount(6);
    titulos<<"IDMedico" << "Especialidad"<< "Nombre" << "Telefono" << "Direccion" << "Sexo";
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
    cargarMedicos();
}

void cemedicos::cargarMedicos()
{
    QFile file("C://Users//skrip_000//Documents//Qt//practica1//medicos.txt");
    //QFile file("medicos.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,tr("Advertencia"),tr("Error al abrir el archivo"));
        return;
    }
    QTextStream in(&file);
    int row=0;
    while(!in.atEnd()){
        QString id=in.readLine();
        QString esp=in.readLine();
        QString nombre=in.readLine();
        QString tel=in.readLine();
        QString dir=in.readLine();
        QString sex=in.readLine();
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,new QTableWidgetItem(id));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,new QTableWidgetItem(esp));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,new QTableWidgetItem(nombre));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,new QTableWidgetItem(tel));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,4,new QTableWidgetItem(dir));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,5,new QTableWidgetItem(sex));
        row++;
    }
    file.close();
}
cemedicos::~cemedicos()
{
    delete ui;
}

void cemedicos::on_t1_textChanged(const QString &arg1)
{

}
