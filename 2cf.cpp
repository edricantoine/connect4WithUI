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

wxIMPLEMENT_APP(myApp);

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
    button00 = new wxButton(this, ID_B00, _T("-"), *b00p, *buttonSize, 0);
    button01 = new wxButton(this, ID_B01, _T("-"), *b01p, *buttonSize, 0);

    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Connect Four");
    Bind(wxEVT_MENU, &myFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &myFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &myFrame::OnExit, this, wxID_EXIT);
}

bool myApp::OnInit() {
    myFrame * frame = new myFrame();
    frame->SetSize(wxSize(300, 300));
    frame->Show(true);
    return true;
}

wxBEGIN_EVENT_TABLE(myFrame, wxFrame)
    EVT_BUTTON(ID_B00, myFrame::OnExit)
    EVT_BUTTON(ID_B01, myFrame::OnExit)
wxEND_EVENT_TABLE()



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
