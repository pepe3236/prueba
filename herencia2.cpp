#include<iostream>
#include<conio.h>

using namespace std;

class Persona{
	
	protected:
		string nombre;
		int edad;
		
	public:
		Persona(string, int);
		void mostrarPersona();
	
	
};

class Registro : public Persona{
	private:
		string NoMatricula;
		int calificacion;
		
	public:
		Registro(string, int, string, int);
		void MostrarRegistro();
		void MostrarTodo();
};

Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

Registro::Registro(string _nombre, int _edad, string _NoMatricula, int _calificacion ) : Persona(_nombre, _edad){
	NoMatricula = _NoMatricula;
	calificacion = _calificacion;
}

void Persona::mostrarPersona(){
	cout<<"Nombre de la persona."<<nombre<<endl;
	
	
	cout<<"Edad de la persona."<<edad<<endl;
	
}

void Registro::MostrarRegistro(){
	cout<<"Numero de matricula."<<NoMatricula<<endl;
	
	
	cout<<"Calificacion. "<<calificacion<<endl;
	
}

void Registro::MostrarTodo(){
	cout<<"Los elementos del alumno son. "<<endl;
	cout<<nombre<<endl;
	cout<<edad<<endl;
	cout<<NoMatricula<<endl;
	cout<<calificacion<<endl;
	
}

int main(){
	
	Registro A1("Alejandro",20,"656564",12);
	
	A1.mostrarPersona();
	A1.MostrarRegistro();
	A1.MostrarTodo();
	
	getch();
	return 0;
}
