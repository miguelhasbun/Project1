#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include "tipodesexo.h"

using namespace std;
class Persona
{
public:

    ///CONSTRUCTOR
    Persona(string id,string nombre,TipoDeSexo sexo,string direccion);

    //GETTERS
    string getId();
    string getNombre();
    TipoDeSexo getSexo();
    string getDireccion();
    int correosEnviados();
    int correosRecibidos();
    int correosrecibidos, correosenviados;


private:

    //ATRIBUTOS
    string id, nombre, direccion;
    TipoDeSexo sexo;
   // int correosrecibidos, correosenviados;
};

#endif // PERSONA_H
