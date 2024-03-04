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
	
	if(edad<=5 && edad>=3)
	cout<<"Usted esta en Kinder"<<endl;
	
    if(edad<=12 && edad>=6)
	cout<<"Usted esta en Primaria"<<endl;
	
	if(edad<=15 && edad>=13)
	cout<<"Usted esta en Secundaria"<<endl;
	
	if(edad<=18 && edad>=16)
	cout<<"Usted esta en Preparatoria"<<endl;
	
	if(edad<=23 && edad>=19)
	cout<<"Usted esta en Universidad"<<endl;

}
