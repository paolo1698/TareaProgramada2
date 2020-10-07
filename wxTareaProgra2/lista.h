#ifndef LISTA
#define LISTA

#include "nodoLista.h"

class Lista {
  Nodo *cabeza ;
public: 
  Lista() ;
  ~Lista() ;

  void agregar(Monomio *dato) ;
  void eliminar(Monomio *dato) ;
  void vaciar() ;
  int longitud() ;
  Nodo* iesimo(int i) ;
  bool existe(Monomio *dato) ;
  int longitudB() ;
  int longitudR(Nodo *n) ;
};


//ESTRUCTURAS DE DATOS: LISTA PILA COLA BOLSA ARREGLO ARBOL TRIE
//I INSERTAR
//M MODIFICAR
//E ELIMINAR 
//C CONSULTAR

#endif
