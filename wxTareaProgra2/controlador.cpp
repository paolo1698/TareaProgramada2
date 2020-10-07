#include "controlador.h"


Controlador::Controlador(wxPolinomioFrmApp* a) {
    pA= new Polinomio() ;
    pB= new Polinomio() ;
    ventana = new wxPolinomioFrm(NULL);
    a->SetTopWindow(ventana);
    ventana->Show();
}
