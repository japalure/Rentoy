#include "Carta.h"

Carta::Carta(){
    palo = "NULL";
    numero = 0;
    valor = 0;
 }

Carta::Carta(string p, int n, int v){
    palo = p;
    numero = n;
    valor = v;
}

Carta::Carta(string p, int n){
    palo = p;
    numero = n;
}

Carta::Carta(const Carta & orig){
    numero = orig.getNumero();
    palo = orig.getPalo();
    valor = orig.getValor();
}
void Carta::mostrar(){
    cout << this->numero << " de " << this->palo;
}

Carta& Carta::operator=(const Carta& orig){
	
    numero = orig.getNumero();
    palo = orig.getPalo();
    valor = orig.getValor();
	
   return *this;
}
int Carta::getNumero() const{
    return numero;
}
string Carta::getPalo() const{
    return palo;
}
int Carta::getValor() const{
    return valor;
}

void Carta::setNumero(int n){
    numero = n;
}
void Carta::setPalo(string p){
    palo = p;
}
void Carta::setValor(int v){
    valor = v;
}