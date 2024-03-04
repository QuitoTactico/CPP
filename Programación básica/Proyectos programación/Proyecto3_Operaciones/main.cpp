#include <iostream>
using namespace std;
void captura();
void calculo();
void imprimir();
float n1,n2,s,r,m,d;
int main() {
	captura ();
	calculo ();
	imprimir();
	
	return 0;
}
void captura()
{
	cout<<"ingresa el primer numero"<<endl;
	cin>>n1;
	cout<<"ingresa el segundo numero"<<endl;
	cin>>n2;
}
void calculo()
{
	s=n2+n1;
	r=n2-n1;
	m=n2*n1;
	d=n2/n1;
}
void imprimir()
{
	cout<<"el resultado de suma es "<<s<<endl;
	cout<<"el resultado de la resta es "<<r<<endl;
	cout<<"el resultado de la multiplicacion es "<<m<<endl;
	cout<<"el resultado de la division es "<<d<<endl;
	
	cout<<"Programa creado por Miranda Ochoa Rendon."<<endl;
}
