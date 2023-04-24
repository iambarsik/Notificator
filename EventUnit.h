//---------------------------------------------------------------------------

#ifndef EventUnitH
#define EventUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Menus.hpp>

#include <vector>    
#include "classes.h"


//---------------------------------------------------------------------------
class TFormEvents : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *sgEvents;
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TTimer *Timer1;
        TPopupMenu *PopupMenu1;
        TMenuItem *N6;
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall N6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFormEvents(TComponent* Owner);

        void refresh();

        std::vector<event_t> events;
};
//---------------------------------------------------------------------------
extern PACKAGE TFormEvents *FormEvents;
//---------------------------------------------------------------------------
#endif
