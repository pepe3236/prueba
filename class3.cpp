#include<iostream>
#include<conio.h>

using namespace std;

class Date
{
	private:
		int day,month, year;
	public:
		Date(int, int, int);
		void show();
		Date(long);

};
Date::Date(int _day, int _month, int _year)
{
    day = _day;
    month = _month;
    year = _year;

}

Date::Date(long date)
{
year = int(date/10000);
month = int((date-year*10000)100);
day = int(date-year*10000-month*10);

}


void Date::show()
{
cout<<"La fecha de hoy es "<<day<<"/"<<month<<"/"<<year<<endl;

}

int main(){

Date today(19,12,2019);
today.show();

Date today2(11102019);
today2.show;

getch();
    return 0;
}