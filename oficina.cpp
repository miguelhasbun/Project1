#include "oficina.h"

Oficina::Oficina()
{
    nombre="HONDURAS EXPRESS";
    head=0;
}

void Oficina::add(Correo* c){
if (head != 0){
    c->sig = head;
  }
    head = c;
    Correo * temp=head;
    while(temp!=0){
        first_mail=temp;
        temp=temp->sig;
    }

}

int Oficina::getCant(){
    int cant=0;
    Correo* temp=head;
    while(temp!=0){
        cant+=1;
        temp=temp->sig;
    }
    return cant;
}

Correo* Oficina::firstMail(){
    Correo*temp2=head;
    while(temp2!=0){
        first_mail=temp2;
        temp2=temp2->sig;
    }

    return first_mail;
 }

 vector<Correo*> Oficina::mostrarCorreos(){
    vector<Correo *>correos;
    Correo*temp=head;
    while(temp!=0){
        correos.push_back(temp);
        temp=temp->sig;
    }

    return correos;
 }


void Oficina::eliminarUltimo(){
   Correo* temp;
    if(getCant()==1){
        head=0;
    }else{
        for(temp=head; temp->sig->sig!=0;temp=temp->sig);
       // delete temp->sig;
        temp->sig = 0;
    }
}
