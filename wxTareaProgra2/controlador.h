#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "wxPolinomioFrm.h"
#include "wxPolinomioApp.h"
#include "polinomio.h"

class Controlador {
    Polinomio *pA ;
    Polinomio *pB ;
    wxPolinomioFrm* ventana ;
public:
    Controlador(wxPolinomioFrmApp* a) ;
    string sumarPolinomios();
    string restarPolinomios();
    string multiplicarPolinomios();
    string dividirPolinomios();
    int getGrado();
    void borrar();
    string getDerivada();
    int evaluarLaFuncion();
};

#endif
