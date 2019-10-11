#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Rectangulo
{
	
	//Atributos
	private:
		
		float largo, ancho;
		
	//Metodos
	public:
		void perimetro();
		void area();
	
};

Rectangulo::Rectangulo(float opc_largo, float opc_ancho)
{
    largo = opc_largo;
    ancho = opc_ancho;
};

void Rectangulo::perimetro()
{
    float opc_perimetro;

    opc_perimetro = (2 * largo) + (2 * ancho);

    cout<<"El perimetro es"<<opc_perimetro<<endl;
};

void Rectangulo::area()
{
    float opc_area;

    opc_area = largo * ancho;

    cout<<"El area es: "<<opc_area<<endl;
};

int main()
{
//crear un objeto es igual a  = instanciar una clase//

//instanciar clase o crear objeto//
    Rectangulo rec(5, 6);

    //objeto mandando llamar el metodo de la clase//
	rec.perimetro();
    rec.area();
	

	getch();
	return 0;
}
