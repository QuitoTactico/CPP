#include <iostream>

using namespace std;

int edad;
void captura();
void imprimir();

int main(){
	captura();
	imprimir();
	
	return 0;
}

void captura(){
	cout<<"Ingresa tu edad"<<endl;
	cin>>edad;
}

void imprimir(){
	if(edad<=12 && edad>=6)
	cout<<"Usted esta en primaria"<<endl;

	
    if(edad<=15 && edad>=13)
	cout<<"Usted esta en secundaria"<<endl;

}
