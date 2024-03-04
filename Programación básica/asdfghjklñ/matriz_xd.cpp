#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
//matriz de 7*5

void matriz();
void promedio();
void mayores();
void menores();
int vec[7][5],j,m,num;

int main(){
	
	matriz();
	promedio();
	mayores();
	menores();
	
	return 0;
}

void matriz(){

	srand(time(NULL));
	for (j=0;j<=6;j++){
		for(m=0;m<=4;m++){
			num=rand()/100;
			vec[j][m]=num;
		}
	}
	for(j=0;j<=6;j++){
		for(m=0;m<=4;m++){
			cout<<vec[j][m]<<"\t";
		}
		cout<<"\n"<<endl;
	}
}

void promedio(){
	int promedio,suma;
	for(j=0;j<6;j++){
		suma=0;
		for(m=0;m<4;m++)
		suma=suma+vec[j][m];
		promedio=suma/m;
		cout<<"Promedio columna "<<j<<" = "<<promedio<<endl;
	}
}

void mayores(){
	//texto
}

void menores(){
	//texto ajsjsdjs
}
