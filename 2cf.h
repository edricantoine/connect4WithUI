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
        char aiMark = 'X';
        char hMark = 'O';

        std::vector<char> grid = vector<char>(16, '-');
        wxSize* buttonSize = new wxSize(20, 20);
        wxPoint* b00p = new wxPoint(300/5, 300/5);
        wxPoint* b01p = new wxPoint(600/5, 300/5);

        wxDECLARE_EVENT_TABLE();
        

    private:
        void OnHello(wxCommandEvent& event);
        void OnExit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
};
enum
{
    ID_Hello = 1,
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
    ID_B33 = 133
};
#endif