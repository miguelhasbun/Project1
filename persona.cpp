#include "persona.h"

Persona::Persona(string id,string nombre,TipoDeSexo sexo,string direccion)
{
    this->id=id;
    this->nombre=nombre;
    this->sexo=sexo;
    this->direccion=direccion;
    this->correosenviados=0;
    this->correosrecibidos=0;

}

string Persona::getId(){
    return this->id;
}

string Persona::getNombre(){
    return this->nombre;
}

TipoDeSexo Persona::getSexo(){
    return this->sexo;
}

string Persona::getDireccion(){
    return this->direccion;
}

int Persona::correosEnviados(){
    return this->correosenviados;
}

int Persona::correosRecibidos(){
    return this->correosrecibidos;
}
