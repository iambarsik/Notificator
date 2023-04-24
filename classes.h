#ifndef CLASSES_H
#define CLASSES_H
struct date_t   {
        int day;
        int month;
        int year;
        date_t() {}
        date_t(int d, int m, int y)     {
                day = d;
                month = m;
                year = y;
        }
        AnsiString toString()   {
                AnsiString result;
                AnsiString d, m, y;
                if(day < 10) d = "0" + IntToStr(day); else d = day;
                if(month < 10) m = "0" + IntToStr(month); else m = month;
                result = d + "." + m + "." + IntToStr(year);
                return result;
        }
};
             /*
struct time_t   {
        int hour;
        int min;
        int sec;
        time_t() {}
        time_t(int h, int m, int s)     {
                hour = h;
                min = m;
                sec = s;
        }
};
     */
struct event_t  {
        event_t() {}
        AnsiString Text;
        date_t Date;

        bool operator == (const event_t & ev)       {

                if(Text == ev.Text &&
                Date.day == ev.Date.day &&
                Date.month == ev.Date.month &&
                Date.year == ev.Date.year)
                {
                        return true;
                } else {
                        return false;
                }
        }
};
#endif
