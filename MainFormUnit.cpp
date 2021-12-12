//---------
#include <vcl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#pragma hdrstop

#include "MainFormUnit.h quot;
#include "ProgInfUnit.h& uot;
#include "AddFormUnit.h&q ot;
#include "Bibl.cpp"
#include "SearchUnit.h&q ot;
#include "EditUnit.h&quo ;
//---------
#pragma package(smart_init)
#pragma resource "*.dfm"

TMainForm *MainForm;

//---------
__fastcall TMainForm::TMainForm(TComponent* Owner)
: TForm(Owner){

}
//---------
void __fastcall TMainForm::bExitClick TObject *Sender){
MainForm->Close()
}
//---------
void __fastcall TMainForm::bProgInfCl ck(TObject *Sender)
{
InfForm->Show();
}
//---------

void __fastcall TMainForm::bSortOkCli k(TObject *Sender)
{
char *s1, *s2, *t1, *t2, *t3;
int l1,l2;
//?????????? ?? ????? ??????
if (rbAvtor->Checked {
if (rbHigh->Checked) ob->SortBooks(1, true); else ob->SortBooks(1, false);
}
else
if (rbName->Checked) {
//?????????? ?? ????????