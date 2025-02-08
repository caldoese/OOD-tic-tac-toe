// Author:  Caleb Doese
// Date:    4/02/22
// Purpose: To implement the SubGUIClass functions that handle events to create a functioning TTT game

#include "SubGUIClass.h"

SubGUIClass::SubGUIClass( wxWindow* parent )
:
GUIClass( parent )
{

}

void SubGUIClass::OnExitSelected( wxCommandEvent& event )
{
// TODO: Implement OnExitSelected
	//Close window if they want to exit
	int answer = wxMessageBox("Do you want to Exit?", "Exit Confirmation", wxYES_NO, this);
	if (answer == wxYES) {
		this->Close();
	}
}

void SubGUIClass::OnTTTButtonClicked( wxCommandEvent& event )
{
// TODO: Implement OnTTTButtonClicked
	//Determine which button is being changed
	wxButton* b = (wxButton*)event.GetEventObject();
	//Check if button clicked is blank
	if (b->GetLabel() == "") {
		//Set button label
		if (xTurn) {
			b->SetLabel("X");
		}
		else {
			b->SetLabel("O");
		}

		//Initialize TTT board based on labels of buttons)
		wxString board[3][3] = { {TL->GetLabel(),TM->GetLabel(),TR->GetLabel()}, 
								 {ML->GetLabel(),MM->GetLabel(),MR->GetLabel()},
								 {BL->GetLabel(),BM->GetLabel(),BR->GetLabel()}};
		
		//check for winner
		int answer;
		if (checkForWinner(board)) {
			//Display who won, ask if they want to replay
			if (xTurn) {
				answer = wxMessageBox("X wins, play again?", "Replay",
					wxYES_NO, this);
			}
			else {
				answer = wxMessageBox("O wins, play again?", "Replay",
					wxYES_NO, this);
			}
			if (answer == wxYES) {
				xTurn = false;
				clearBoard();
			}
			else {
				OnExitSelected(event);
			}
		}

		//If the board is full and a winner has not been decided, it's a tie; ask if they want to replay
		else {
			if (isFullBoard(event)) {
				answer = wxMessageBox("It's a tie, play again?", "Replay", wxYES_NO, this);
				if (answer == wxYES) {
					xTurn = false;
					clearBoard();
				}
				else {
					OnExitSelected(event);
				}
			}

		}

		//alternate turns
		if (xTurn) {
			xTurn = false;
		}
		else if (!xTurn) {
			xTurn = true;
		}

		//update the status bar
		if (xTurn) {
			statusBar->SetStatusText("X's turn");
		}
		else if (!xTurn) {
			statusBar->SetStatusText("O's turn");
		}
	}
}

void SubGUIClass::OnResetButtonClicked( wxCommandEvent& event )
{
// TODO: Implement OnResetButtonClicked
	//Clear the board if they want to reset
	int answer = wxMessageBox("Restart game?", "Replay", wxYES_NO, this);
	if (answer == wxYES) {
		clearBoard();
	}
}

//Return true if winner, false if no winner
bool SubGUIClass::checkForWinner(wxString board[3][3]) {

	for (int i = 0; i < 3; i++) {
		//row check
		if (board[i][0] != "" && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
			return true;
		}
		//col check
		if (board[0][i] != "" && board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
			return true;
		}
	}
	
	//diagonal check
	if ((board[0][0] != "" && board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
		(board[0][2] != "" && board[0][2] == board[1][1] && board[0][2] == board[2][0])) {
		return true;
	}

	//If all three checks fail, there is no winner yet
	else {
		return false;
	}
}

//Reset labels to empty
void SubGUIClass::clearBoard() {
	TL->SetLabel("");
	TM->SetLabel("");
	TR->SetLabel("");
	ML->SetLabel("");
	MM->SetLabel("");
	MR->SetLabel("");
	BL->SetLabel("");
	BM->SetLabel("");
	BR->SetLabel("");
}

//Check if every button has a label (board is full)
bool SubGUIClass::isFullBoard(wxCommandEvent& event) {
	if (TL->GetLabel() != "" && TM->GetLabel() != "" && TR->GetLabel() != ""
		&& ML->GetLabel() != "" && MM->GetLabel() != "" && MR->GetLabel() != ""
		&& BL->GetLabel() != "" && BM->GetLabel() != "" && BR->GetLabel() != "") {
		return true;
	}
	else {
		return false;
	}
}