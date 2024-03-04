#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void triangulo();
void cuadrado();
void circulo();
void rectangulo();
void cilindro();
void cubo();
void menu();

int op;
int main()
{
	menu();
	triangulo();
	cuadrado();
	circulo();
	rectangulo();
	cubo();

	
	do
	{
		menu();
	}
	while(op!=7);
	return 0;
}

void menu()
{
	cout<<"1.Triangulo"<<endl;
	cout<<"2.Circulo"<<endl;
	cout<<"3.Cuadrado"<<endl;
	cout<<"4.Rectangulo"<<endl;
	cout<<"5.Cilindro"<<endl;
	cout<<"6.Cubo"<<endl;
	cout<<"7.Salir"<<endl;
	cin>>op;
	cout<<"Elija una opcion"<<endl;
	
	switch (op)
	{
		case 1: triangulo();
		break;
		
		case 2: circulo();
		break;
		
		case 3: cuadrado();
		break;
		
		case 4: rectangulo();
		break;
		
		case 5: cilindro();
		break;
		
		case 6: cubo();
		break;
		
		case 7: cout<<"Gracias por utilizar el programa"<<endl;
		break;
		
		default: cout<<"when haces tus momos en programacion";
	}
	system ("cls");
}

void triangulo()
{
	float base,altura,perimetro,atotal,l1,l2;
	
	cout<<"Ingresa la base del triangulo"<<endl;
	cin>>base;
	
	cout<<"Ingresa la altura del triangulo"<<endl;
	cin>>altura;
	
	cout<<"Ingrese el primer lado"<<endl;
	cin>>l1;
	cout<<"Ingrese el segundo lado"<<endl;
	cin>>l2;
	
	perimetro=base+l1+l2;
	atotal=base*altura;
	
	cout<<"El area del triangulo es "<<atotal<<endl;
	cout<<"El perimetro del triangulo es "<<perimetro<<endl;
	
	system ("cls");
}

void circulo()
{
	float area,perimetro,radio;
	
	cout<<"Ingresa radio del circulo"<<endl;
	cin>>radio;
	
	area=3.1416*radio;
	perimetro=2*3.1416*radio;
	
	cout<<"El area del circulo es "<<area<<endl;
	cout<<"El perimetro del circulo es "<<perimetro<<endl;
	
	system ("cls");
}

void cuadrado()
{
	float area,peri,cuadrado;
	
	cout<<"Ingresa la medida de los lados del cuadrado"<<endl;
	cin>>cuadrado;
	
	area=cuadrado*cuadrado;
	peri=cuadrado*4;
	
	cout<<"El area del cuadrado es "<<area<<endl;
	cout<<"El perimetro del cuadrado es "<<peri<<endl;
	
	system ("cls");
}

void rectangulo()
{
	//rectangulo
}

void cilindro()
{
	//cilindro
}
void cubo()
{
	//cubo
}
