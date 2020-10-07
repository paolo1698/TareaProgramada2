//---------------------------------------------------------------------------
//
// Name:        wxPolinomioApp.cpp
// Author:      user
// Created:     9/15/2020 10:24:27 AM
// Description: 
//
//---------------------------------------------------------------------------

#include "wxPolinomioApp.h"
//#include "wxPolinomioFrm.h"
#include "controlador.h"


IMPLEMENT_APP(wxPolinomioFrmApp)

bool wxPolinomioFrmApp::OnInit(){
    Controlador *c= new Controlador(this) ;
    return true;
}
 
int wxPolinomioFrmApp::OnExit(){
	return 0;
}
