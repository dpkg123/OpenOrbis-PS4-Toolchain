; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "OpenOrbis PS4 Toolchain"
#define MyAppVersion "0.5.2"
#define MyAppPublisher "OpenOrbis"
#define MyAppURL "http://www.github.com/openorbis"
#define Toolchain GetEnv('OO_PS4_TOOLCHAIN_SRC')

[Setup]
; Tell Windows Explorer to reload the environment
ChangesEnvironment=yes
; NOTE: The value of AppId uniquely identifies this application. Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{0E4C58BF-178A-4E2F-98C6-5BC7B5ED3472}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName=C:\OpenOrbis\PS4Toolchain
DefaultGroupName={#MyAppName}
AllowNoIcons=yes
LicenseFile={#Toolchain}\LICENSE
InfoBeforeFile={#Toolchain}\extra\readme.txt
; Uncomment the following line to run in non administrative install mode (install for current user only.)
;PrivilegesRequired=lowest
PrivilegesRequiredOverridesAllowed=dialog
OutputDir={#Toolchain}\
OutputBaseFilename=OpenOrbis PS4 Toolchain
SetupIconFile={#Toolchain}\extra\logo.ico
Compression=lzma
SolidCompression=yes
WizardStyle=modern
WizardSmallImageFile={#Toolchain}\extra\installer-wizard-small.bmp
WizardImageFile={#Toolchain}\extra\installer-wizard-large.bmp

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Files]
Source: "{#Toolchain}\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Code]
const
  SMTO_ABORTIFHUNG = 2;
  WM_WININICHANGE = $001A;
  WM_SETTINGCHANGE = WM_WININICHANGE;

type
  WPARAM = UINT_PTR;
  LPARAM = INT_PTR;
  LRESULT = INT_PTR;

function SendTextMessageTimeout(hWnd: HWND; Msg: UINT;
  wParam: WPARAM; lParam: PAnsiChar; fuFlags: UINT;
  uTimeout: UINT; out lpdwResult: DWORD): LRESULT;
  external 'SendMessageTimeoutA@user32.dll stdcall';  

procedure RefreshEnvironment;
var
  S: AnsiString;
  MsgResult: DWORD;
begin
  S := 'Environment';
  SendTextMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, 0,
    PAnsiChar(S), SMTO_ABORTIFHUNG, 5000, MsgResult);
end;

procedure CurStepChanged(CurStep: TSetupStep);
begin
  if CurStep = ssPostInstall then
  begin
    WizardForm.StatusLabel.Caption := 'Setting environment variable...';
    RefreshEnvironment;
  end;
end;
