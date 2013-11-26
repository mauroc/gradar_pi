///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GRadarUI.h"

///////////////////////////////////////////////////////////////////////////

ControlDialogBase::ControlDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* topsizer;
	topsizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* boxsizer;
	boxsizer = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* BoxSizerOpOpt;
	BoxSizerOpOpt = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Operational Control") ), wxVERTICAL );
	
	wxString pOperatingModeChoices[] = { wxT("Master Mode"), wxT("Slave Mode") };
	int pOperatingModeNChoices = sizeof( pOperatingModeChoices ) / sizeof( wxString );
	pOperatingMode = new wxRadioBox( this, wxID_ANY, wxT("Operating Mode"), wxDefaultPosition, wxDefaultSize, pOperatingModeNChoices, pOperatingModeChoices, 1, wxRA_SPECIFY_COLS );
	pOperatingMode->SetSelection( 0 );
	BoxSizerOpOpt->Add( pOperatingMode, 0, wxALL, 5 );
	
	
	boxsizer->Add( BoxSizerOpOpt, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* StaticBoxSizerDisOpt;
	StaticBoxSizerDisOpt = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Display Options") ), wxVERTICAL );
	
	wxString pUpdateModeChoices[] = { wxT("Swept Scan Update"), wxT("Full Scan Update") };
	int pUpdateModeNChoices = sizeof( pUpdateModeChoices ) / sizeof( wxString );
	pUpdateMode = new wxRadioBox( this, wxID_ANY, wxT("Scan Update Method"), wxDefaultPosition, wxDefaultSize, pUpdateModeNChoices, pUpdateModeChoices, 1, wxRA_SPECIFY_COLS );
	pUpdateMode->SetSelection( 0 );
	StaticBoxSizerDisOpt->Add( pUpdateMode, 0, wxALL, 5 );
	
	wxStaticBoxSizer* sbSizer26;
	sbSizer26 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Scan Color") ), wxVERTICAL );
	
	scancolorpicker = new wxColourPickerCtrl( this, wxID_ANY, wxColour( 255, 0, 0 ), wxDefaultPosition, wxSize( -1,-1 ), wxCLRP_DEFAULT_STYLE|wxCLRP_USE_TEXTCTRL );
	sbSizer26->Add( scancolorpicker, 0, wxALL, 5 );
	
	
	StaticBoxSizerDisOpt->Add( sbSizer26, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* transliderboxsizer;
	transliderboxsizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Scan Transparency") ), wxVERTICAL );
	
	pTranSlider = new wxSlider( this, wxID_ANY, 90, 10, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	transliderboxsizer->Add( pTranSlider, 1, wxEXPAND, 5 );
	
	
	StaticBoxSizerDisOpt->Add( transliderboxsizer, 0, wxEXPAND, 5 );
	
	
	boxsizer->Add( StaticBoxSizerDisOpt, 0, wxEXPAND, 5 );
	
	pCB_Log = new wxCheckBox( this, wxID_ANY, wxT("Enable gradar Log"), wxDefaultPosition, wxDefaultSize, 0 );
	boxsizer->Add( pCB_Log, 0, wxALL, 5 );
	
	RangeButton = new wxButton( this, wxID_ANY, wxT("Range Control"), wxDefaultPosition, wxDefaultSize, 0 );
	boxsizer->Add( RangeButton, 0, wxALL, 5 );
	
	NoiseButton = new wxButton( this, wxID_ANY, wxT("Noise Control"), wxDefaultPosition, wxDefaultSize, 0 );
	boxsizer->Add( NoiseButton, 0, wxALL, 5 );
	
	DomeButton = new wxButton( this, wxID_ANY, wxT("Dome Control"), wxDefaultPosition, wxDefaultSize, 0 );
	boxsizer->Add( DomeButton, 0, wxALL, 5 );
	
	SentryButton = new wxButton( this, wxID_ANY, wxT("Sentry Control"), wxDefaultPosition, wxDefaultSize, 0 );
	boxsizer->Add( SentryButton, 0, wxALL, 5 );
	
	closebutton = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	boxsizer->Add( closebutton, 0, wxALL, 5 );
	
	
	topsizer->Add( boxsizer, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( topsizer );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ControlDialogBase::OnClose ) );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( ControlDialogBase::OnSize ) );
	pOperatingMode->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( ControlDialogBase::OnOperatingModeClick ), NULL, this );
	pUpdateMode->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( ControlDialogBase::OnUpdateModeClick ), NULL, this );
	scancolorpicker->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( ControlDialogBase::OnColorChanged ), NULL, this );
	pTranSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( ControlDialogBase::OnUpdateTranSlider ), NULL, this );
	pCB_Log->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ControlDialogBase::OnLogModeClicked ), NULL, this );
	RangeButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnRangeDialogClick ), NULL, this );
	NoiseButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnNoiseDialogClick ), NULL, this );
	DomeButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnDomeDialogClick ), NULL, this );
	SentryButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnSentryDialogClick ), NULL, this );
	closebutton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnIdOKClick ), NULL, this );
}

