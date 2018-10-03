/* 
 * File:   Mano.cpp
 * Author: Japalure
 * 
 * Created on 1 de octubre de 2018, 17:48
 */

#include "Mano.h"

Mano::Mano(){
    util = TAM;
}
void Mano::set_mano(Carta A, Carta B, Carta C) {
    mano[0] = A;
    mano[1] = B;
    mano[2] = C;
}

Mano::~Mano(){

}

void Mano::dar_valor(Carta muestra){
    for (int i = 0; i < util; i++){
        //comprueba si es el tuerto
        if(mano[i].getPalo() == "oros" && mano[i].getNumero() == 11){
            mano[i].setValor(1000000);
            
        }else if(mano[i].getPalo() == muestra.getPalo()){
            //comprueba si es pincho
            mano[i].setValor(mano[i].getNumero() + 1000);
            
            //ademÃ¡s comprueba si es andorra o malilla
            if(mano[i].getNumero() == 3)
                mano[i].setValor(6000);
            
            else if (mano[i].getNumero() == 2)
                mano[i].setValor(4000);
        }else{
            mano[i].setValor(mano[i].getNumero());
        }
    }
}

void Mano::dar_valor_con_salida(Carta muestra, Carta salida){
    for (int i = 0; i < util; i++){
        //comprueba si es el tuerto
        if(mano[i].getPalo() == "oros" && mano[i].getNumero() == 11){
            mano[i].setValor(1000000);
            
        }else if(mano[i].getPalo() == muestra.getPalo()){
            //comprueba si es pincho
            mano[i].setValor(mano[i].getNumero() + 1000);
            
            //ademÃ¡s comprueba si es andorra o malilla
            if(mano[i].getNumero() == 3)
                mano[i].setValor(6000);
            
            else if (mano[i].getNumero() == 2)
                mano[i].setValor(4000);
        //comprueba si es un encarte
        }else if(mano[i].getPalo() == salida.getPalo()){
            mano[i].setValor(mano[i].getNumero() + 100);
        }else{
            mano[i].setValor(mano[i].getNumero());
        }
    }
}

void Mano::ordenar(){
    Carta aux;
    
    for (int i = 0; i < util - 1; i++) {
        for (int j = 0; j < util - 1; j++) {
            if (mano[j].getValor() < mano[j + 1].getValor()) {
                aux = mano[j];
                mano[j] = mano[j + 1];
                mano[j + 1] = aux;
            }
        }
    }
}

void Mano::mostrar_mano(){
    cout << "(";
    for (int i = 0; i < util; i++){
        Carta N = mano[i];
        N.mostrar();
        cout << " ";
    }
    cout << ")";
}
void Mano::mostrar_valores(){
    cout << "(";
    for (int i = 0; i < util; i++){
        Carta N = mano[i];
        N.mostrar();
        cout << ": " << N.getValor()<< "  ";
    }
    cout << ")";
}

Carta Mano::usar_carta(int n){
    
    Carta sacada;
    sacada = mano[n];
    borrar(n);
    return sacada;
}

void Mano::borrar(int pos){

    
    for (int i = pos; i < util; i++){
        mano[i] = mano[i+1];
    }
    util --;
}
