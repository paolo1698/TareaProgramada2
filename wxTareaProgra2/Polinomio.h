#ifndef POLINOMIO_H
#define POLINOMIO_H

#include "Monomio.h"
#include "lista.h"

class Polinomio {
private:              
    Lista *monomios ;
public:
    Polinomio() { monomios= nullptr ;};
    int grado() ;
    void agregarMonomio(int c, int e) ;
    void eliminarMonomio(int c, int e) ;
    int f(int x) ;
    int getExistentes() { return monomios->longitud() ; } 
    int getCoeficiente(int indice) ;
    int getExponente(int indice) ;
    Polinomio derivada() ;
};
#endif