ControlDialogBase::~ControlDialogBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ControlDialogBase::OnClose ) );
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( ControlDialogBase::OnSize ) );
	pOperatingMode->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( ControlDialogBase::OnOperatingModeClick ), NULL, this );
	pUpdateMode->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( ControlDialogBase::OnUpdateModeClick ), NULL, this );
	scancolorpicker->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( ControlDialogBase::OnColorChanged ), NULL, this );
	pTranSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( ControlDialogBase::OnUpdateTranSlider ), NULL, this );
	pCB_Log->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ControlDialogBase::OnLogModeClicked ), NULL, this );
	RangeButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnRangeDialogClick ), NULL, this );
	NoiseButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnNoiseDialogClick ), NULL, this );
	DomeButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnDomeDialogClick ), NULL, this );
	SentryButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnSentryDialogClick ), NULL, this );
	closebutton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ControlDialogBase::OnIdOKClick ), NULL, this );
	
}

RangeDialogBase::RangeDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Range Setting") ), wxVERTICAL );
	
	wxString pRangeControlChoices[] = { wxT("Auto"), wxT("Manual") };
	int pRangeControlNChoices = sizeof( pRangeControlChoices ) / sizeof( wxString );
	pRangeControl = new wxRadioBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, pRangeControlNChoices, pRangeControlChoices, 1, wxRA_SPECIFY_ROWS );
	pRangeControl->SetSelection( 0 );
	sbSizer6->Add( pRangeControl, 0, wxALL, 5 );
	
	wxString pRangeSelectChoices[] = { wxT(".125"), wxT(".25"), wxT(".50"), wxT(".75"), wxT("1.0"), wxT("1.5"), wxT("2"), wxT("3"), wxT("4"), wxT("6"), wxT("8"), wxT("12"), wxT("16"), wxT("24"), wxT("36"), wxT("48") };
	int pRangeSelectNChoices = sizeof( pRangeSelectChoices ) / sizeof( wxString );
	pRangeSelect = new wxRadioBox( this, wxID_ANY, wxT("Range Miles"), wxDefaultPosition, wxDefaultSize, pRangeSelectNChoices, pRangeSelectChoices, 2, wxRA_SPECIFY_COLS );
	pRangeSelect->SetSelection( 1 );
	sbSizer6->Add( pRangeSelect, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer4->Add( sbSizer6, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer51;
	sbSizer51 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Gain") ), wxVERTICAL );
	
	wxString GainControlSelectChoices[] = { wxT("Auto"), wxT("Manual") };
	int GainControlSelectNChoices = sizeof( GainControlSelectChoices ) / sizeof( wxString );
	GainControlSelect = new wxRadioBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, GainControlSelectNChoices, GainControlSelectChoices, 1, wxRA_SPECIFY_ROWS );
	GainControlSelect->SetSelection( 0 );
	sbSizer51->Add( GainControlSelect, 0, wxALL, 5 );
	
	GainLevel = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	sbSizer51->Add( GainLevel, 0, wxEXPAND, 5 );
	
	
	bSizer4->Add( sbSizer51, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer16;
	sbSizer16 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );
	
	closebutton = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer16->Add( closebutton, 0, wxALL, 5 );
	
	
	bSizer4->Add( sbSizer16, 0, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer4, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( RangeDialogBase::OnClose ) );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( RangeDialogBase::OnSize ) );
	pRangeControl->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( RangeDialogBase::OnRangeControlClick ), NULL, this );
	pRangeSelect->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( RangeDialogBase::OnRangeSelectClick ), NULL, this );
	GainControlSelect->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( RangeDialogBase::OnGainModeClick ), NULL, this );
	GainLevel->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( RangeDialogBase::OnUpdateGainSlider ), NULL, this );
	closebutton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RangeDialogBase::OnRangeCloseClick ), NULL, this );
}

