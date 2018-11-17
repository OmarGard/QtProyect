#include "persona.h"

Persona::Persona()
{
    nombre=telefono=direccion="S/N";
    sexo='M';
}
Persona::Persona(QString nombre,QString telefono,QString direccion,char sexo){
    this->nombre=nombre;
    this->telefono=telefono;
    this->direccion=direccion;
    this->sexo=sexo;
}
QString Persona::getNombre(){
    return nombre;
}
QString Persona::getDireccion(){
    return direccion;
}
QString Persona::getTelefono(){
    return telefono;
}
char Persona::getSexo(){
    return sexo;
}
void Persona::setDireccion(QString direccion){
    this->direccion=direccion;
}
void Persona::setTelefono(QString telefono){
    this->telefono=telefono;
}
void Persona::setNombre(QString nombre){
    this->nombre=nombre;
}
void Persona::setSexo(char sexo){
    this->sexo=sexo;
}
