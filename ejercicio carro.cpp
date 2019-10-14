#include<iostream>
#include<conio.h>

using namespace std;

class Car
{
   private:
        int giro;
        float distancia;
        int velocidad;


    public:

    Car(int, float, int);
    void vuelta();
    void recorrido();
    void aceleracion();
};

Car::Car(int _giro, float _distancia, int _velocidad)
{
    giro = _giro;
    distancia = _distancia;
    velocidad = _velocidad;


}


void Car::vuelta()
{
    if(giro<=0)
    {
        cout<<"El auto da vuelta a la derecha"<<giro<<" grados"<<endl;
    }
    else
    {
        cout<<"El auto da vuelta a la izquierda"<<endl;
    }

}

void Car::recorrido()
{
    if(distancia>=1){
        cout<< "El auto recorre "<<distancia<<"Km"<<endl;
    }
    else{
        cout<<"El auto esta parado"<<endl;
    }

}

void Car::aceleracion()
{
if(distancia>=1){
        cout<< "El auto acelera a "<<velocidad<<"Km/h"<<endl;
    }
    else{
        cout<<"El auto no avanzo nada"<<endl;
    }
}



int main(){

Car a(36,2,6);
a.vuelta();

Car b(36,2,6);
b.recorrido();

Car c(36,2,6);
c.aceleracion();


    getch();
    return 0;
}
