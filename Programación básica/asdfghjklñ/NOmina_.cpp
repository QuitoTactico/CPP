#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void albanil();
void ayudante();
void yesero();
void pintor();
void nomina();

float alb,ayu,yes,pin,ptalb,ptayu,ptyes,ptpin,total;

int main()
{
	albanil();
    ayudante();
    yesero();
    pintor();
    nomina();
}
void albanil(){

	cout<<"Ingrese los metros que trabajo el Albanil"<<endl;
	cin>>alb;
	ptalb=100 * alb;
}
void ayudante (){
	
	
	cout<<"Ingrese los metros que trabajo el Ayudante"<<endl;
	cin>>ayu;
	ptayu=45 * ayu;
}
	void yesero (){
	
	cout<<"Iingrese los metros que trabajo el Yesero"<<endl;
	cin>>yes;
		ptyes=125 * yes;
	}
	
	void pintor(){
	
	cout<<"Ingrese los metros que trabajo el Pintor"<<endl;
	cin>>pin;
	ptpin=85 * pin;
}
	void nomina(){
	cout<<"Nomina semanal CONSTRUCTORA PEPE"<<endl;
	cout<<"Trabajador"<<"     "<<"Mt2"<<"   		"<<"Precio "<<"    	"<<"Pago"<<endl;
	total= ptalb + ptayu + ptyes + ptpin;
	cout<<"Albanil"<<"		"<<alb<<"		"<<"$100"<<"		"<<"$"<<ptalb<<endl;
	cout<<"Ayudante"<<"	"<<ayu<<"		"<<"$45"<<"		"<<"$"<<ptayu<<endl;
	cout<<"Yesero"<<"		"<<yes<<"		"<<"$125"<<"		"<<"$"<<ptyes<<endl;
	cout<<"Pintor"<<"		"<<pin<<"		"<<"$85"<<"		"<<"$"<<ptpin<<endl;
	cout<<""<<endl;
	cout<<"Nomina total"<<" "<<"$"<<total;
}