RangeDialogBase::~RangeDialogBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( RangeDialogBase::OnClose ) );
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( RangeDialogBase::OnSize ) );
	pRangeControl->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( RangeDialogBase::OnRangeControlClick ), NULL, this );
	pRangeSelect->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( RangeDialogBase::OnRangeSelectClick ), NULL, this );
	GainControlSelect->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( RangeDialogBase::OnGainModeClick ), NULL, this );
	GainLevel->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( RangeDialogBase::OnUpdateGainSlider ), NULL, this );
	closebutton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RangeDialogBase::OnRangeCloseClick ), NULL, this );
	
}

NoiseDialogBase::NoiseDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("SeaClutter Sensitivity Time Control") ), wxVERTICAL );
	
	wxString SeaClutterModeSelectChoices[] = { wxT("Man"), wxT("Calm"), wxT("Med"), wxT("High") };
	int SeaClutterModeSelectNChoices = sizeof( SeaClutterModeSelectChoices ) / sizeof( wxString );
	SeaClutterModeSelect = new wxRadioBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, SeaClutterModeSelectNChoices, SeaClutterModeSelectChoices, 1, wxRA_SPECIFY_ROWS );
	SeaClutterModeSelect->SetSelection( 0 );
	sbSizer6->Add( SeaClutterModeSelect, 0, 0, 5 );
	
	SeaClutterLevel = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	sbSizer6->Add( SeaClutterLevel, 0, wxEXPAND, 5 );
	
	
	bSizer5->Add( sbSizer6, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("FTC Fast Time Constant") ), wxVERTICAL );
	
	wxString FTCModeSelectChoices[] = { wxT("Off"), wxT("Low"), wxT("Med"), wxT("High") };
	int FTCModeSelectNChoices = sizeof( FTCModeSelectChoices ) / sizeof( wxString );
	FTCModeSelect = new wxRadioBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, FTCModeSelectNChoices, FTCModeSelectChoices, 1, wxRA_SPECIFY_ROWS );
	FTCModeSelect->SetSelection( 0 );
	sbSizer7->Add( FTCModeSelect, 1, wxALL, 5 );
	
	
	bSizer5->Add( sbSizer7, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer8;
	sbSizer8 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("RainClutter") ), wxVERTICAL );
	
	RainClutterLevel = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	sbSizer8->Add( RainClutterLevel, 1, wxEXPAND, 5 );
	
	
	bSizer5->Add( sbSizer8, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Crosstalk") ), wxVERTICAL );
	
	wxString CrosstalkOnOffChoices[] = { wxT("Off"), wxT("On") };
	int CrosstalkOnOffNChoices = sizeof( CrosstalkOnOffChoices ) / sizeof( wxString );
	CrosstalkOnOff = new wxRadioBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, CrosstalkOnOffNChoices, CrosstalkOnOffChoices, 1, wxRA_SPECIFY_ROWS );
	CrosstalkOnOff->SetSelection( 0 );
	sbSizer9->Add( CrosstalkOnOff, 0, wxALL, 5 );
	
	
	bSizer5->Add( sbSizer9, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer17;
	sbSizer17 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );
	
	closebutton = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer17->Add( closebutton, 0, wxALL, 5 );
	
	
	bSizer5->Add( sbSizer17, 0, wxEXPAND, 5 );
	
	
	bSizer6->Add( bSizer5, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( NoiseDialogBase::OnClose ) );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( NoiseDialogBase::OnSize ) );
	SeaClutterModeSelect->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( NoiseDialogBase::OnSeaClutterModeClick ), NULL, this );
	SeaClutterLevel->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( NoiseDialogBase::OnUpdateSeaClutterSlider ), NULL, this );
	FTCModeSelect->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( NoiseDialogBase::OnFTCModeclick ), NULL, this );
	RainClutterLevel->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( NoiseDialogBase::OnUpdateRainClutterSlider ), NULL, this );
	CrosstalkOnOff->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( NoiseDialogBase::OnCrosstalkModeClick ), NULL, this );
	closebutton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NoiseDialogBase::OnNoiseCloseClick ), NULL, this );
}

