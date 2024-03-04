#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
using namespace std;
void imprimir();
void calcular();
float promnamber1,promnamber2,acum,acum1;
int vec[20],vec1[20],vec2[20];



int main (){
    system("Color B5");
    int num,j;
    srand (time(NULL));
    for (j=0;j<=29;j++){
        num=rand()/100;
        vec[j]=num;
        
    }
    imprimir();
    return 0;
}




void imprimir(){
    int j;
    for (j=0; j<=29;j++){
            if (vec[j]<=199){
                acum=acum+vec[j];
                promnamber1=acum/30;
        cout<<"Estos son todos los numeros menores a 200: "<<vec[j]<<endl;}
        
}
getch();
system ("cls");
    for (j=0; j<=29;j++){
    if (vec[j]>=200){
                acum1=acum1+vec[j];
                promnamber2=acum1/30;
        cout<<"Estos son todos los numeros mayores a 200: "<<vec[j]<<endl;
}
}
getch();
system ("cls");
cout<<"El promedio de los vectores menores a 200 es "<<promnamber1<<endl;
cout<<"El promedio de los vectores mayores a 200 es "<<promnamber2<<endl;

cout<<"Programa creado por Miranda Ochoa Rendon.";
}
