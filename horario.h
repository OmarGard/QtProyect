#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
private:
    int inicio;
    int fin;
public:
    Horario();
    Horario(int,int);
    int getHora(){return inicio;}
    int getMinutos(){return fin;}
};

#endif // HORARIO_H
