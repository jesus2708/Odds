#include "stdafx.h"  //________________________________________ Odds.cpp
#include "Odds.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Odds app;
	return app.BeginDialog(IDI_Odds, hInstance);
}

void Odds::Window_Open(Win::Event& e)
{
	for (int i = 0; i <= 20; i++)
	{
		if ((i % 2) != 0)
		{
			wstring salida;
			salida += Sys::Convert::ToString(i);
			salida += L"\r\n";
			tbx_.Text += salida;
		}
	}
}

