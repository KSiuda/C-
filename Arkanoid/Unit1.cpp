//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x=-6;
int y=-6;

int do_wygranej=40;

bool kolizja (TImage*pilka, TImage*cegla)
{ if(pilka->Left >= cegla->Left-pilka->Width+5 &&
     pilka->Left <= cegla->Left+cegla->Width-5 &&
     pilka->Top  >= cegla->Top-pilka->Height+5 &&
     pilka->Top  <= cegla->Top+cegla->Height-5)
    {  return true;  }
else return false;

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
          ;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::timer_pilkaTimer(TObject *Sender)
{
b->Left += x;
b->Top  += y;
                //odbijanie od scian:

//lewa
if(b->Left-5<=tlo->Left) x=-x;
//gorna
if(b->Top-5<=tlo->Top) y=-y;
//prawa
if(b->Left+b->Width+5 >= tlo->Left+tlo->Width) x=-x;
//dol
//if(b->Top+b->Height+5 >= tlo->Top+tlo->Height) y=-y;
//skucha:
if (b->Top>=p->Top+ p->Height+15)

{
timer_pilka->Enabled = false;
b->Visible = false;
Button1->Caption="Pora¿ka! Spróbuj jeszcze raz.";
Button1->Visible=true;
}
else if (b->Left >p->Left-b->Width/2  &&  b->Left < p->Left+p->Width &&
         b->Top+b->Height > p->Top)

         {               if(y>0) y= -y;

          }

if  (do_wygranej <=0)
{
timer_pilka->Enabled=false;
b->Visible=false;
Button1->Visible=true;
}
//zbija
if(kolizja(b, Image1) && Image1->Visible==true)
{x=-x; y=-y; Image1->Visible=false; do_wygranej --;}

if(kolizja(b, Image2) && Image2->Visible==true)
{x=-x; y=-y; Image2->Visible=false; do_wygranej --;}

if(kolizja(b, Image3) && Image3->Visible==true)
{x=-x; y=-y; Image3->Visible=false; do_wygranej --;}

if(kolizja(b, Image4) && Image4->Visible==true)
{x=-x; y=-y; Image4->Visible=false; do_wygranej --;}

if(kolizja(b, Image5) && Image5->Visible==true)
{x=-x; y=-y; Image5->Visible=false; do_wygranej --;}

if(kolizja(b, Image6) && Image6->Visible==true)
{x=-x; y=-y; Image6->Visible=false; do_wygranej --;}

if(kolizja(b, Image7) && Image7->Visible==true)
{x=-x; y=-y; Image7->Visible=false; do_wygranej --;}

if(kolizja(b, Image8) && Image8->Visible==true)
{x=-x; y=-y; Image8->Visible=false; do_wygranej --;}

if(kolizja(b, Image9) && Image9->Visible==true)
{x=-x; y=-y; Image9->Visible=false; do_wygranej --;}

if(kolizja(b, Image10) && Image10->Visible==true)
{x=-x; y=-y; Image10->Visible=false; do_wygranej --;}

if(kolizja(b, Image11) && Image11->Visible==true)
{x=-x; y=-y; Image11->Visible=false; do_wygranej --;}

if(kolizja(b, Image12) && Image12->Visible==true)
{x=-x; y=-y; Image12->Visible=false; do_wygranej --;}

if(kolizja(b, Image13) && Image13->Visible==true)
{x=-x; y=-y; Image13->Visible=false; do_wygranej --;}

if(kolizja(b, Image14) && Image14->Visible==true)
{x=-x; y=-y; Image14->Visible=false; do_wygranej --;}

if(kolizja(b, Image15) && Image15->Visible==true)
{x=-x; y=-y; Image15->Visible=false; do_wygranej --;}

if(kolizja(b, Image16) && Image16->Visible==true)
{x=-x; y=-y; Image16->Visible=false; do_wygranej --;}

if(kolizja(b, Image17) && Image17->Visible==true)
{x=-x; y=-y; Image17->Visible=false; do_wygranej --;}

if(kolizja(b, Image18) && Image18->Visible==true)
{x=-x; y=-y; Image18->Visible=false; do_wygranej --;}

if(kolizja(b, Image19) && Image19->Visible==true)
{x=-x; y=-y; Image19->Visible=false; do_wygranej --;}

if(kolizja(b, Image20) && Image20->Visible==true)
{x=-x; y=-y; Image20->Visible=false; do_wygranej --;}

if(kolizja(b, Image21) && Image21->Visible==true)
{x=-x; y=-y; Image21->Visible=false; do_wygranej --;}

if(kolizja(b, Image22) && Image22->Visible==true)
{x=-x; y=-y; Image22->Visible=false; do_wygranej --;}

if(kolizja(b, Image23) && Image23->Visible==true)
{x=-x; y=-y; Image23->Visible=false; do_wygranej --;}

if(kolizja(b, Image24) && Image24->Visible==true)
{x=-x; y=-y; Image24->Visible=false; do_wygranej --;}

if(kolizja(b, Image25) && Image25->Visible==true)
{x=-x; y=-y; Image25->Visible=false; do_wygranej --;}

if(kolizja(b, Image26) && Image26->Visible==true)
{x=-x; y=-y; Image26->Visible=false; do_wygranej --;}

if(kolizja(b, Image27) && Image27->Visible==true)
{x=-x; y=-y; Image27->Visible=false; do_wygranej --;}

if(kolizja(b, Image28) && Image28->Visible==true)
{x=-x; y=-y; Image28->Visible=false; do_wygranej --;}

if(kolizja(b, Image29) && Image29->Visible==true)
{x=-x; y=-y; Image29->Visible=false; do_wygranej --;}

if(kolizja(b, Image30) && Image30->Visible==true)
{x=-x; y=-y; Image30->Visible=false; do_wygranej --;}

if(kolizja(b, Image31) && Image31->Visible==true)
{x=-x; y=-y; Image31->Visible=false; do_wygranej --;}

if(kolizja(b, Image32) && Image32->Visible==true)
{x=-x; y=-y; Image32->Visible=false; do_wygranej --;}

if(kolizja(b, Image33) && Image33->Visible==true)
{x=-x; y=-y; Image33->Visible=false; do_wygranej --;}

if(kolizja(b, Image34) && Image34->Visible==true)
{x=-x; y=-y; Image34->Visible=false; do_wygranej --;}

if(kolizja(b, Image35) && Image35->Visible==true)
{x=-x; y=-y; Image35->Visible=false; do_wygranej --;}

if(kolizja(b, Image36) && Image36->Visible==true)
{x=-x; y=-y; Image36->Visible=false; do_wygranej --;}

if(kolizja(b, Image37) && Image37->Visible==true)
{x=-x; y=-y; Image37->Visible=false; do_wygranej --;}

if(kolizja(b, Image38) && Image38->Visible==true)
{x=-x; y=-y; Image38->Visible=false; do_wygranej --;}

if(kolizja(b, Image39) && Image39->Visible==true)
{x=-x; y=-y; Image39->Visible=false; do_wygranej --;}

if(kolizja(b, Image40) && Image40->Visible==true)
{x=-x; y=-y; Image40->Visible=false; do_wygranej --;}


}

//---------------------------------------------------------------------------
void __fastcall TForm1::lewoTimer(TObject *Sender)
{
 if(p->Left > 10)p->Left-= 12;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prawoTimer(TObject *Sender)
{
if(p->Left+ p->Width < tlo->Width-10) p->Left += 12;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if (  Key == VK_LEFT)  lewo->Enabled = true;
   if (  Key == VK_RIGHT) prawo->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if (  Key == VK_LEFT)  lewo->Enabled = false;
   if (  Key == VK_RIGHT) prawo->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
 b->Left=100;
 b->Top=100;

 b->Visible=true;
 x=-6; y=-6;
 timer_pilka->Enabled=true;

 Button1->Visible=false;
 do_wygranej=18;

 Image1->Visible=true; Image7->Visible=true;  Image13->Visible=true;
 Image2->Visible=true; Image8->Visible=true;  Image14->Visible=true;
 Image3->Visible=true; Image9->Visible=true;  Image15->Visible=true;
 Image4->Visible=true; Image10->Visible=true; Image16->Visible=true;
 Image5->Visible=true; Image11->Visible=true; Image17->Visible=true;
 Image6->Visible=true; Image12->Visible=true; Image18->Visible=true;
 Image19->Visible=true;Image20->Visible=true; Image21->Visible=true;
 Image22->Visible=true;Image23->Visible=true; Image24->Visible=true;
 Image25->Visible=true;Image26->Visible=true; Image27->Visible=true;
 Image28->Visible=true;Image29->Visible=true; Image30->Visible=true;
 Image31->Visible=true;Image32->Visible=true; Image33->Visible=true;
 Image34->Visible=true;Image35->Visible=true; Image36->Visible=true;
 Image37->Visible=true;Image38->Visible=true; Image39->Visible=true;
 Image40->Visible=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pauza2Click(TObject *Sender)
{
timer_pilka->Enabled=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Start2Click(TObject *Sender)
{
  timer_pilka->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Szybciej1Click(TObject *Sender)
{
   if (x>=0 && y>=0) {x=x+1; y=y+1;}
else if (x>=0 && y<=0) {x=x+1; y=y-1;}
else if (x<=0 && y<=0) {x=x-1; y=y-1;}
else if (x<=0 && y>=0) {x=x-1; y=y+1;}     
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wolniej1Click(TObject *Sender)
{
  if (x>=0 && y>=0) {x=x-1; y=y-1;}
else if (x>=0 && y<=0) {x=x-1; y=y+1;}
else if (x<=0 && y<=0) {x=x+1; y=y+1;}
else if (x<=0 && y>=0) {x=x+1; y=y-1;}      
}
//---------------------------------------------------------------------------




void __fastcall TForm1::FormCreate(TObject *Sender)
{
timer_pilka->Enabled=false;
Button2->Visible=true;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
timer_pilka->Enabled=true;
Button2->Visible=false;
}
//---------------------------------------------------------------------------

