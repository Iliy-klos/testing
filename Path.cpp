//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Path.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------

__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::PathClick(TObject *Sender)
{
WideString N = Edit1->Text;
AnsiString L = N;
std::string line;
std::fstream f(L.c_str());
Text->Text = "";
if (f.is_open()) {
	while (getline(f,line))
	{
		Text->Text = Text->Text + line.c_str() + "\n";
	}

	}
    	if (Text->Text == "") {
		ShowMessage("Chto-to wrong");
	}

	f.close();

}




void __fastcall TForm4::ReadOnlyClick(TObject *Sender)
{
Text->ReadOnly=!Text->ReadOnly;
}
//---------------------------------------------------------------------------


void __fastcall TForm4::SaveAsClick(TObject *Sender)
{
TStringList *list1 = new TStringList;
if(FileExists(Edit1->Text) == False){
String FullPath = Edit1->Text;
FileCreate(FullPath);
}
list1->Add(Text->Text);
list1->SaveToFile(Edit1->Text);
delete list1;
}
//---------------------------------------------------------------------------

