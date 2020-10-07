 #include "lista.h"
#include <iostream>

Lista::Lista() {
  cabeza= nullptr  ;
}
Lista::~Lista() {
  vaciar() ;
}

void Lista::agregar(Monomio *dato) {
  if (cabeza!= nullptr) {
    Nodo *n= cabeza ;
    cabeza= new Nodo(dato) ;
    cabeza->setSiguiente(n) ;
  } else {
    cabeza= new Nodo(dato) ;
  }
}
void Lista::eliminar(Monomio *dato) {
  //si esta vacía no hago nada
  //si solo tiene uno y ese es el dato lo borro
  //si tiene más recorrer hasta encontrar el dato como siguiente de n a partir de n= cabeza 
  //poner en el siguiente del anterior el siguiente del que voy a eliminar
  Nodo *n = cabeza;
  
  if(n!=nullptr) {
    if(longitud() == 1 && n->getDato()->getExponente()==dato->getExponente() && n->getDato()->getCoeficiente()==dato->getCoeficiente()){
      delete n;
      cabeza= nullptr ;
    } else if (n->getDato() == dato) {// 4-> 7-> 3
        cabeza= n->getSiguiente() ;
       delete n ;
    } else {
      while (n!=nullptr && n->getSiguiente()!=nullptr && (n->getSiguiente()->getDato()->getExponente()!=dato->getExponente()||n->getSiguiente()->getDato()->getCoeficiente()!=dato->getCoeficiente())){
         n= n->getSiguiente();
      }
      if (n!=nullptr && n->getSiguiente()!=nullptr) {
        Nodo *t= n->getSiguiente() ;
        delete n->getSiguiente() ;
        n->setSiguiente(t) ;
      }
    }
  }//perdon
  //Jorge Fabrizio Daniel Ximena Zurisadai
}

void Lista::vaciar() {
  //Victor Tonny Josue Santiago

  //recorrer la lista 
  //ir llamando delete
  
  Nodo *n= cabeza ;
  Nodo *temp;
  while (n!= nullptr ) {
    temp=n->getSiguiente();
    delete n;
	n=temp;
  }
  cabeza=nullptr ;
}

int Lista::longitud() {
  int l= 0  ;
  Nodo *n= cabeza ;
  while (n!= nullptr ) {
    l++ ;
    n= n->getSiguiente() ;
  }
  return l ;
}

int Lista::longitudB() {
  return longitudR(cabeza) ;
}

int Lista::longitudR(Nodo *n) {
  int l=0;
  if(n==nullptr){
    return l;
  } else {
    l=1+longitudR(n->getSiguiente());
  }
  return l;
}

Nodo* Lista::iesimo(int i) {
  int l= 0  ;
  Nodo *n= cabeza ;
  
  while (n!= nullptr && l<i) {
    l++ ;
    n= n->getSiguiente() ;
  }
  return n ;
}

bool Lista::existe(Monomio *dato) {
  //Jorim  Jose Cristian Kevin Nazareth
  Nodo *n= cabeza;
  bool e = false;
  while(n!=nullptr&&(dato->getCoeficiente()!=n->getDato()->getCoeficiente()||dato->getExponente()!=n->getDato()->getExponente())){
      n= n->getSiguiente();
  }
  if(dato->getExponente()==n->getDato()->getExponente() && dato->getCoeficiente()==n->getDato()->getCoeficiente()){
    e = true;
  } 
  return e;
}

