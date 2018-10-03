/* 
 * File:   Carta.h
 * Author: josepalomino
 *
 * Created on 2 de octubre de 2018, 16:15
 */

#ifndef CARTA_H
#define CARTA_H

#include <string>
#include <ostream>
#include <iostream>

using namespace std;

class Carta{
    private:
        string palo;
        int numero;
        int valor;
    public:
        /*
         *tuerto = 1000.000
         *andorra = 7.000
         * malilla = 5.000
         *muestra +1.000
         *carta de salida +100
         */
        Carta();
        Carta(string p, int n, int v);
        Carta(string p, int n);
        Carta(const Carta &orig);
        Carta& operator=(const Carta& orig);
        void mostrar();
        string getPalo() const;
        int getNumero() const;
        int getValor() const;
        void setPalo(string p);
        void setNumero(int n);
        void setValor(int v);
//        
//             
////	     friend std::iostream & operator<<(std::iostream & os, const Carta & A);
//	    
};

#endif /* CARTA_H */
