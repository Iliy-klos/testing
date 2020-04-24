//---------------------------------------------------------------------------

#ifndef PathH
#define PathH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TButton *Path;
	TEdit *Edit1;
	TRichEdit *Text;
	TCheckBox *ReadOnly;
	TButton *SaveAs;
	void __fastcall PathClick(TObject *Sender);
	void __fastcall ReadOnlyClick(TObject *Sender);
	void __fastcall SaveAsClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
