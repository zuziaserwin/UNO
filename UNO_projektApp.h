/***************************************************************
 * Name:      UNO_projektApp.h
 * Purpose:   Defines Application Class
 * Author:    Mateusz Rębacz (s101005@pollub.edu.pl)
 * Created:   2023-12-05
 * Copyright: Mateusz Rębacz ()
 * License:
 **************************************************************/

#ifndef UNO_PROJEKTAPP_H
#define UNO_PROJEKTAPP_H

#include <wx/app.h>

class UNO_projektApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // UNO_PROJEKTAPP_H
