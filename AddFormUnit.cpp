//---------
#include <vcl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#pragma hdrstop

#include "AddFormUnit.h&q ot;
#include "Bibl.cpp"
//---------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAddBookForm *AddBookForm;
//---------
__fastcall TAddBookForm::TAddBookFor (TComponent* Owner)
: TForm(Owner)
{
}
//---------
void __fastcall TAddBookForm::bCancelCl ck(TObject *Sender)
{
AddBookForm->Close( ;
}
//---------
void __fastcall TAddBookForm::bOKClick( Object *Sender)
{
HomeBibl book;
char *s;
//avtor
s = (char *) malloc((strlen(eAvtor- gt;Text.c_str())) +1);
strcpy(s, eAvtor->Text.c_st ());
book.avtor = s;
//name
s = (char *) malloc((strlen(eBook-&g ;Text.c_str())) +1);
strcpy(s, eBook->Text.c_str( );
book.name = s;
//year
s = (char *) malloc((strlen(eYear-& t;Text.c_str())) +1);
strcpy(s, eYear->Text.c_str ));
book.year = atoi(s);

if (book.year == 0)
ShowMessage("??? ??????? ?????? ???????!");
else
{book.AddBook();ShowMes age("?????? ??????? ?????????!");}

if (book.year != 0) {
AddBookForm->Close( ;
eAvtor->Text = "";
eBook->Text = "";
eYear->Text = "";
}

}
//---------
