#include "Polinomio.h"

int Polinomio::grado() {}

void Polinomio::agregarMonomio(int c, int e) {
    if (monomios==nullptr) {
        monomios= new Lista() ;
    }
    monomios->agregar(new Monomio(c,e)) ;        
}

void Polinomio::eliminarMonomio(int c, int e) {
    monomios->eliminar(new Monomio(c,e)) ;
}

int Polinomio::f(int x) {
    //si su primer nombre empieza con una letra menor a K
}

Polinomio Polinomio::derivada() {
    //si no
}

int Polinomio::getCoeficiente (int indice) {
    int c=-999 ;
    if (monomios!= nullptr) {
        Nodo *n= monomios->iesimo(indice) ;
        if (n!= nullptr) {
            c= n->getDato()->getCoeficiente() ;
       }
    }
    return c ;
}

int Polinomio::getExponente (int indice) {
    int c=-999 ;
    if (monomios!= nullptr) {
        Nodo *n= monomios->iesimo(indice) ;
        if (n!= nullptr) {
            c= n->getDato()->getExponente() ;
       }
    }
    return c ;
}
