#include "controlador.h"


Controlador::Controlador(wxPolinomioFrmApp* a) {
    pA= new Polinomio();
    pB= new Polinomio();
    pC= new Polinomio();
    
    ventana = new wxPolinomioFrm(NULL);
    a->SetTopWindow(ventana);
    ventana->Show();
    }

    void Controlador::sumePolinomio(Polinomio pA,Polinomio pB){
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
             int coeficientepC=pA.getCoeficiente(i)+pB.getCoeficiente(i);
             pC->agregarMonomio(coeficientepC,exponentePc);
             }else if(pA.grado()<pB.grado() && i==pA.grado()){
                  int exponentePc=pB.getExponente(i);
                  int coeficientepC=pB.getCoeficiente(i);
                  pC->agregarMonomio(coeficientepC,exponentePc);
             }else if(pA.grado()>pB.grado() && i==pB.grado()){
                  int exponentePc=pA.getExponente(i);
                  int coeficientepC=pA.getCoeficiente(i);
                  pC->agregarMonomio(coeficientepC,exponentePc);          
             }    
      }
    }
    
    /*void sumarPolinomios(){
        int sumador[8];
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
        }//cierre while
        }
        
         
    }*///cierre función
        
    void Controlador::restePolinomio(){
       
    }
        
    void Controlador::multipliquePolinomio(Polinomio pA,Polinomio pB){
            
    }
    
    
    int Controlador::getGrado(){
        return 1;
    }
        
    void Controlador::borre(){
        
    }
    
    void Controlador::derive(){
         
    }
        
    int Controlador::evalueFuncion(){
        return 1;
    }
