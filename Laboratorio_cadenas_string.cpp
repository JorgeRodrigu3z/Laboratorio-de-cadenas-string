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


}


void alfanumerico(string &cade){


}

main(){


    
}