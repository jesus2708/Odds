#pragma once  //______________________________________ Odds.h  
#include "Resource.h"
class Odds: public Win::Dialog
{
public:
	Odds()
	{
	}
	~Odds()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbx_;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(4.55083);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(6.45583);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Odds";
		tbx_.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_LEFT | ES_WINNORMALCASE, 0.60854, 0.63500, 3.75708, 5.63563, hWnd, 1000);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbx_.Font = fontArial009A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
