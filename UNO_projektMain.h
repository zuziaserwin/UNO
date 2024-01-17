/***************************************************************
 * Name:      UNO_projektMain.h
 * Purpose:   Defines Application Frame
 * Author:    Mateusz Rębacz (s101005@pollub.edu.pl)
 * Created:   2023-12-05
 * Copyright: Mateusz Rębacz ()
 * License:
 **************************************************************/

#ifndef UNO_PROJEKTMAIN_H
#define UNO_PROJEKTMAIN_H
#include<map>
#include<vector>

//(*Headers(UNO_projektDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class UNO_projektDialog: public wxDialog
{
    public:

        UNO_projektDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~UNO_projektDialog();


    private:

        //(*Handlers(UNO_projektDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnBitmapButton4Click(wxCommandEvent& event);
        void OnButtonStart(wxCommandEvent& event);
        //*)

        //(*Identifiers(UNO_projektDialog)
        static const long ID_BITMAPBUTTON4;
        static const long ID_STATICTEXT3;
        static const long ID_BITMAPBUTTON2;
        static const long ID_STATICTEXT5;
        static const long ID_STATICBITMAP1;
        static const long ID_BITMAPBUTTON3;
        static const long ID_STATICTEXT4;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT2;
        static const long ID_BUTTON2;
        static const long ID_BUTTON1;
        //*)

        //(*Declarations(UNO_projektDialog)
        wxBitmapButton* BitmapButton1;
        wxBitmapButton* BitmapButton2;
        wxBitmapButton* BitmapButton3;
        wxBitmapButton* BitmapButton4;
        wxBoxSizer* BoxSizer1;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        //*)

        DECLARE_EVENT_TABLE()
        void wczytaj(wxString kolor, int numer);
        wxBitmap karty[52];
        std::vector<int> Tab;
        //int* Tab = new int[51];
        int aktualny_gracz=1;

        std::map<int,int> id2nr;
};

#endif // UNO_PROJEKTMAIN_H