NoiseDialogBase::~NoiseDialogBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( NoiseDialogBase::OnClose ) );
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( NoiseDialogBase::OnSize ) );
	SeaClutterModeSelect->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( NoiseDialogBase::OnSeaClutterModeClick ), NULL, this );
	SeaClutterLevel->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( NoiseDialogBase::OnUpdateSeaClutterSlider ), NULL, this );
	FTCModeSelect->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( NoiseDialogBase::OnFTCModeclick ), NULL, this );
	RainClutterLevel->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( NoiseDialogBase::OnUpdateRainClutterSlider ), NULL, this );
	CrosstalkOnOff->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( NoiseDialogBase::OnCrosstalkModeClick ), NULL, this );
	closebutton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NoiseDialogBase::OnNoiseCloseClick ), NULL, this );
	
}

DomeDialogBase::DomeDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer12;
	sbSizer12 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Dome Offset") ), wxVERTICAL );
	
	DomeOffsetSelect = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, -90, 90, 0 );
	sbSizer12->Add( DomeOffsetSelect, 0, wxALL, 5 );
	
	
	bSizer8->Add( sbSizer12, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer13;
	sbSizer13 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Dome Speed") ), wxVERTICAL );
	
	wxString DomeSpeedSelectChoices[] = { wxT("24"), wxT("30") };
	int DomeSpeedSelectNChoices = sizeof( DomeSpeedSelectChoices ) / sizeof( wxString );
	DomeSpeedSelect = new wxRadioBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, DomeSpeedSelectNChoices, DomeSpeedSelectChoices, 1, wxRA_SPECIFY_ROWS );
	DomeSpeedSelect->SetSelection( 0 );
	sbSizer13->Add( DomeSpeedSelect, 0, wxALL, 5 );
	
	
	bSizer8->Add( sbSizer13, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer14;
	sbSizer14 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );
	
	closebutton = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer14->Add( closebutton, 0, wxALL, 5 );
	
	
	bSizer8->Add( sbSizer14, 0, wxEXPAND, 5 );
	
	
	bSizer7->Add( bSizer8, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DomeDialogBase::OnClose ) );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( DomeDialogBase::OnSize ) );
	DomeOffsetSelect->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( DomeDialogBase::OnUpdateOffset ), NULL, this );
	DomeSpeedSelect->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( DomeDialogBase::OnDomeSpeedClick ), NULL, this );
	closebutton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DomeDialogBase::OnDomeCloseClick ), NULL, this );
}

DomeDialogBase::~DomeDialogBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DomeDialogBase::OnClose ) );
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( DomeDialogBase::OnSize ) );
	DomeOffsetSelect->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( DomeDialogBase::OnUpdateOffset ), NULL, this );
	DomeSpeedSelect->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( DomeDialogBase::OnDomeSpeedClick ), NULL, this );
	closebutton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DomeDialogBase::OnDomeCloseClick ), NULL, this );
	
}

