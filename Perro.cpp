#include<iostream>
#include<conio.h>

using namespace std;

class dog
{
	private:
		
		string name, brad;
		
		public:
	
		dog(string, string);
		~dog();
		void showData();
		void play();
	
};

dog::dog(string _name, string _brad)
{
	
	name = _name;
	brad = _brad;
		
}

dog::~dog()
{
	
}

void dog::showData()
{
	
	cout<<"Nombre: "<<name<<endl;
	cout<<"Raza: "<<brad<<endl;
	
}

void dog::play()
{
	cout<<"El perro "<<name<<" esta jugando."<<endl;
}

int main(){
	
	dog dog1("Copper", "Boxer");
	
	dog1.showData();
	dog1.play();
	dog1.~dog();
	
	getch();
	return 0;
}
