#ifndef NODOLISTA
#define NODOLISTA
#include "monomio.h"

class Nodo {
  Monomio *dato ;
  Nodo *siguiente ;
public:
  Nodo(Monomio *d) {dato =d ; siguiente= nullptr ;} ;
  ~Nodo() {delete dato;}
  void setDato(Monomio *d) { dato= d ;} ;
  Monomio *getDato() { return dato ; } ;
  void setSiguiente(Nodo *s) { siguiente= s ;} ;
  Nodo* getSiguiente() { return siguiente ; } ;
};

#endif
