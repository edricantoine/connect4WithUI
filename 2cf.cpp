#include <iostream>
#include <vector>
#include "2funs.hpp"

#include <wx-3.1/wx/wxprec.h>
#include <wx-3.1/wx/textctrl.h>
#include <wx-3.1/wx/position.h>
#ifndef WX_PRECOMP
    #include <wx-3.1/wx/wx.h>
#endif
#include "2cf.h"


using namespace std;
char aiMark = 'X';
char hMark = 'O';

std::vector<char> grid = vector<char>(16, '-');

wxIMPLEMENT_APP(myApp);

void myFrame::makePlayerMove(wxCommandEvent& event) {
    auto *btn = (wxButton *) event.GetEventObject();
    if (btn == button00) {
        cout << "woohoo!" <<endl;
    } else if (btn == button01) {
        cout<< "Scrombulous G." << endl;
    } else if (btn == button02) {
        cout<< "krinkly" << endl;
    } else if (btn == button03) {
        
    } else if (btn == button10) {
        
    } else if (btn == button11) {
        
    } else if (btn == button12) {
        
    } else if (btn == button13) {
        
    } else if (btn == button20) {
        
    } else if (btn == button21) {
        
    } else if (btn == button22) {
        
    } else if (btn == button23) {
        
    } else if (btn == button30) {
        
    } else if (btn == button31) {
        
    } else if (btn == button32) {
        
    } else if (btn == button33) {
        
    } 
    
}

void myFrame::OnExit(wxCommandEvent& event) {
    Close(true);
}

void myFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a Connect Four application with simple GUI",
                 "About This App", wxOK | wxICON_INFORMATION);
}

void myFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("...");
}

void myFrame::readGrid(wxCommandEvent& event) {
    cout<< b00p <<endl;
    return;
}

myFrame::myFrame() : wxFrame(NULL, wxID_ANY, "Connect Four"){
    wxMenu * menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    button00 = new wxButton(this, ID_B00, _T(""), *b00p, *buttonSize, 0);
    button01 = new wxButton(this, ID_B01, _T(""), *b01p, *buttonSize, 0);
    button02 = new wxButton(this, ID_B02, _T(""), *b02p, *buttonSize, 0);
    button03 = new wxButton(this, ID_B03, _T(""), *b03p, *buttonSize, 0);

    button10 = new wxButton(this, ID_B10, _T(""), *b10p, *buttonSize, 0);
    button11 = new wxButton(this, ID_B11, _T(""), *b11p, *buttonSize, 0);
    button12 = new wxButton(this, ID_B12, _T(""), *b12p, *buttonSize, 0);
    button13 = new wxButton(this, ID_B13, _T(""), *b13p, *buttonSize, 0);

    button20 = new wxButton(this, ID_B20, _T(""), *b20p, *buttonSize, 0);
    button21 = new wxButton(this, ID_B21, _T(""), *b21p, *buttonSize, 0);
    button22 = new wxButton(this, ID_B22, _T(""), *b22p, *buttonSize, 0);
    button23 = new wxButton(this, ID_B23, _T(""), *b23p, *buttonSize, 0);

    button30 = new wxButton(this, ID_B30, _T(""), *b30p, *buttonSize, 0);
    button31 = new wxButton(this, ID_B31, _T(""), *b31p, *buttonSize, 0);
    button32 = new wxButton(this, ID_B32, _T(""), *b32p, *buttonSize, 0);
    button33 = new wxButton(this, ID_B33, _T(""), *b33p, *buttonSize, 0);

    stateLabel = new wxStaticText(this, ID_Label, _T("Click to place a piece!"), *blp, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    buttons.push_back(button00);
    buttons.push_back(button01);
    buttons.push_back(button02);
    buttons.push_back(button03);
    buttons.push_back(button10);
    buttons.push_back(button11);
    buttons.push_back(button12);
    buttons.push_back(button13);
    buttons.push_back(button20);
    buttons.push_back(button21);
    buttons.push_back(button22);
    buttons.push_back(button23);
    buttons.push_back(button30);
    buttons.push_back(button31);
    buttons.push_back(button32);
    buttons.push_back(button33);

    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Connect Four");
    Bind(wxEVT_MENU, &myFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &myFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &myFrame::OnExit, this, wxID_EXIT);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B00);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B01);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B02);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B03);

    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B10);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B11);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B12);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B13);

    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B20);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B21);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B22);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B23);

    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B30);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B31);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B32);
    Bind(wxEVT_BUTTON, &myFrame::makePlayerMove, this, ID_B33);
}

bool myApp::OnInit() {
    myFrame * frame = new myFrame();
    frame->SetSize(wxSize(320, 330));
    frame->Show(true);
    return true;
}

// wxBEGIN_EVENT_TABLE(myFrame, wxFrame)
//     EVT_BUTTON(ID_B00, myFrame::readGrid(grid))
//     EVT_BUTTON(ID_B01, myFrame::readGrid(grid))
//     EVT_BUTTON(ID_B02, myFrame::readGrid(grid))
// wxEND_EVENT_TABLE()



// int main() {

//     char aiMark = 'X';
//     char hMark = 'O';

//     std::vector<char> grid(16, '-');

//     bestMove(grid, aiMark, hMark);
   

//     while(true) {

//         pair<bool, char> result = isWinner(grid, aiMark, hMark);
//         cout << "  0 1 2 3\n";
//         int printRow = 0;
//         for(int i = 0; i < 16; i+= 4) {
//             cout << printRow << " " << grid[i] << " " << grid[i + 1] << " " << grid[i+2] << " " << grid[i+3] << "\n";
//             printRow++;
//         }

	 


//         if(result.first != false) {


// 	        if(result.second == aiMark) {
//                 cout << "The computer wins!\n";
//                 return 0;
//             } else if (result.second == hMark) {
//                 cout << "You win!\n";
//                 return 0;
//             } else {
//                 cout << "Draw! Nobody wins.\n";
//                 return 0;
//             }

//         } else {

	 

//             int playerR;
//             int playerC;
//             int playerS;

//             cout << "Choose the row (0-indexed) to place your piece in.\n";
//             cin >> playerR;

//             cout << "Now, choose the column (0-indexed) to place your piece in.\n";
//             cin >> playerC;

//             playerS = playerC + (4 * playerR);

//             if(playerR < 0 || playerR >= 4 || playerC < 0 || playerC >= 4||grid[playerS] != '-') {
//                 cout << "Invalid input detected.\n";
//             } else {
                
//                 grid[playerS] = hMark;

		
//                 bestMove(grid, aiMark, hMark);
		
		
	        
//             }

//         }

//     }

//     return 0;

// }
