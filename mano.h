/* 
 * File:   Mano.h
 * Author: Japalure
 *
 * Created on 1 de octubre de 2018, 17:48
 */

#ifndef MANO_H
#define MANO_H
#include "Carta.h"


class Mano {
private:
    static const int TAM = 3;
    int util;
    Carta mano[TAM];
public:
    Mano();
    void set_mano(Carta A, Carta B, Carta C);
    ~Mano();
    void dar_valor(Carta muestra);
    void dar_valor_con_salida(Carta muestra, Carta salida);
    void ordenar();
    void reiniciar_valores();
    void mostrar_mano();
    void mostrar_valores();
    Carta usar_carta(int n);
    void borrar(int pos);
};

#endif /* MANO_H */