SentryDialogBase::SentryDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer15;
	sbSizer15 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Timed Transmit") ), wxVERTICAL );
	
	wxString TimedTransmitChoices[] = { wxT("Off"), wxT("On") };
	int TimedTransmitNChoices = sizeof( TimedTransmitChoices ) / sizeof( wxString );
	TimedTransmit = new wxRadioBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, TimedTransmitNChoices, TimedTransmitChoices, 1, wxRA_SPECIFY_ROWS );
	TimedTransmit->SetSelection( 0 );
	sbSizer15->Add( TimedTransmit, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer16;
	sbSizer16 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Standby Minutes") ), wxVERTICAL );
	
	StandbyMinutes = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 1, 250, 20 );
	sbSizer16->Add( StandbyMinutes, 0, wxALL, 5 );
	
	
	bSizer12->Add( sbSizer16, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer17;
	sbSizer17 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Transmit Minutes") ), wxVERTICAL );
	
	TransmitMinutes = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 1, 60, 2 );
	sbSizer17->Add( TransmitMinutes, 0, wxALL, 5 );
	
	
	bSizer12->Add( sbSizer17, 1, wxEXPAND, 5 );
	
	
	sbSizer15->Add( bSizer12, 1, wxEXPAND, 5 );
	
	
	bSizer10->Add( sbSizer15, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer18;
	sbSizer18 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Guard Zone") ), wxVERTICAL );
	
	wxString GuardZoneOnOffChoices[] = { wxT("Off"), wxT("On") };
	int GuardZoneOnOffNChoices = sizeof( GuardZoneOnOffChoices ) / sizeof( wxString );
	GuardZoneOnOff = new wxRadioBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, GuardZoneOnOffNChoices, GuardZoneOnOffChoices, 1, wxRA_SPECIFY_ROWS );
	GuardZoneOnOff->SetSelection( 0 );
	sbSizer18->Add( GuardZoneOnOff, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer19;
	sbSizer19 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Outer Range Meters") ), wxVERTICAL );
	
	OuterRange = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 20000, 0 );
	sbSizer19->Add( OuterRange, 0, wxALL, 5 );
	
	
	bSizer13->Add( sbSizer19, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer20;
	sbSizer20 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Inner Range Meters") ), wxHORIZONTAL );
	
	InnerRange = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 20000, 0 );
	sbSizer20->Add( InnerRange, 0, wxALL, 5 );
	
	
	bSizer13->Add( sbSizer20, 1, wxEXPAND, 5 );
	
	
	sbSizer18->Add( bSizer13, 0, wxEXPAND, 5 );
	
	wxString PartialArcNoYesChoices[] = { wxT("No"), wxT("Yes") };
	int PartialArcNoYesNChoices = sizeof( PartialArcNoYesChoices ) / sizeof( wxString );
	PartialArcNoYes = new wxRadioBox( this, wxID_ANY, wxT("Partial Arc"), wxDefaultPosition, wxDefaultSize, PartialArcNoYesNChoices, PartialArcNoYesChoices, 1, wxRA_SPECIFY_ROWS );
	PartialArcNoYes->SetSelection( 0 );
	sbSizer18->Add( PartialArcNoYes, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer21;
	sbSizer21 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Start Angle") ), wxVERTICAL );
	
	StartAngle = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, -360, 360, 0 );
	sbSizer21->Add( StartAngle, 0, wxALL, 5 );
	
	
	bSizer14->Add( sbSizer21, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer22;
	sbSizer22 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("End Angle") ), wxVERTICAL );
	
	EndAngle = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, -360, 360, 0 );
	sbSizer22->Add( EndAngle, 0, wxALL, 5 );
	
	
	bSizer14->Add( sbSizer22, 1, wxEXPAND, 5 );
	
	
	sbSizer18->Add( bSizer14, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer24;
	sbSizer24 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Guard Zone Color") ), wxVERTICAL );
	
	m_colorpicker = new wxColourPickerCtrl( this, wxID_ANY, wxColour( 255, 255, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE|wxCLRP_USE_TEXTCTRL );
	sbSizer24->Add( m_colorpicker, 0, wxALL, 5 );
	
	
	sbSizer18->Add( sbSizer24, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* gztrangobsizer;
	gztrangobsizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Guard ZoneTransparency") ), wxVERTICAL );
	
	pGZTranSlider = new wxSlider( this, wxID_ANY, 90, 10, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	gztrangobsizer->Add( pGZTranSlider, 1, wxEXPAND, 5 );
	
	
	sbSizer18->Add( gztrangobsizer, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer29;
	sbSizer29 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Alarm Sensitivity") ), wxVERTICAL );
	
	AlarmSensitivitySlider = new wxSlider( this, wxID_ANY, 5, 1, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	sbSizer29->Add( AlarmSensitivitySlider, 0, wxEXPAND, 5 );
	
	
	sbSizer18->Add( sbSizer29, 0, wxEXPAND, 5 );
	
	
	bSizer10->Add( sbSizer18, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer23;
	sbSizer23 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );
	
	closebutton = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer23->Add( closebutton, 0, wxALL, 5 );
	
	
	bSizer10->Add( sbSizer23, 1, wxEXPAND, 5 );
	
	
	bSizer9->Add( bSizer10, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer9 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( SentryDialogBase::OnClose ) );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( SentryDialogBase::OnSize ) );
	TimedTransmit->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( SentryDialogBase::OnTimedTransmitClick ), NULL, this );
	StandbyMinutes->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateStandbyMinutes ), NULL, this );
	TransmitMinutes->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateTransmitMinutes ), NULL, this );
	GuardZoneOnOff->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( SentryDialogBase::OnGuardZoneClick ), NULL, this );
	OuterRange->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateOuterRange ), NULL, this );
	InnerRange->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateInnerRange ), NULL, this );
	PartialArcNoYes->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( SentryDialogBase::OnPartialArcClick ), NULL, this );
	StartAngle->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateStartAngle ), NULL, this );
	EndAngle->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateEndAngle ), NULL, this );
	m_colorpicker->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SentryDialogBase::OnColorChanged ), NULL, this );
	pGZTranSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( SentryDialogBase::OnUpdateTranSlider ), NULL, this );
	AlarmSensitivitySlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( SentryDialogBase::OnUpdateSensitivitySlider ), NULL, this );
	closebutton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SentryDialogBase::OnSentryCloseClick ), NULL, this );
}

