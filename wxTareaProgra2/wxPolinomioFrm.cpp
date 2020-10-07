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
BEGIN_EVENT_TABLE(wxPolinomioFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(wxPolinomioFrm::OnClose)
	EVT_ACTIVATE(wxPolinomioFrm::wxPolinomioFrmActivate)
	
	EVT_TEXT(ID_TXTEXPONENTE2,wxPolinomioFrm::txtExponenteUpdated)
	EVT_BUTTON(ID_BTNAGREGAR2,wxPolinomioFrm::btnAgregarClick2)
	
	EVT_TEXT(ID_TXTCOEFICIENTE2,wxPolinomioFrm::WxEdit1Updated1)
	
	EVT_TEXT(ID_TXTCOEFICIENTE,wxPolinomioFrm::txtCoeficienteUpdated)
	
	EVT_TEXT(ID_TXTEXPONENTE,wxPolinomioFrm::txtExponenteUpdated)
	EVT_BUTTON(ID_BTNAGREGAR,wxPolinomioFrm::btnAgregarClick1)
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

	lblPolinomio2 = new wxStaticText(this, ID_LBLPOLINOMIO2, _("P2: "), wxPoint(216, 58), wxDefaultSize, 0, _("lblPolinomio2"));
	lblPolinomio2->SetForegroundColour(wxColour(_("WHITE")));
	lblPolinomio2->SetBackgroundColour(wxColour(_("BLACK")));
	lblPolinomio2->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxNORMAL, false));

	txtExponente2 = new wxTextCtrl(this, ID_TXTEXPONENTE2, _(""), wxPoint(82, 61), wxSize(41, 34), 0, wxDefaultValidator, _("txtExponente2"));
	txtExponente2->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnAgregar2 = new wxButton(this, ID_BTNAGREGAR2, _("&Agregar"), wxPoint(121, 59), wxSize(95, 36), 0, wxDefaultValidator, _("btnAgregar2"));
	btnAgregar2->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("x^"), wxPoint(54, 62), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	txtCoeficiente2 = new wxTextCtrl(this, ID_TXTCOEFICIENTE2, _(""), wxPoint(8, 64), wxSize(41, 34), 0, wxDefaultValidator, _("txtCoeficiente2"));
	txtCoeficiente2->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("x^"), wxPoint(54, 19), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	txtCoeficiente = new wxTextCtrl(this, ID_TXTCOEFICIENTE, _(""), wxPoint(8, 21), wxSize(45, 34), 0, wxDefaultValidator, _("txtCoeficiente"));
	txtCoeficiente->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	txtExponente = new wxTextCtrl(this, ID_TXTEXPONENTE, _(""), wxPoint(81, 21), wxSize(43, 35), 0, wxDefaultValidator, _("txtExponente"));
	txtExponente->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	lblPolinomio1 = new wxStaticText(this, ID_LBLPOLINOMIO1, _("P1:"), wxPoint(215, 19), wxDefaultSize, 0, _("lblPolinomio1"));
	lblPolinomio1->SetForegroundColour(wxColour(_("WHITE")));
	lblPolinomio1->SetBackgroundColour(wxColour(_("BLACK")));
	lblPolinomio1->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxNORMAL, false));

	btnAgregar = new wxButton(this, ID_BTNAGREGAR, _("&Agregar"), wxPoint(120, 19), wxSize(96, 38), 0, wxDefaultValidator, _("btnAgregar"));
	btnAgregar->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxNORMAL, false));

	SetTitle(_("wxPolinomio"));
	SetIcon(wxNullIcon);
	SetSize(8,8,717,434);
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
