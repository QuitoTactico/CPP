#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int vec[3][6];
using namespace std;
//Programa queimprima matriz de 6 * 3 y 3 * 6.

void numaleatorios();
void matrizuno();
void matrizdos();

int main(){

	numaleatorios();
	matrizuno();
	matrizdos();
	
	return 0;
}

void numaleatorios(){
	int num,j,m;
	srand(time(NULL));
	for(j=0;j<=2;j++){
		for(m=0;m<=5;m++){
		num=rand()/1000;
		vec[j][m]=num; }
	}	
}

void matrizuno(){
	int j,m;
	for(j=0;j<=4;j++){
		for(m=0;m<=2;m++){
			cout<<vec[m][j]<<"\t";
		}
		cout<<"\n"<<endl;
	}
}

void matrizdos(){
	int j,m;
	for(j=0;j<=2;j++){
		for(m=0;m<=5;m++){
			cout<<vec[j][m]<<"\t";
		}
		cout<<"\n"<<endl;
	}
}

