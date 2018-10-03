/* 
 * File:   Mazo.h
 * Author: Japalure
 *
 * Created on 1 de octubre de 2018, 16:53
 */

#ifndef MAZO_H
#define MAZO_H
#include "Carta.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ostream>

class Mazo {
    private:
        static const int TAM = 100;
        Carta mazo[TAM];
        int util;
        
    public:
        Mazo();
        bool inicializado_correcto();
	~Mazo();
        Carta get(int a) const;
        int get_util() const;
        Mazo& operator=(const Mazo& orig);
//	ostream& operator<<(int A);
        void borrar(int pos);
        Carta sacar_carta();
        void muestra();
        

};

#endif /* MAZO_H */
