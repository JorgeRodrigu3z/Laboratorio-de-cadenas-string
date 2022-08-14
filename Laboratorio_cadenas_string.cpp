#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

void numericosstring(string &ca){
int ncaracteres=ca.size();
int numero=stoi(ca);
if (ncaracteres%numero==0){
    cout<<"El numero de caracteres: "<<ncaracteres<<" es divisible para: "<<numero<<"\n";
}
else{
cout<<"El numero de caracteres: "<<ncaracteres<<" no es divisible para: "<<numero<<"\n";
}
}



void alfabeticosstring(string &cad){
for (int i = 0; i < cad.length(); i++){
     if (i==0){
     cad[0]=toupper(cad[0]);
     cout<<cad[0];
     }
    if (isblank(cad[i])){
    cout<<" ";
    cad[i+1]=toupper(cad[i+1]);
    cout<<cad[i+1];
    }
    else{
    cout<<cad[i+1];
    }
}

}


void alfanumerico(string &cade){
int a=0, b=0;
for (int i = 0; i < cade.size(); i++){
    if (!isdigit(cade[i])){
    cout<<"Alfabetico: "<<cade[i]<<"\n";
    a++;
    }
    else{
    cout<<"numerico: "<<cade[i]<<"\n";
    b++;
    }
}

cout<<"Hay "<<a<<" caracteres alfabeticos \n";
cout<<"Hay "<<b<<" caracteres numericos \n";

}

main(){
string  caden;
int a=0, b=0, c=0;
cout<<"Ingrese una cadena: ";
getline (cin,caden);
cout<<"La cadena ingresada es: "<<caden<<"\n";


}