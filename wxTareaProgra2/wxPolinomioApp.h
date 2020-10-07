//---------------------------------------------------------------------------
//
// Name:        Project1App.h
// Author:      user
// Created:     10/2/2020 11:23:14 AM
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROJECT1FRMApp_h__
#define __PROJECT1FRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif
#include <wx/app.h>
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class wxPolinomioFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
