#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
using namespace std;

void cambiar_string(string nom)
{
    cout<<"ingrese el reemplazo: ";
    getline(cin,nom);
}  


string extrae(string nomb)
{
    int pi, nc;
    string subcadena;
    cout<<"pos inicial: ";

    cin>>pi;

    cout<<"numeo de caracteres: ";
    cin>>nc;


    subcadena=nomb.substr(pi,nc);

    return subcadena;


}

main()
{
    string nombre,nomx;
    cout<<"Ingre una cadena: ";
    getline(cin,nombre);
    cout<<"la cadena ingresada es: "<<nombre<<endl;

    cambiar_string(nombre);
    cout<<"La cadena unificada es: "<<nombre<<endl;

    nomx= extrae(nombre);
    cout<<"la cadena modificada es: "<<nombre<<endl;
    cout<<"la subcadena extraida es: "<<nomx<<endl;
}
