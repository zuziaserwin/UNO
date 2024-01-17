/***************************************************************
 * Name:      UNO_projektApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Mateusz Rębacz (s101005@pollub.edu.pl)
 * Created:   2023-12-05
 * Copyright: Mateusz Rębacz ()
 * License:
 **************************************************************/

#include "UNO_projektApp.h"

//(*AppHeaders
#include "UNO_projektMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(UNO_projektApp);

bool UNO_projektApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	UNO_projektDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
