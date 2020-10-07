#include "controlador.h"


Controlador::Controlador(wxPolinomioFrmApp* a) {
    pA= new Polinomio() ;
    pB= new Polinomio() ;
    
    
    ventana = new wxPolinomioFrm(NULL);
    a->SetTopWindow(ventana);
    ventana->Show();
    
    void setSumaPolinomios(Polinomio pA,Polinomio pB){
        
        }
        
    string getSumaPolinomios(){
        return " ";
        }
        
    string restarPolinomios(){
        return " ";
        }
        
    string multiplicarPolinomios(){
        return " ";
        }
        
    string dividirPolinomios(){
        return " ";
        }
    
    int getGrado(){
        return 1;
        }
        
    void borrar(){
        
        }
    
    string getDerivada(){
         return " ";
        }
        
    int evaluarLaFuncion(){
        return 1;
        }
}
