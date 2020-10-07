#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "wxPolinomioFrm.h"
#include "wxPolinomioApp.h"
#include "polinomio.h"

class Controlador {
    Polinomio *pA ;
    Polinomio *pB ;
    Polinomio *pC ;
    //wxPolinomioFrm* ventana ;
public:
    Controlador(wxPolinomioFrmApp* a) ;
    void sumarPolinomios();
    void restarPolinomios();
    void multiplicarPolinomios();
    void dividirPolinomios();
    int getGrado();
    void borrar();
    void getDerivada();
    int evaluarLaFuncion();
};

#endif
