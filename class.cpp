#include <iostream>
#include <conio.h>
#include <stdio>

using namespace std;

class Recatangulo()
{
	
	//Atributos
	private:
		
		float largo, ancho;
		
	//Metodos
	public:
		void perimetr();
		void area();
	
	
}

Rectangulo::Rectangulo(float opc_largo, float opc_ancho)
{
    largo = opc_largo;
    ancho = opc_ancho;
}

void Rectangulo::perimetro()
{
    float opc_perimetro;

    opc_perimetro = (2 * largo) + (2 * ancho);

    cout<<"El perimetro es"<<opc_perimetro<<endl;
}



int main(){
	
	
	
	getch();
	return 0;
    }