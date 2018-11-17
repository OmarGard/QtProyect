#include "medico.h"
#include<QString>
medico::medico()
{
    Persona();
    IDMedico=9999;
    especialidad="S/N";
}
int medico::getID(){
    return IDMedico;
}
QString medico::getEspecialidad(){
    return especialidad;
}
void medico::setID(int ID){
    this->IDMedico=ID;
}
void medico::setEspecialidad(QString especialidad){
    this->especialidad=especialidad;
}

