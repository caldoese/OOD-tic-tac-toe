#ifndef __SubGUIClass__
#define __SubGUIClass__

/**
@file
Subclass of GUIClass, which is generated by wxFormBuilder.
*/

#include "GUIClass.h"

//// end generated include

/** Implementing GUIClass */
class SubGUIClass : public GUIClass
{
	protected:
		// Handlers for GUIClass events.
		void OnExitSelected( wxCommandEvent& event );
		void OnTTTButtonClicked( wxCommandEvent& event );
		void OnResetButtonClicked( wxCommandEvent& event );
		bool isFullBoard(wxCommandEvent& event);
		bool xTurn = true;
		bool checkForWinner(wxString board[3][3]);
		void clearBoard();
	public:
		/** Constructor */
		SubGUIClass( wxWindow* parent );
	//// end generated class members
};

#endif // __SubGUIClass__
