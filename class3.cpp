#include<iostream>
#include<conio.h>

using namespace std;

class Date
{
Private:

int day,mont, year;

Public:
date(int, int, int);
void show();

};

Date::Date(int _day int _month, int _year)
{
    day = _day;
    month = _month;
    year = _year;

}

void Date::Show()
{
cout<<"La fecha de hoy es "<<_day<<_month<<_year<<endl;

}

int main(){

Date today(19,12,2019);
today.show();

getch();
    return 0;
}