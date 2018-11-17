#ifndef MEDICO_H
#define MEDICO_H
#include "persona.h"
#include<QString>
class medico:public Persona
{
private:
    int IDMedico;
    QString especialidad;
public:
    medico();
    int getID();
    QString getEspecialidad();
    void setID(int);
    void setEspecialidad(QString);

};

#endif // MEDICO_H
