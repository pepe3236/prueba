#include<iostream>
#include<conio.h>

using namespace std;

class Person
{

private:
    int age;
    string name; 

public:

    Person(int, string);
    void read();
    void eat();
    void run();
};

Person::Person(int _age, string _name)
{
age = _age;
name = _name;

}

void Person::read()
{
cout<<"Hola soy " <<name<<" y estoyleyendo y tengo "<<age<<" años"<<endl;

}

void Person::eat()
{
    cout<<"Mi nombre es "<<name<<" me gusta comer sushi"<<endl;

}
void Person::run()
{
cout<<"Mis amigos e dicen"<<name<<" y corro un maraton de 10 Km"<<endl;

}

int main(){

Person a = Person(22,"Jose");
a.read();
a.eat();
a.run();


getch();
    return 0;
}