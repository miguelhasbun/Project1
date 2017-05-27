#ifndef OFICINA_H
#define OFICINA_H
#include<vector>
#include<iostream>
#include"correo.h"

using namespace std;
class Oficina
{
public:
    Oficina();
    Correo *head;
    void add(Correo *co);
    int getCant();
    string nombre;
    Correo* first_mail;
    Correo* firstMail();
    void eliminarUltimo();
    vector<Correo*> mostrarCorreos();
};

#endif // OFICINA_H
