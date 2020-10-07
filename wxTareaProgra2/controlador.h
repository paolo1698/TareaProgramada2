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
    
};

#endif
