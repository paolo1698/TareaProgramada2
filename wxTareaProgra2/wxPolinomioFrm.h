#ifndef __WXPOLINOMIOFRM_H__
#define __WXPOLINOMIOFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

#include "Polinomio.h"


//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/button.h>
////Header Include End
#include <wx/richtext/richtextctrl.h>
#include <wx/stc/stc.h>



////Dialog Style Start
#undef wxPolinomioFrm_STYLE
#define wxPolinomioFrm_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class wxPolinomioFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		wxPolinomioFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("wxPolinomio"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxPolinomioFrm_STYLE);
		virtual ~wxPolinomioFrm();
		void WxButton1Click(wxCommandEvent& event);
		void WxEdit1Updated(wxCommandEvent& event);
		void btnAgregarClick1(wxCommandEvent& event);
		void btnAgregarClick2(wxCommandEvent& event);
		Polinomio *p1;
		Polinomio *p2;
		void mostrarPolinomio1() ;
		void mostrarPolinomio2() ;
		void wxPolinomioFrmActivate(wxActivateEvent& event);
		void WxEdit1Updated0(wxCommandEvent& event);
		void txtExponenteUpdated(wxCommandEvent& event);
		void WxRichTextCtrl1BufferReset(wxRichTextEvent& event);
		void txtCoeficienteUpdated(wxCommandEvent& event);
		void WxEdit1Updated1(wxCommandEvent& event);
		void WxStyledTextCtrl1AutoCompSelection(wxStyledTextEvent& event);
		void WxStyledTextCtrl1AutoCompSelection0(wxStyledTextEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxButton *btnDerivar02;
		wxButton *btnGraficar;
		wxButton *btnGradoP1;
		wxButton *btnGradoP2;
		wxButton *btnBorrar;
		wxButton *btnMultiplica;
		wxButton *btnSuma;
		wxButton *btnDerivar01;
		wxButton *btnResta;
		wxStaticText *lblPolinomio2;
		wxTextCtrl *txtExponente2;
		wxButton *btnAgregar2;
		wxStaticText *WxStaticText1;
		wxTextCtrl *txtCoeficiente2;
		wxStaticText *WxStaticText2;
		wxTextCtrl *txtCoeficiente;
		wxTextCtrl *txtExponente;
		wxStaticText *lblPolinomio1;
		wxButton *btnAgregar;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_BTNDERIVAR02 = 1027,
			ID_BTNGRAFICAR = 1026,
			ID_BTNGRADOP1 = 1025,
			ID_BTNGRADOP2 = 1024,
			ID_BTNBORRAR = 1023,
			ID_BTNMULTIPLICA = 1022,
			ID_BTNSUMA = 1021,
			ID_BTNDERIVAR01 = 1020,
			ID_BTNRESTA = 1019,
			ID_LBLPOLINOMIO2 = 1018,
			ID_TXTEXPONENTE2 = 1017,
			ID_BTNAGREGAR2 = 1016,
			ID_WXSTATICTEXT1 = 1015,
			ID_TXTCOEFICIENTE2 = 1013,
			ID_WXSTATICTEXT2 = 1006,
			ID_TXTCOEFICIENTE = 1005,
			ID_TXTEXPONENTE = 1004,
			ID_LBLPOLINOMIO1 = 1003,
			ID_BTNAGREGAR = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
