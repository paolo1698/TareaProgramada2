///-----------------------------------------------------------------
///
/// @file      wxPolinomioFrm.cpp
/// @author    user
/// Created:   9/15/2020 10:24:29 AM
/// @section   DESCRIPTION
///            wxPolinomioFrm class implementation
///
///------------------------------------------------------------------

#include "wxPolinomioFrm.h"


//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// wxPolinomioFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(btnGradoP1,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(btnGradoP1::OnClose)
	EVT_ACTIVATE(btnGradoP1::wxPolinomioFrmActivate)
	EVT_BUTTON(ID_BTNDERIVAR02,btnGradoP1::btnAgregarClick)
	EVT_BUTTON(ID_BTNGRAFICAR,btnGradoP1::btnAgregarClick)
	EVT_BUTTON(ID_BTNGRADOP1,btnGradoP1::btnAgregarClick)
	EVT_BUTTON(ID_BTNGRADOP2,btnGradoP1::btnAgregarClick)
	EVT_BUTTON(ID_BTNBORRAR,btnGradoP1::btnAgregarClick)
	EVT_BUTTON(ID_BTNMULTIPLICA,btnGradoP1::btnAgregarClick)
	EVT_BUTTON(ID_BTNSUMA,btnGradoP1::btnAgregarClick)
	EVT_BUTTON(ID_BTNDERIVAR01,btnGradoP1::btnAgregarClick)
	EVT_BUTTON(ID_BTNRESTA,btnGradoP1::btnAgregarClick)
	
	EVT_TEXT(ID_TXTEXPONENTE2,btnGradoP1::txtExponenteUpdated)
	EVT_BUTTON(ID_BTNAGREGAR2,btnGradoP1::btnAgregarClick)
	
	EVT_TEXT(ID_TXTCOEFICIENTE2,btnGradoP1::WxEdit1Updated1)
	
	EVT_TEXT(ID_TXTCOEFICIENTE,btnGradoP1::txtCoeficienteUpdated)
	
	EVT_TEXT(ID_TXTEXPONENTE,btnGradoP1::txtExponenteUpdated)
	EVT_BUTTON(ID_BTNAGREGAR,btnGradoP1::btnAgregarClick)
END_EVENT_TABLE()
////Event Table End

wxPolinomioFrm::wxPolinomioFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
	p1= new Polinomio() ;
	p2= new Polinomio();
}

wxPolinomioFrm::~wxPolinomioFrm()
{
}

void wxPolinomioFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	btnDerivar02 = new wxButton(this, ID_BTNDERIVAR02, _("DerivarP2"), wxPoint(770, 320), wxSize(127, 48), 0, wxDefaultValidator, _("btnDerivar02"));
	btnDerivar02->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnGraficar = new wxButton(this, ID_BTNGRAFICAR, _("Graficar"), wxPoint(740, 165), wxSize(126, 48), 0, wxDefaultValidator, _("btnGraficar"));
	btnGraficar->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnGradoP1 = new wxButton(this, ID_BTNGRADOP1, _("GradoP1"), wxPoint(740, 35), wxSize(126, 48), 0, wxDefaultValidator, _("btnGradoP1"));
	btnGradoP1->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnGradoP2 = new wxButton(this, ID_BTNGRADOP2, _("GradoP2"), wxPoint(740, 100), wxSize(127, 48), 0, wxDefaultValidator, _("btnGradoP2"));
	btnGradoP2->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnBorrar = new wxButton(this, ID_BTNBORRAR, _("Borrar"), wxPoint(25, 320), wxSize(126, 48), 0, wxDefaultValidator, _("btnBorrar"));
	btnBorrar->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnMultiplica = new wxButton(this, ID_BTNMULTIPLICA, _("Multiplicar"), wxPoint(315, 320), wxSize(157, 48), 0, wxDefaultValidator, _("btnMultiplica"));
	btnMultiplica->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnSuma = new wxButton(this, ID_BTNSUMA, _("Sumar"), wxPoint(170, 320), wxSize(127, 48), 0, wxDefaultValidator, _("btnSuma"));
	btnSuma->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnDerivar01 = new wxButton(this, ID_BTNDERIVAR01, _("DerivarP1"), wxPoint(630, 320), wxSize(127, 48), 0, wxDefaultValidator, _("btnDerivar01"));
	btnDerivar01->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnResta = new wxButton(this, ID_BTNRESTA, _("Restar"), wxPoint(485, 320), wxSize(127, 48), 0, wxDefaultValidator, _("btnResta"));
	btnResta->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	lblPolinomio2 = new wxStaticText(this, ID_LBLPOLINOMIO2, _("P2: "), wxPoint(290, 83), wxDefaultSize, 0, _("lblPolinomio2"));
	lblPolinomio2->SetForegroundColour(wxColour(_("WHITE")));
	lblPolinomio2->SetBackgroundColour(wxColour(_("BLACK")));
	lblPolinomio2->SetFont(wxFont(24, wxSWISS, wxNORMAL, wxNORMAL, false));

	txtExponente2 = new wxTextCtrl(this, ID_TXTEXPONENTE2, _(""), wxPoint(105, 82), wxSize(55, 46), 0, wxDefaultValidator, _("txtExponente2"));
	txtExponente2->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnAgregar2 = new wxButton(this, ID_BTNAGREGAR2, _("&Agregar"), wxPoint(161, 80), wxSize(130, 50), 0, wxDefaultValidator, _("btnAgregar2"));
	btnAgregar2->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("x^"), wxPoint(73, 81), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	txtCoeficiente2 = new wxTextCtrl(this, ID_TXTCOEFICIENTE2, _(""), wxPoint(10, 79), wxSize(60, 45), 0, wxDefaultValidator, _("txtCoeficiente2"));
	txtCoeficiente2->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("x^"), wxPoint(73, 28), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	txtCoeficiente = new wxTextCtrl(this, ID_TXTCOEFICIENTE, _(""), wxPoint(10, 28), wxSize(60, 45), 0, wxDefaultValidator, _("txtCoeficiente"));
	txtCoeficiente->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	txtExponente = new wxTextCtrl(this, ID_TXTEXPONENTE, _(""), wxPoint(105, 28), wxSize(55, 46), 0, wxDefaultValidator, _("txtExponente"));
	txtExponente->SetFont(wxFont(21, wxSWISS, wxNORMAL, wxNORMAL, false));

	lblPolinomio1 = new wxStaticText(this, ID_LBLPOLINOMIO1, _("P1:"), wxPoint(290, 28), wxDefaultSize, 0, _("lblPolinomio1"));
	lblPolinomio1->SetForegroundColour(wxColour(_("WHITE")));
	lblPolinomio1->SetBackgroundColour(wxColour(_("BLACK")));
	lblPolinomio1->SetFont(wxFont(24, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnAgregar = new wxButton(this, ID_BTNAGREGAR, _("&Agregar"), wxPoint(161, 25), wxSize(130, 50), 0, wxDefaultValidator, _("btnAgregar"));
	btnAgregar->SetFont(wxFont(19, wxSWISS, wxNORMAL, wxNORMAL, false));

	SetTitle(_("wxPolinomio"));
	SetIcon(wxNullIcon);
	SetSize(8,8,951,427);
	Center();
	
	////GUI Items Creation End
}

void wxPolinomioFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * btnAgregarClick
 */
void wxPolinomioFrm::btnAgregarClick1(wxCommandEvent& event)
{
	wxString hilera= txtCoeficiente->GetValue() ;
	int coeficiente1= wxAtoi(hilera) ;
	hilera= txtExponente->GetValue() ;
	int exponente1= wxAtoi(hilera) ;
	
	//agregar monomio al polinomio
    p1->agregarMonomio(coeficiente1,exponente1) ;	
	//refrescar el label
	mostrarPolinomio1() ;
}
void wxPolinomioFrm::btnAgregarClick2(wxCommandEvent& event)
{
	wxString hilera= txtCoeficiente2->GetValue() ;
	int coeficiente2= wxAtoi(hilera) ;
	hilera= txtExponente->GetValue() ;
	int exponente2= wxAtoi(hilera) ;
	
	//agregar monomio al polinomio
    p2->agregarMonomio(coeficiente2,exponente2) ;	
	//refrescar el label
	mostrarPolinomio2() ;
}

void wxPolinomioFrm::mostrarPolinomio1(){  
	wxString hilera= "" ;
	for (int i=0; i< p1->getExistentes() ; i++ ) {
        hilera << p1->getCoeficiente(i) ;
    	hilera+= "x^" ;
	    hilera << p1->getExponente(i) ;
        hilera+= " + " ;
    }
    lblPolinomio1->SetLabel(hilera) ;   
    /*hilera << p->getLongitud() ;
    hilera= this->GetTitle() + hilera ;
    this->SetTitle(hilera) ;*/
}
void wxPolinomioFrm::mostrarPolinomio2(){  
	wxString hilera= "" ;
	for (int i=0; i< p2->getExistentes() ; i++ ) {
        hilera << p2->getCoeficiente(i) ;
    	hilera+= "x^" ;
	    hilera << p2->getExponente(i) ;
        hilera+= " + " ;
    }
    lblPolinomio2->SetLabel(hilera) ; 
    /*hilera << p->getLongitud() ;
    hilera= this->GetTitle() + hilera ;
    this->SetTitle(hilera) ;*/
}


/*
 * wxPolinomioFrmActivate
 */
void wxPolinomioFrm::wxPolinomioFrmActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * WxEdit1Updated0
 */
void wxPolinomioFrm::WxEdit1Updated0(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * txtExponenteUpdated
 */
void wxPolinomioFrm::txtExponenteUpdated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxRichTextCtrl1BufferReset
 */
void wxPolinomioFrm::WxRichTextCtrl1BufferReset(wxRichTextEvent& event)
{
	// insert your code here
}

/*
 * txtCoeficienteUpdated
 */
void wxPolinomioFrm::txtCoeficienteUpdated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxEdit1Updated1
 */
void wxPolinomioFrm::WxEdit1Updated1(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxStyledTextCtrl1AutoCompSelection
 */
void wxPolinomioFrm::WxStyledTextCtrl1AutoCompSelection(wxStyledTextEvent& event)
{
	// insert your code here
}

/*
 * WxStyledTextCtrl1AutoCompSelection0
 */
void wxPolinomioFrm::WxStyledTextCtrl1AutoCompSelection0(wxStyledTextEvent& event)
{
	// insert your code here
}
