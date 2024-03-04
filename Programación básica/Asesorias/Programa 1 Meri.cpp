#include <iostream>
#include <stdlib.h>

using namespace std;
int op,v;

void imprimir1();
void imprimir2();
void imprimir3();
void imprimir4();

int main(){
	imprimir1();
	imprimir2();
	imprimir3();
	imprimir4();
	
	return 0;
}

void imprimir1(){
	cout<<"Imprimir los numeros del 1 al 50"<<endl;
	for(v=1;v<=50;v++){
		cout<<v<<endl;
	}
}

void imprimir2(){
	cout<<"Imprimir los numeros del 50 al 1"<<endl;
	for(v=49;v>=0;v=v-1){
		cout<<v<<endl;
	}
}

void imprimir3(){
	cout<<"Imprimir los numeros del 2 al 200 con aumentos de 2 en 2"<<endl;
	for(v=2;v<=200;v=v+2){
		cout<<v<<endl;
	}
}

void imprimir4(){
	cout<<"Imprimir los numeros del 5 al 500 con aumentos de 5 en 5"<<endl;
	for(v=5;v<=500;v=v+5){
		cout<<v<<endl;
	}
}
