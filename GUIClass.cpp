///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUIClass.h"

///////////////////////////////////////////////////////////////////////////

GUIClass::GUIClass( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	statusBar->SetStatusText("X's turn");
	menuBar = new wxMenuBar( 0 );
	menu = new wxMenu();
	wxMenuItem* exitMenuItem;
	exitMenuItem = new wxMenuItem( menu, wxID_ANY, wxString( wxT("Exit") ) + wxT('\t') + wxT("ALT-F4"), wxEmptyString, wxITEM_NORMAL );
	menu->Append( exitMenuItem );
	
	menuBar->Append( menu, wxT("File") ); 
	
	this->SetMenuBar( menuBar );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* topRow;
	topRow = new wxBoxSizer( wxHORIZONTAL );
	
	TL = new wxButton( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	topRow->Add( TL, 0, wxALL, 5 );
	
	TM = new wxButton( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	topRow->Add( TM, 0, wxALL, 5 );
	
	TR = new wxButton( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	topRow->Add( TR, 0, wxALL, 5 );
	
	
	topRow->Add( 0, 50, 1, wxEXPAND, 5 );
	
	bSizer2->Add( topRow, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* middleRow;
	middleRow = new wxBoxSizer( wxHORIZONTAL );
	
	ML = new wxButton( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	middleRow->Add( ML, 0, wxALL, 5 );
	
	MM = new wxButton( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	middleRow->Add( MM, 0, wxALL, 5 );
	
	MR = new wxButton( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	middleRow->Add( MR, 0, wxALL, 5 );
	
	
	middleRow->Add( 0, 50, 1, wxEXPAND, 5 );
	
	bSizer2->Add( middleRow, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bottomRow;
	bottomRow = new wxBoxSizer( wxHORIZONTAL );
	
	BL = new wxButton( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bottomRow->Add( BL, 0, wxALL, 5 );
	
	BM = new wxButton( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bottomRow->Add( BM, 0, wxALL, 5 );
	
	BR = new wxButton( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bottomRow->Add( BR, 0, wxALL, 5 );
	
	
	bottomRow->Add( 0, 75, 1, wxEXPAND, 5 );
	
	bSizer2->Add( bottomRow, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* resetExit;
	resetExit = new wxBoxSizer( wxHORIZONTAL );
	
	reset = new wxButton( m_panel1, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	resetExit->Add( reset, 0, wxALL, 5 );
	
	exit = new wxButton( m_panel1, wxID_ANY, wxT("Exit"), wxDefaultPosition, wxDefaultSize, 0 );
	resetExit->Add( exit, 0, wxALL, 5 );
	
	bSizer2->Add( resetExit, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_panel1->SetSizer( bSizer2 );
	m_panel1->Layout();
	bSizer2->Fit( m_panel1 );
	bSizer1->Add( m_panel1, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( exitMenuItem->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIClass::OnExitSelected ) );
	TL->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	TM->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	TR->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	ML->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	MM->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	MR->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	BL->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	BM->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	BR->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	reset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnResetButtonClicked ), NULL, this );
	exit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnExitSelected ), NULL, this );
}

GUIClass::~GUIClass()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIClass::OnExitSelected ) );
	TL->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	TM->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	TR->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	ML->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	MM->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	MR->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	BL->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	BM->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	BR->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnTTTButtonClicked ), NULL, this );
	reset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnResetButtonClicked ), NULL, this );
	exit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::OnExitSelected ), NULL, this );
	
}
