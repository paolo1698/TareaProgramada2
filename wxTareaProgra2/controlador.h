#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "wxPolinomioFrm.h"
#include "wxPolinomioApp.h"
#include "polinomio.h"

class Controlador {
    Polinomio *pA ;
    Polinomio *pB ;
    Polinomio *pC ;
    wxPolinomioFrm* ventana ;
    
public:
    Controlador(wxPolinomioFrmApp* a) ;
    void sumePolinomio(Polinomio pA,Polinomio pB);
    void restePolinomio();
    void multipliquePolinomio(Polinomio pA,Polinomio pB);
    int getGrado();
    void borre();
    void derive();
    int evalueFuncion();
};

#endif
