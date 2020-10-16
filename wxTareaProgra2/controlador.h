#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "wxPolinomioFrm.h"
#include "wxPolinomioApp.h"
#include "polinomio.h"

class wxPolinomioFrm;
class Controlador {
    Polinomio *pA ;
    Polinomio *pB ;
    Polinomio *pC ;
    wxPolinomioFrm* ventana ;
    
public:
    Controlador(wxPolinomioFrmApp* a) ;
    void sumePolinomio(Polinomio p1, Polinomio p2, Polinomio p3);
    void restePolinomio(Polinomio p1, Polinomio p2);
    void multipliquePolinomio(Polinomio p1,Polinomio p2);
    int getGrado();
    void borre();
    void derive();
    int evalueFuncion();
};

#endif
