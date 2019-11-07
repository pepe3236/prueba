#include<iostream>
#include<conio.h>

using namespace std;

class carro
{
	private:
	string modelo, marca;
	
	public:
			carro();
			void setCarroMarca(string, string);
			string getCarroModelo();
			string getCarroMarca();
	
};

carro::carro(){
	
}

void carro::setCarroMarca(string _modelo, string _marca)
{
	modelo = _modelo;
	marca = _marca;
}

string carro::getCarroMarca()
{
	return marca;
}

string carro::getCarroModelo()
{
	return modelo;
}


int main(){
	
	carro a;
	
	a.setCarroMarca("versa","nissan");
	cout<<"El modelo es: "<<a.getCarroModelo()<<" y la marca es: "<<a.getCarroMarca()<<endl;

	
	getch();
	return 0;
}
