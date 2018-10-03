/* 
 * File:   Mazo.cpp
 * Author: Japalure
 * 
 * Created on 1 de octubre de 2018, 16:53
 */

#include "Mazo.h"


Mazo::Mazo() {
    util = 40;
    string palos[4] ;
    int k = 0;
    palos[0] = "oros";
    palos[1] = "bastos";
    palos[2] = "copas";
    palos[3] = "espadas";
    
    for (int i = 0; i < 4; i++){
        for (int j = 1; j <= 12; j++){
            mazo[k];
            if (j == 8)
                j += 2;
            mazo[k].setPalo(palos[i]);
            mazo[k].setNumero(j);
            k++;
        }
    }
        
}

Mazo::~Mazo(){

}


bool Mazo::inicializado_correcto(){
    bool correcto = true;
    
    for (int i = 0; i < util && correcto; i++){
        for (int j = i+1; j < util && correcto; j++){
            if (mazo[i].getNumero() == mazo[j].getNumero() && mazo[i].getPalo() == mazo[j].getPalo())
                correcto = false;
        }
    }
    return correcto;
    cout << "\nHa inicializado bien\n";
}

Mazo& Mazo::operator=(const Mazo& orig){
    util = orig.get_util();
    
    for (int i = 0; i < util; i++)
        mazo[i] = orig.get(i);
	
   return *this;
}

void Mazo::borrar(int pos){

    
    for (int i = pos; i < util; i++){
        mazo[i] = mazo[i+1];
    }
    util --;
}

Carta Mazo::sacar_carta(){
    srand (time(NULL));
    Carta sacada;
    int pos = rand () % util;
    sacada = mazo[pos];
    borrar(pos);
    return sacada;
    
}

Carta Mazo::get(int a) const{
	return mazo[a];
}

int Mazo::get_util() const{
    return util;
}

void Mazo::muestra(){
	for (int i = 0;  i < util; i++){
		Carta x = mazo[i];
//		cout << x;
                x.mostrar();
                cout << "  ";
                if (i == 9 || i == 19 || i == 29 || i== 39)
                    cout << "\n";
	}
}