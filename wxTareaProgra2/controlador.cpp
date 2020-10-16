#include "controlador.h"
#include <string>


Controlador::Controlador(wxPolinomioFrmApp* a) {
    pA= new Polinomio();
    pB= new Polinomio();
    pC= new Polinomio();
    
    ventana = new wxPolinomioFrm(NULL);
    a->SetTopWindow(ventana);
    ventana->Show();
    }
    
    void Controlador::sumePolinomio(Polinomio p1, Polinomio p2, Polinomio p3){
        int sumador[8];
        
        for (int h=0; h<8; h++){
            sumador[h] =0;
            }
        
        for(int i=0; i < p1.getExistentes(); i++){
        
            int x = p1.getExponente(i);
            
            switch(x){
            case 0: 
                sumador[0] += p1.getCoeficiente(i);
                break;
            
            case 1:
                sumador[1] += p1.getCoeficiente(i);
                break;
            
            case 2:
                sumador[2] += p1.getCoeficiente(i);
                break;
           
            case 3:
                sumador[3] += p1.getCoeficiente(i);
                break;
            
            case 4:
                sumador[4] += p1.getCoeficiente(i);
                break;
            
            case 5:
                sumador[5] += p1.getCoeficiente(i);
                break;
            
            case 6:
                sumador[6] += p1.getCoeficiente(i);
                break;
            
            case 7:
                sumador[7] += p1.getCoeficiente(i);
                break;
            default:
            break;
            }//cierre switch1
        }//cierre for1
        
        for(int j=0; j < p2.getExistentes(); j++){
        
            int z = p2.getExponente(j);
            
            switch(z){
            case 0: 
                sumador[0] += p2.getCoeficiente(j);
                break;
            
            case 1:
                sumador[1] += p2.getCoeficiente(j);
                break;
            
            case 2:
                sumador[2] += p2.getCoeficiente(j);
                break;
           
            case 3:
                sumador[3] += p2.getCoeficiente(j);
                break;
            
            case 4:
                sumador[4] += p2.getCoeficiente(j);
                break;
            
            case 5:
                sumador[5] += p2.getCoeficiente(j);
                break;
            
            case 6:
                sumador[6] += p2.getCoeficiente(j);
                break;
            
            case 7:
                sumador[7] += p2.getCoeficiente(j);
                break;
            default:
            break;
            }//cierre switch2
            
        }//cierre for2
        
        for(int k=0; k<7; k++){
            if(sumador[k]>0){
                p3.agregarMonomio(sumador[k],k);
            }
        }
    }//cierre función
    
    
    void Controlador::restePolinomio(Polinomio p1, Polinomio p2){
    }
        
    void Controlador::multipliquePolinomio(Polinomio p1,Polinomio p2){
        
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
