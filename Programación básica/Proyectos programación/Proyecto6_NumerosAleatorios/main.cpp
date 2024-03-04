#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

using namespace std;

void imprimirvector();
void generarnumeros();
void guardardatos();

int vec[30];
int main(){
	
	int num,j;
	srand(time(NULL));
	for(j=0;j<=29;j++)
	{
		num=rand()/100;
		vec[j]=num;
	}
	imprimirvector();
	return 0;
}
void imprimirvector(){
	
	int j;
	
	
	for(j=0;j<=29;j++)
	{
		cout<<"el valor del vector   "<<j<<"  es "<<vec[j]<<endl;
	}
	cout<<"Programa creado por Miranda Ochoa Rendon. \(^_^)/";
}
