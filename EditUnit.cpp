//---------
#include <vcl.h>
#pragma hdrstop

#include "EditUnit.h&quo ;
#include "Bibl.cpp"
//---------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEditForm *EditForm;
//---------
__fastcall TEditForm::TEditForm(TComponent* Owner)
: TForm(Owner)
{
}
//---------
void __fastcall TEditForm::bCancelCli k(TObject *Sender)
{
EditForm->Close()
}
//---------
void __fastcall TEditForm::bOKClick(T bject *Sender)
{
HomeBibl b;
int len = 0;
len = strlen(eAvtor->Te t.c_str());
b.avtor = (char *) malloc((len) +1);
strcpy(b.avtor, eAvtor->Text.c_st ());

len = strlen(eBook->Text c_str());
b.name = (char *) malloc((len) +1);
strcpy(b.name, eBook->Text.c_str( );

b.year = StrToInt(eYear->T xt);

b.EditBook(StrToInt(E it1->Text));
EditForm->Close()

}
//---------