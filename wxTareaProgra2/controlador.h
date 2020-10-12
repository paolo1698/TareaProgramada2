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
<<<<<<< Updated upstream
    
=======
>>>>>>> Stashed changes
public:
    Controlador(wxPolinomioFrmApp* a) ;
    void setSumaPolinomios(Polinomio pA,Polinomio pB);
    int getSumaPolinomios();
    void setRestaPolinomios();
    int getRestaPolinomios();
    void setMultiplicaPolinomios();
    int getMultiplicaPolinomios();
    void setDividePolinomios();
    int getDividePolinomios();
    int getGrado();
    void borrar();
    void getDerivada();
    int evaluarLaFuncion();
};

#endif
