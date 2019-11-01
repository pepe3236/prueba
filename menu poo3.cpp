#include<iostream>
#include<conio.h>

using namespace std;

class menu
{
	private:
		
		int dato;
		
	
	public:
		menu(int);
		void mostrarMenu();
		void agregar();
		void eliminar();
		void cambiar();
		void mostrar();
	
};


void menu::mostrarMenu()
{
	int num;
	cout<<"Seleccione un elemento."<<endl;
	cout<<"1. Agregar.\t 2. eliminar.\t 3. cambiar.\t 4. mostrar."<<endl;
	cin>> num;
	
	switch(num){
		
		case 1: void agregar(); break;
		case 2: void eliminar(); break;
		case 3: void cambiar(); break;
		case 4: void mostrar(); break;
		
		
	}
	
	
}




int main()
{
	
	menu a(1);
	a.mostrarMenu();
	
	
	getch();
	return 0;
}
