#include<iostream>
#include<conio.h>

using namespace std;

class time{
	private:
	
	int hours, minutes, seconds;	
		
	public:
		time(int, int, int);
		time(int);
		void showTime();
	
};

time::time(int _hours, int _minutes, int _seconds){
	
	hours = _hours;
	minutes = _minutes;
	seconds = _seconds;
	
}

time::time(int _timesec){
	
	hours = _timesec/3600;
	_timesec %= 3600;
	minutes = _timesec/60; 
	seconds = _timesec % 60;
	
}

void time::showTime(){
	cout<<"La hora es: "<<hours<<":"<<minutes<<","<<seconds<<endl;
}


int main(){
	
	time a(07,37,30);
	a.showTime();
	
	time b(27000);
	b.showTime();
	
	getch();
	return 0;
}
