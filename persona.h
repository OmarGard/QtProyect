#ifndef PERSONA_H
#define PERSONA_H
#include<QString>

class Persona
{
protected:
    QString nombre,telefono,direccion;
    char sexo;
public:
    Persona();
    Persona(QString,QString,QString,char);
    QString getNombre();
    QString getTelefono();
    QString getDireccion();
    char getSexo();
    void setNombre(QString);
    void setTelefono(QString);
    void setSexo(char);
    void setDireccion(QString);
};

#endif // PERSONA_H
