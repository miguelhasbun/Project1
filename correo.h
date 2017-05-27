#ifndef CORREO_H
#define CORREO_H
#include "persona.h"
#include "tipodeencomienda.h"


class Correo
{
public:
    Correo(Persona * remitente,Persona * destina,TipoDeEncomienda tipo,double masa);
    Correo *sig;
    Correo *ant;

private:
    TipoDeEncomienda tipo;
    Persona * remitente;
    Persona * destinatario;
    double masa;
    double total; //<-TOTAL A PAGAR POR EL CORREO
};

#endif // CORREO_H
