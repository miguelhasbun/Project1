#include "correo.h"
#include"persona.h"
Correo::Correo(Persona * remitente,Persona * destina,TipoDeEncomienda tipo,double masa)
{
    this->remitente=remitente;\
    this->destinatario=destina;
    this->tipo=tipo;
    this->masa=masa;
    this->total=(masa*0.15)+50;
    sig=0;
    ant=0;

}
double Correo::getMasa(){
    return masa;
}

double Correo::getTotal(){
    return total;
}
