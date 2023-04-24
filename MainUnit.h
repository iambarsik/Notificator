//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
                  
#include <vector>
#include "classes.h"



class TMainForm : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *sgEvents;
        TPanel *pAdd;
        TEdit *eText;
        TComboBox *cbDay;
        TComboBox *cbMonth;
        TComboBox *cbYear;
        TPanel *pExcel;
        TOpenDialog *OpenDialog1;
        TPopupMenu *PopupMenu1;
        TMenuItem *N6;
        void __fastcall pAddMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall pAddMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall pExcelMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall pExcelMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall N6Click(TObject *Sender);
        void __fastcall sgEventsDrawCell(TObject *Sender, int ACol,
          int ARow, TRect &Rect, TGridDrawState State);
private:	// User declarations
public:		// User declarations
        __fastcall TMainForm(TComponent* Owner);

        void refresh();

        std::vector<event_t> events;

        void save_data();
        void load_data();

};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
