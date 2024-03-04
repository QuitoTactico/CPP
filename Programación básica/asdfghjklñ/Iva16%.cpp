#include <iostream>
using namespace std;
float p1,p2,p3,iva,pf,pfe;

int main ()
{
	cout<<"Ingrese precio del primer producto"<<endl;
	cin>>p1;
	cout<<"Ingrese precio del segundo producto"<<endl;
	cin>>p2;
	cout<<"Ingrese precio del tercer producto"<<endl;
	cin>>p3;
	pfe=p1+p2+p3;
	iva=pfe*.016;
	pf=pfe+iva;
	cout<<"El total de la compra es "<<pfe<<endl;
	cout<<"El total de iva es "<<iva<<endl;
	cout<<"El total a pagar es de "<<pf<<endl;

}
