#include <iostream>
#include <stdlib.h>
#include <time.h>

//programa que tenga menu 
//A) Matriz 3*6
//B) Matriz 4*2
//C) Matriz 8*4
//D) Matriz 6*6
//E) Salir.

using namespace std;

void menu();
void opciona();
void opcionb();
void opcionc();
void opciond();
char e;
	
int main(){

	do{
		menu();
	}while(e!='e');
	return 0;
}

void menu(){
	cout<<"a. Matriz de 3*6"<<endl;
	cout<<"b. Matriz 4*2"<<endl;
	cout<<"c. Matriz de 8*4"<<endl;
	cout<<"d. Matriz 6*6"<<endl;
	cout<<"e. Salir."<<endl;
	cin>>e;
	
	switch(e){
		case 'a': 
		opciona();
		break;
		case 'b': 
		opcionb();
		break;
		case 'c': 
		opcionc();
		break;
		case 'd': 
		opciond();
		break;
		case 'e': 
		cout<<"Gracias por utilizar el programa. :D"<<endl;
	cout<<"Programa creado por Miranda Ochoa Rendon"<<endl;
		break;
	}
}

//matriz de 3*6
void opciona(){
	int vec[3][6],num,j,m;
	srand(time(NULL));
	for(j=0;j<=2;j++){
		for(m=0;m<=5;m++){
			num=rand()/1000;
			vec[j][m]=num;
		}
	}
	for(j=0;j<=2;j++){
		for(m=0;m<=5;m++){
			cout<<vec[j][m]<<"\t";
		}
			cout<<"\n"<<endl;
	}
}

//matriz 4*2
void opcionb(){
	int vec[4][2],num,i,o;
	srand(time(NULL));
	for(i=0;i<=3;i++){
		for(o=0;o<=1;o++){
			num=rand()/1000;
			vec[i][o]=num;
		}
	}
	for(i=0;i<=3;i++){
		for(o=0;o<=1;o++){
			cout<<vec[i][o]<<"\t";
		}
			cout<<"\n"<<endl;
	}
}

//matriz 8*4
void opcionc(){
	int vec[8][4],num,l,n;
	srand(time(NULL));
	for(l=0;l<=7;l++){
		for(n=0;n<=3;n++){
			num=rand()/1000;
			vec[l][n]=num;
		}
	}
	for(l=0;l<=7;l++){
		for(n=0;n<=3;n++){
			cout<<vec[l][n]<<"\t";
		}
			cout<<"\n"<<endl;
	}
}

//matriz 6*6
void opciond(){
	int vec[6][6],num,k,h;
	srand(time(NULL));
	for(k=0;k<=5;k++){
		for(h=0;h<=5;h++){
			num=rand()/1000;
			vec[k][h]=num;
		}
	}
	for(k=0;k<=5;k++){
		for(h=0;h<=5;h++){
			cout<<vec[k][h]<<"\t";
		}
			cout<<"\n"<<endl;
	}
}
