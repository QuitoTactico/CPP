#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
//Calcular area y perimetro de las siguientes figuras.
//1.triangulo
//2.rectangulo
//3.cuadrado
//4.cilindro
//5.circulo
void area();
void perimetro();
void calculo();
void imprimir();

	float baset,tri1,tri2,tri3,alt,rectlargo,rancho,cubo,cil1,cil2,r,di,atriangulo,arectangulo,acubo,ptriangulo,prectangulo,pcubo,pcilindro,acilindro,acirculo,pcirculo;

int main(){
	
	area();
	perimetro();
	calculo();
	imprimir();
	
	return 0;
}

void area()
{
	cout<<"Ingrese base del triangulo"<<endl;
	cin>>baset;
	cout<<"Ingrese altura del triangulo"<<endl;
	cin>>alt;

	getch();
    system("cls");
	
	cout<<"Ingrese largo del rectangulo"<<endl;
	cin>>rectlargo;
	cout<<"Ingrese ancho del triangulo"<<endl;
	cin>>rancho;
	getch();
    system("cls");


	
	cout<<"Ingrese el tamano de los lados del cuadrado"<<endl;
	cin>>cubo;
	getch();
    system("cls");
	

    cout<<"escribe el radio del circulo"<<endl;
    cin>>r;
	cout<<"escribe el diametro del circulo"<<endl;
	cin>>di;
	getch();
	system("cls");
	
	cout<<"Escribe la medida primero de la area de la base y luego  de la altura del cilindro "<<endl;
	cin>>cil1>>cil2;
	getch();
	system("cls");
	
	
}

void calculo()
{
	atriangulo=baset*alt;
	ptriangulo=tri1+tri2+tri3;
	
	arectangulo=rectlargo*rancho;
	prectangulo=rectlargo*2+rancho*2;
	
	acubo=cubo*4;
	pcubo=cubo*4;
	
	acirculo=r*r;
	pcirculo=3.1416*di;
	
	acilindro=cil1*cil2;


}

void imprimir()
{
	cout<<"El area de el triangulo es "<<atriangulo<<endl;
	cout<<"El perimetro de el triangulo es"<<ptriangulo<<endl;
	getch();
	system("cls");
	
	cout<<"El area del rectangulo es "<<arectangulo<<endl;
	cout<<"El perimetro del rectangulo es "<<prectangulo<<endl;
	getch();
	system("cls");
	
	cout<<"El area del cuadrado es "<<acubo<<endl;
	cout<<"El perimetro del cuadrado es "<<pcubo<<endl;
	getch();
	system("cls");
	
	cout<<"El area del circulo es "<<acirculo<<endl;
	cout<<"El perimetro del circulo es "<<pcirculo<<endl;
	
	cout<<"El area del cilindro es "<<acilindro<<endl;
	cout<<"El perimetro del cilindro es "<<pcilindro<<endl;
	getch();
	system("cls");
	
}

