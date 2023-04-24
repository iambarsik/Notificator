//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EventUnit.h" 
#include "MainUnit.h"

#include <time.h>


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormEvents *FormEvents;
//---------------------------------------------------------------------------
__fastcall TFormEvents::TFormEvents(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormEvents::N5Click(TObject *Sender)
{
        this->Close();

}
//---------------------------------------------------------------------------
void __fastcall TFormEvents::N2Click(TObject *Sender)
{
        MainForm->Show();
}
//---------------------------------------------------------------------------

void  TFormEvents::refresh()    {

        events.clear();
                                        
        TDateTime currentDate = Date();
        unsigned short day;
        unsigned short month;
        unsigned short year;
        currentDate.DecodeDate(&year,&month,&day);

        for(int i = 0; i < MainForm->events.size(); i++)  {

                if(MainForm->events[i].Date.day == day &&
                   MainForm->events[i].Date.month == month &&
                   MainForm->events[i].Date.year == year)
                {
                        events.push_back(MainForm->events[i]);
                }
        }

        sgEvents->Refresh();

        sgEvents->RowCount = 1;

        sgEvents->Cells[0][0] = "Текст сообщения";
        sgEvents->Cells[1][0] = "Дата";


        for(int i = 0; i < events.size(); i++)  {
                sgEvents->RowCount++;
                sgEvents->Cells[0][sgEvents->RowCount - 1] = events[i].Text;
                sgEvents->Cells[1][sgEvents->RowCount - 1] = events[i].Date.toString();
        }

        if(sgEvents->RowCount > 1)
                sgEvents->FixedRows = 1;
        MainForm->refresh();

        TStringList * ls = new TStringList;
        for(int i = 0; i < events.size(); i++)  {
                ls->Add(events[i].Text + " " + events[i].Date.toString());
        }
        ls->SaveToFile("log_events.txt");
        delete ls;

}
void __fastcall TFormEvents::Timer1Timer(TObject *Sender)
{
        refresh();
}
//---------------------------------------------------------------------------
void __fastcall TFormEvents::FormShow(TObject *Sender)
{
        refresh();        
}
//---------------------------------------------------------------------------

void __fastcall TFormEvents::N6Click(TObject *Sender)
{
        int pos = sgEvents->Row - 1;
        event_t e = events[pos];
        event_t *buff;

        for(int i = 0; i < MainForm->events.size(); i++)        {
                if(e == MainForm->events[i])    {
                      buff = &MainForm->events[i];
                }
        }

        if(buff != NULL)        {
                MainForm->events.erase(buff);
        }
        refresh();
}
//---------------------------------------------------------------------------

