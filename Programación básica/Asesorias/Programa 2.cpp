#include <iostream>

using namespace std;

int distancia,decametros,metros,centimetros;
void captura();
void calcular();
void imprimir();

int main(){
	captura();
	calcular();
	imprimir();
	
	return 0;
}


//Captura la distancia entre 2 ciudades en Kilometros.
void captura(){
	cout<<"Captura la distancia entre 2 ciudades en kilometros"<<endl;
	cout<<"Inserta la distancia de la ciudad 1 a la ciudad 2"<<endl;
	cin>>distancia;
}

//Calcule la distancia en decametros, metros y centimetros.
void calcular(){
	decametros=distancia*100;
	metros=distancia*1000;
	centimetros=distancia*10000;
}

//Imprimir la distancia en decametros, metros y centimetros.
void imprimir(){
	cout<<"La distancia en decametros de la ciudad 1 a la ciudad 2 es de: "<<decametros<<endl;
	cout<<"La distancia en metros de la ciudad 1 a la ciudad 2 es de: "<<metros<<endl;
	cout<<"La distancia en centrimetros de la ciudad 1 a la ciudad 2 es de: "<<centimetros<<endl;
	
	cout<<"Fin del programa";
}
