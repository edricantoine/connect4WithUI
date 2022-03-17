#include <iostream>
#include <vector>
#ifndef __2CF_H
#define __2CF_H

#include <wx-3.1/wx/wxprec.h>
#include <wx-3.1/wx/textctrl.h>
#include <wx-3.1/wx/position.h>
#ifndef WX_PRECOMP
    #include <wx-3.1/wx/wx.h>
#endif

using namespace std;
class myApp : public wxApp
{
    public:
        virtual bool OnInit();
};

class myFrame : public wxFrame
{
    public:
        myFrame();
        void readGrid(wxCommandEvent& event);
        void makePlayerMove(wxCommandEvent& event);
        void readGridVoid();

        wxButton * button00;
        wxButton * button01;
        wxButton * button02;
        wxButton * button03;
        wxButton * button10;
        wxButton * button11;
        wxButton * button12;
        wxButton * button13;
        wxButton * button20;
        wxButton * button21;
        wxButton * button22;
        wxButton * button23;
        wxButton * button30;
        wxButton * button31;
        wxButton * button32;
        wxButton * button33;

        wxStaticText * stateLabel;
    
        vector<wxButton*> buttons;
        wxSize* buttonSize = new wxSize(20, 20);
        wxPoint* b00p = new wxPoint(300/5, 300/5);
        wxPoint* b01p = new wxPoint(600/5, 300/5);
        wxPoint* b02p = new wxPoint(900/5, 300/5);
        wxPoint* b03p = new wxPoint(1200/5, 300/5);
        wxPoint* b10p = new wxPoint(300/5, 600/5);
        wxPoint* b11p = new wxPoint(600/5, 600/5);
        wxPoint* b12p = new wxPoint(900/5, 600/5);
        wxPoint* b13p = new wxPoint(1200/5, 600/5);
        wxPoint* b20p = new wxPoint(300/5, 900/5);
        wxPoint* b21p = new wxPoint(600/5, 900/5);
        wxPoint* b22p = new wxPoint(900/5, 900/5);
        wxPoint* b23p = new wxPoint(1200/5, 900/5);
        wxPoint* b30p = new wxPoint(300/5, 1200/5);
        wxPoint* b31p = new wxPoint(600/5, 1200/5);
        wxPoint* b32p = new wxPoint(900/5, 1200/5);
        wxPoint* b33p = new wxPoint(1200/5, 1200/5);

        wxPoint* blp = new wxPoint(330 / 4, 20);


        //wxDECLARE_EVENT_TABLE();
        

    private:
        void OnHello(wxCommandEvent& event);
        void OnExit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void makeEasy(wxCommandEvent& event);
        void makeMedium(wxCommandEvent& event);
        void makeHard(wxCommandEvent& event);
};
enum
{
    ID_Hello = 1,
    ID_Easy = 2,
    ID_Med = 3,
    ID_Hard = 4,
    ID_B00 = 100,
    ID_B01 = 101,
    ID_B02 = 102,
    ID_B03 = 103,
    ID_B10 = 110,
    ID_B11 = 111,
    ID_B12 = 112,
    ID_B13 = 113,
    ID_B20 = 120,
    ID_B21 = 121,
    ID_B22 = 122,
    ID_B23 = 123,
    ID_B30 = 130,
    ID_B31 = 131,
    ID_B32 = 132,
    ID_B33 = 133,
    ID_Label = 150
};
#endif