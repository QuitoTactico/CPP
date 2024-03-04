#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void menu();
void circulo();
void cuadrado();
void cilindro();
void triangulo();
void cubo();
void rectangulo();
int op;
int main (){
	do{
		menu();
	}while(op!=7);
	return 0;
	}
	
	void menu (){
	cout<<"1. Area circulo"<<endl;
	cout<<"2. Area cuadrado"<<endl;
	cout<<"3. volumen cilindro"<<endl;
	cout<<"4. Area triangulo"<<endl;
	cout<<"5. volumen cubo"<<endl;
	cout<<"6. Area rectangulo"<<endl;
	cout<<"7. Salir"<<endl;
	cin>>op;
	cout<<"Programa creado por Miranda Ochoa Rendon (en conjunto al grupo 312 informatica)."<<endl;

	switch (op){
		case 1: circulo();
		break;
		case 2: cuadrado();
		break;
		case 3: cilindro();
		break;
		case 4: triangulo();
		break;
		case 5: cubo();
		break;
		case 6: rectangulo();
		break;
		case 7:
			cout<<"Salir"<<endl;
			break;
		default: cout<<"Opcion no valida"<<endl;
	
	}
	getch();
	system("cls");
	}
	void circulo (){
		float areaci,perici,radci;
		cout<<"Ingresa el radio del circulo"<<endl;
		cin>>radci;
		areaci=3.1416*(radci*radci);
		perici=2*3.1416*radci;
		cout<<"El area del circulo es: "<<areaci<<endl;
	}
	
	void cuadrado(){
		float areacua,pericua,ladocuad;
		cout<<"Ingresa el largo del cuadrado"<<endl;
		cin>>ladocuad;
		pericua=ladocuad*4;
		areacua=ladocuad*ladocuad;
		cout<<"El area del cuadrado es: "<<areacua<<endl;
	}
	
	void cilindro (){
		float radio,altura,volumen;
		cout<<"Ingresa el radio del cilindro"<<endl;
		cin>>radio;
		cout<<"Ingresa la altura del cilindro"<<endl;
		cin>>altura;
		volumen=3.1416*(radio*radio)*altura;
		cout<<"El volumen total es de: "<<volumen<<endl;
	}
	
	void triangulo(){
		float base,area,altura,perimetro,areatotal,lado1,lado2;
		cout<<"Ingresa la base del triangulo"<<endl;
		cin>>base;
		cout<<"Ingresa la altura"<<endl;
		cin>>altura;
		cout<<"Ingresa el lado 1"<<endl;
		cin>>lado1;
		cout<<"Ingresa el lado 2"<<endl;
		cin>>lado2;
		areatotal=base*altura/2;
		perimetro=base+lado1+lado2;
		cout<<"El area del triangulo es: "<<areatotal<<endl;
		cout<<"El perimetro es: "<<perimetro<<endl;
	}
	
	void cubo(){
		float lado, volumen;
		cout<<"Ingresa un lado del cubo"<<endl;
		cin>>lado;
		volumen=lado*lado*lado;
		cout<<"El volumen del cubo es: "<<volumen<<endl;
	}
	
	void rectangulo(){
		float base,altura,area,perimetro;
		cout<<"Ingresa la base"<<endl;
		cin>>base;
		cout<<"ingresa la altura del rectangulo"<<endl;
		cin>>altura;
		area=base*altura;
		perimetro= (base*2)+(altura*2);
		cout<<"El area del rectangulo es: "<<area<<endl;
		cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;
	}
