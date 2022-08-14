#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
using namespace std;



main()
{
    int longitud;
    string nombre;
    nombre= "Juan";
    cout<<nombre<<endl;

    nombre= nombre + "Ortiz";
    cout<<nombre<<endl;

    cout<<"Ingrese una cadema: ";

    getline(cin,nombre);
    cout<<nombre;

    longitud = nombre.size();
    cout<<"El numero de caracteres es: "<<longitud;

    cout<<nombre[0]<<endl;
    cout<<nombre[longitud-1];

    cout<<nombre.at(0); //primer elementod
    cout<<nombre.at(longitud-1);


}