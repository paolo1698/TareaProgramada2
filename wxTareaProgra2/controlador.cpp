#include "controlador.h"


Controlador::Controlador(wxPolinomioFrmApp* a) {
    pA= new Polinomio() ;
    pB= new Polinomio() ;
    pC= new Polinomio() ;
    
    ventana = new wxPolinomioFrm(NULL);
    a->SetTopWindow(ventana);
    ventana->Show();
    
    void setSumaPolinomios(Polinomio pA,Polinomio pB){
        
        }
        
    string getSumaPolinomios(){
        return " ";
        }

}


    void sumarPolinomios(){
        /*int sumador[8];
        Nodo *n= cabeza;
        while(n != nullptr){
            n = n -> getSiguiente();
        
            int x = n -> getExponente;
            
            switch(x){
            case 0: 
                sumador[0] += n -> getCoeficiente;
                break;
            
            case 1:
                sumador[1] += n -> getCoeficiente;
                break;
            
            case 2:
                sumador[2] += n -> getCoeficiente;
                break;
           
            case 3:
                sumador[3] += n -> getCoeficiente;
                break;
            
            case 4:
                sumador[4] += n -> getCoeficiente;
                break;
            
            case 5:
                sumador[5] += n -> getCoeficiente;
                break;
            
            case 6:
                sumador[6] += n -> getCoeficiente;
                break;
            
            case 7:
                sumador[7] += n -> getCoeficiente;
                break;
            default;
            break;
            }//cierre switch
        }//cierre while
>>>>>>> 7fe435a6f516765514480302150ba8478307dae0
        
        
        
    */}//cierre función
        
    void restarPolinomios(){
       
    }
        
    void multiplicarPolinomios(){
        
    }
        
    void dividirPolinomios(){
        
    }
    
    int getGrado(){
        return 1;
    }
        
    void borrar(){
        
    }
    
    void getDerivada(){
         
    }
        
    int evaluarLaFuncion(){
        return 1;
    }
