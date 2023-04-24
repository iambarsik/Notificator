//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "MainUnit.h"
#include "EventUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
bool bForm_big = false;

using namespace std;


  


//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
        : TForm(Owner)
{


        refresh();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::pAddMouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        event_t e;
        e.Text = eText->Text;
        e.Date = date_t(StrToInt(cbDay->Text),
                        cbMonth->ItemIndex + 1,
                        StrToInt(cbYear->Text));

        events.push_back(e);

        refresh();
        eText->Clear();

        FormEvents->refresh();

        pAdd->Color = clSkyBlue;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::pAddMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        pAdd->Color = clLime;
}
//---------------------------------------------------------------------------

void TMainForm::refresh()       {
        sgEvents->Refresh();
        sgEvents->Cells[0][0] = "Текст сообщения";
        sgEvents->Cells[1][0] = "Дата";

        sgEvents->RowCount = events.size() + 1;

        for(int i = 0; i < events.size(); i++)  {

                sgEvents->Cells[0][i+1] = events[i].Text;
                sgEvents->Cells[1][i+1] = events[i].Date.toString();
        }

        if(sgEvents->RowCount > 1)
                sgEvents->FixedRows = 1;

                
        TStringList * ls = new TStringList;
        for(int i = 0; i < events.size(); i++)  {
                ls->Add(events[i].Text + " " + events[i].Date.toString());
        }
        ls->SaveToFile("log_main.txt");
        delete ls;
}



void __fastcall TMainForm::pExcelMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        pExcel->Color = clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::pExcelMouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        pExcel->Color = clGreen;

        if(!OpenDialog1->Execute()) return;
        AnsiString file = OpenDialog1->FileName;

        Variant Excel=Variant::CreateObject("Excel.Application");
        Variant Book = Excel.OlePropertyGet(WideString("Workbooks")).OlePropertyGet(WideString("Open"),
                                            WideString(OpenDialog1->FileName));
        Variant Sheet = Book.OlePropertyGet("Worksheets", 1);

        
        for(int i = 1; i < 100; i++)    {
                AnsiString sName = Sheet.OlePropertyGet("Cells",i,1);
                if(sName.IsEmpty())
                        continue;

                event_t e;
                e.Text = Sheet.OlePropertyGet("Cells",i,1);
                AnsiString d = Sheet.OlePropertyGet("Cells",i,2);

                int day, month, year;
                int mode = 0;
                AnsiString buff = "";
                for(int c = 1; c <= d.Length(); c++)     {
                        switch (mode)   {
                                case 0:
                                        if(d[c] != '.') {
                                                buff += d[c];
                                        } else {
                                                //ShowMessage(buff);
                                                day = StrToInt(buff);
                                                mode = 1;
                                                buff = "";
                                        }
                                break;
                                case 1:
                                        if(d[c] != '.') {
                                                buff += d[c];
                                        } else {                   
                                                //ShowMessage(buff);
                                                month = StrToInt(buff);
                                                mode = 2; 
                                                buff = "";
                                        }
                                break;
                                case 2:
                                        buff += d[c];
                                        if(c == d.Length())     {
                                                //ShowMessage(buff);
                                                year = StrToInt(buff);
                                        }
                                break;
                        }

                }

                e.Date.day = day;
                e.Date.month = month;
                e.Date.year = year;

                events.push_back(e);

                //ShowMessage(IntToStr(day) + " " + IntToStr(month) + " " + IntToStr(year));
        }


        refresh();
        FormEvents->refresh();











}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N6Click(TObject *Sender)
{
        int pos = sgEvents->Row - 1;
        event_t *buff = &events[pos];

        if(buff != NULL)        {
                MainForm->events.erase(buff);
        }
        refresh();
        FormEvents->refresh();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::sgEventsDrawCell(TObject *Sender, int ACol,
      int ARow, TRect &Rect, TGridDrawState State)
{
/*
    if( ( ARow % 2 ) == 0 )
    {
        if( ARow == 0 ) {
                sgEvents->Canvas->Brush->Color = clBlue;
                sgEvents->Canvas->Font->Color = clWhite;
        } else {
                sgEvents->Canvas->Brush->Color = clGray;
                sgEvents->Canvas->Font->Color = clBlack;
        }
        sgEvents->Canvas->FillRect( Rect );
    }
*/
}
//---------------------------------------------------------------------------

void TMainForm::save_data()
{
//lijlkijlkj
}

void TMainForm::load_data()
{
//sfsdfdsf
}
