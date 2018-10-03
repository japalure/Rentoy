/*
 * File:   main.cpp
 * Author: Japalure
 *
 * Created on 1 de octubre de 2018, 16:52
 */

#include "Mano.h"
#include "Mazo.h"
#include "Carta.h"
#include <string>
#include <iostream>


using namespace std;

void Prueba(){
    Mazo mazo;
    Mano hand;
    Carta A("oros",11,1000000), B, C("espadas", 1), muestra;
    
    cout << "\n";
    
    A = mazo.sacar_carta();
    B = mazo.sacar_carta();
    C = mazo.sacar_carta();
    
    hand.set_mano(A,B,C);
    hand.mostrar_mano();
    
    if (!mazo.inicializado_correcto())
        cout << "\nNo se ha inicializo correctamente.\n";
    
//    mazo.muestra();

    muestra = mazo.sacar_carta();
 
    cout << "\nSe ha sacado esta muestra : ";
    muestra.mostrar();
    cout << "\n";
    hand.dar_valor(muestra);
    hand.ordenar();
    hand.mostrar_valores();
    
    
}

int main() {
    Prueba();
    

    
    
}


