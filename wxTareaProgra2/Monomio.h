#ifndef MONOMIO_H
#define MONOMIO_H

class Monomio {
    
private:
    int coeficiente ;
    int exponente ;

public:
    Monomio() { coeficiente= 0 ; exponente= 0 ; } ;
    Monomio(int c, int e) { coeficiente= c; exponente=e ;};
    void modificarCoeficiente(int c) { coeficiente= c ;} ;
    void modificarExponente(int e) { exponente= e ;} ;
    int getExponente() { return exponente ; }
    void setExponente(int e) { exponente= e ; }
    int getCoeficiente() { return coeficiente ; } 
    int setCoeficiente(int c) { coeficiente= c ; } 
    ~Monomio() {} ;
};

#endif