SentryDialogBase::~SentryDialogBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( SentryDialogBase::OnClose ) );
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( SentryDialogBase::OnSize ) );
	TimedTransmit->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( SentryDialogBase::OnTimedTransmitClick ), NULL, this );
	StandbyMinutes->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateStandbyMinutes ), NULL, this );
	TransmitMinutes->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateTransmitMinutes ), NULL, this );
	GuardZoneOnOff->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( SentryDialogBase::OnGuardZoneClick ), NULL, this );
	OuterRange->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateOuterRange ), NULL, this );
	InnerRange->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateInnerRange ), NULL, this );
	PartialArcNoYes->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( SentryDialogBase::OnPartialArcClick ), NULL, this );
	StartAngle->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateStartAngle ), NULL, this );
	EndAngle->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SentryDialogBase::OnUpdateEndAngle ), NULL, this );
	m_colorpicker->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SentryDialogBase::OnColorChanged ), NULL, this );
	pGZTranSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( SentryDialogBase::OnUpdateTranSlider ), NULL, this );
	AlarmSensitivitySlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( SentryDialogBase::OnUpdateSensitivitySlider ), NULL, this );
	closebutton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SentryDialogBase::OnSentryCloseClick ), NULL, this );
	
}

SentryAlarmDialogBase::SentryAlarmDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer27;
	sbSizer27 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Radar Sentry Alarm"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetFont( wxFont( 15, 70, 90, 90, false, wxEmptyString ) );
	
	sbSizer27->Add( m_staticText1, 1, wxALL, 5 );
	
	
	bSizer14->Add( sbSizer27, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer28;
	sbSizer28 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxHORIZONTAL );
	
	closebutton = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer28->Add( closebutton, 0, wxALL, 5 );
	
	
	bSizer14->Add( sbSizer28, 0, wxALIGN_RIGHT|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( SentryAlarmDialogBase::OnClose ) );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( SentryAlarmDialogBase::OnSize ) );
	closebutton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SentryAlarmDialogBase::OnAlarmCloseClick ), NULL, this );
}

SentryAlarmDialogBase::~SentryAlarmDialogBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( SentryAlarmDialogBase::OnClose ) );
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( SentryAlarmDialogBase::OnSize ) );
	closebutton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SentryAlarmDialogBase::OnAlarmCloseClick ), NULL, this );
	
}
