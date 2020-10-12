#include "controlador.h"


Controlador::Controlador(wxPolinomioFrmApp* a) {
    pA= new Polinomio() ;
    pB= new Polinomio() ;
    pC= new Polinomio() ;
    
    ventana = new wxPolinomioFrm(NULL);
    a->SetTopWindow(ventana);
    ventana->Show();
<<<<<<< Updated upstream
    }
    
    void setSumaPolinomios(Polinomio pA,Polinomio pB){
        
        }
        
    void getSumaPolinomios(){
        
        }


    void sumarPolinomios(){
        /*int sumador[8];
=======
}   
    void Controlador::setSumaPolinomios(Polinomio pA,Polinomio pB){
       int grado=0;
      if(pA.grado()<pB.grado()){
             grado=pB.grado();
         } else if(pA.grado()>pB.grado()){
             grado=pA.grado(); 
         } else if(pA.grado()==pB.grado()){
              grado=pA.grado(); 
         }
       for(int i=0;i<grado;i++){
            if(pA.getExponente(i)==pB.getExponente(i)){
            int exponentePc=pA.getExponente(i);
             int coefcientepC=pA.getCoeficiente(i)+pB.getCoeficiente(i);
             pC->agregarMonomio(coefcientepC,exponentePc);
             }else if(pA.grado()<pB.grado() && i==pA.grado()){
                  int exponentePc=pB.getExponente(i);
                  int coefcientepC=pB.getCoeficiente(i);
                  pC->agregarMonomio(coefcientepC,exponentePc);
             }else if(pA.grado()>pB.grado() && i==pB.grado()){
                  int exponentePc=pA.getExponente(i);
                  int coefcientepC=pA.getCoeficiente(i);
                  pC->agregarMonomio(coefcientepC,exponentePc);          
             }    
      }
    }
        
    int Controlador::getSumaPolinomios( ){
            
        return 0;
        }
    /*void sumarPolinomios(){
        int sumador[8];
>>>>>>> Stashed changes
        Nodo *n= cabeza;
        while(n != nullptr){
            n = n -> getSiguiente();
        
            int x = n -> getExponente();
            
            switch(x){
            case 0: 
                sumador[0] += n -> getCoeficiente();
                break;
            
            case 1:
                sumador[1] += n -> getCoeficiente();
                break;
            
            case 2:
                sumador[2] += n -> getCoeficiente();
                break;
           
            case 3:
                sumador[3] += n -> getCoeficiente();
                break;
            
            case 4:
                sumador[4] += n -> getCoeficiente();
                break;
            
            case 5:
                sumador[5] += n -> getCoeficiente();
                break;
            
            case 6:
                sumador[6] += n -> getCoeficiente();
                break;
            
            case 7:
                sumador[7] += n -> getCoeficiente();
                break;
            default;
            break;
            }//cierre switch
<<<<<<< Updated upstream
        }//cierre while
        
        
=======
        }
>>>>>>> Stashed changes
        
         
    }*///cierre función
        
    void Controlador::setRestaPolinomios(){
       
    }
    int Controlador::getRestaPolinomios(){
       return 0;
    }
        
    void Controlador::setMultiplicaPolinomios(Polinomio pA,Polinomio pB){
            
    }
    int Controlador::getMultiplicaPolinomios(){
       return 0;
    }
        
    void Controlador::setDividePolinomios(){
        
    }
    int Controlador::getDividePolinomios(){
       return 0;
    }
    
    
    int Controlador::getGrado(){
        return 1;
    }
        
    void Controlador::borrar(){
        
    }
    
    void Controlador::getDerivada(){
         
    }
        
    int Controlador::evaluarLaFuncion(){
        return 1;
    }
<<<<<<< Updated upstream
=======


>>>>>>> Stashed changes
