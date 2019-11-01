#include<iostream>
#include<conio.h>

using namespace std;

class Date
{
	private:
		char day[2],  month[2], year[4];
	public:
		Date(char, char, char);
		void show();

};

Date::Date(char _day,char _month, char _year)
{
    day[2] = _day[2];
    month[2] = _month[2];
    year[4] = _year[4];

};



void Date::show()
{
	cout<<"Ingrese el dia, mes y año en ese orden."<<endl;
	
	for(int i=0;i<2;i++){
		cout<<"Digite el dia."<<endl;
		cin>>day[i];
	}
	for(int j=0; j<2; j++){
		cout<<"Digite el mes."<<endl;
		cin>>month[j];
	}
	for(int p=0; p<4; p++){
		cout<<"Digite el anio."<<endl;
		cin>>year[p];
	}
	
	cout<<"La fecha de hoy es "<<day[2]<<"/"<<month[2]<<"/"<<year[4]<<endl;

 
}

int main(){

	Date today(char day, char month ,char year);
	today.show();
	
	getch();
	    return 0;
}
