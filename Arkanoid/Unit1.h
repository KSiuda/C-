//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ComCtrls.hpp>
#include <ToolWin.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TImage *b;
        TTimer *timer_pilka;
        TImage *p;
        TTimer *lewo;
        TTimer *prawo;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image6;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        TImage *Image11;
        TImage *Image12;
        TImage *Image13;
        TImage *Image14;
        TImage *Image15;
        TImage *Image16;
        TImage *Image17;
        TImage *Image18;
        TButton *Button1;
        THeaderControl *HeaderControl1;
        THeaderControl *HeaderControl2;
        TMainMenu *MainMenu1;
        TMenuItem *Start1;
        TMenuItem *Pauza1;
        TMenuItem *Pauza2;
        TMenuItem *Start2;
        TMenuItem *Szybciej1;
        TMenuItem *Wolniej1;
        TMenuItem *Nowagra1;
        TImage *Image19;
        TImage *Image20;
        TImage *Image21;
        TImage *Image22;
        TImage *Image23;
        TImage *Image24;
        TImage *Image25;
        TImage *Image26;
        TImage *Image27;
        TImage *Image28;
        TImage *Image29;
        TImage *Image30;
        TImage *Image31;
        TImage *Image32;
        TImage *Image33;
        TImage *Image34;
        TImage *Image35;
        TImage *Image36;
        TImage *Image37;
        TImage *Image38;
        TImage *Image39;
        TImage *Image40;
        TButton *Button2;
        void __fastcall timer_pilkaTimer(TObject *Sender);
        void __fastcall lewoTimer(TObject *Sender);
        void __fastcall prawoTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Pauza2Click(TObject *Sender);
        void __fastcall Start2Click(TObject *Sender);
        void __fastcall Szybciej1Click(TObject *Sender);
        void __fastcall Wolniej1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
