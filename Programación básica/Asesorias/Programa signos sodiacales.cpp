#include <iostream>

using namespace std;

string mes;
int dia,mesnum;

void captura();
void convertir();
void imprimir();

int main(){
	
	captura();
	convertir();
	imprimir();
	
	return 0;
}

void captura(){
	
	cout<<"Programa signos del sodiaco"<<endl;
	
	cout<<"Captura tu mes de nacimiento"<<endl;
	cin>>mes;
	cout<<"Captura tu dia de nacimiento"<<endl;
	cin>>dia;
}

void convertir(){
	
	if(mes=="enero" or mes=="Enero" or mes=="ENERO")
	mesnum=1;
	
	if(mes=="febrero" or mes=="Febrero" or mes=="FEBRERO")
	mesnum=2;
	
	if(mes=="marzo" or mes=="Marzo" or mes=="MARZO")
	mesnum=3;
	
	if(mes=="abril" or mes=="Abril" or mes=="ABRIL")
	mesnum=4;
	
	if(mes=="mayo" or mes=="Mayo" or mes=="MAYO")
	mesnum=5;
	
	if(mes=="junio" or mes=="Junio" or mes=="JUNIO")
	mesnum=6;
	
	if(mes=="julo" or mes=="Julio" or mes=="JULIO")
	mesnum=7;
	
	if(mes=="agosto" or mes=="Agosto" or mes=="AGOSTO")
	mesnum=8;
	
	if(mes=="septiembre" or mes=="Septiembre" or mes=="SEPTIEMBRE")
	mesnum=9;
	
	if(mes=="octubre" or mes=="Octubre" or mes=="OCTUBRE")
	mesnum=10;
	
	if(mes=="noviembre" or mes=="Noviembre" or mes=="NOVIEMBRE")
	mesnum=11;
	
	if(mes=="diciembre" or mes=="Diciembre" or mes=="DICIEMBRE")
	mesnum=12;
}

void imprimir(){
	
	
	if((dia>=21&&mesnum==1)||(dia<<19&&mesnum==2)){
		cout<<"Usted es Acuario"<<endl;
	}
	
	if((dia>=20&&mesnum==2)||(dia<=20&&mesnum==3)){
		cout<<"Usted es Piscis"<<endl;
	}
	
	if((dia>=21&&mesnum==3)||(dia <=20&&mesnum==4)){
		cout<<"Usted es Aries"<<endl;
	}
	
	if((dia>=21&&mesnum==4)||(dia<=20&&mesnum==5)){
		cout<<"Usted es Tauro"<<endl;
	}
	
	if((dia>=21&&mesnum==5)||(dia<=21&&mesnum==6)){
		cout<<"Usted es Geminis"<<endl;
	}
	
	if((dia>=22&&mesnum==6)||(dia<=22&&mesnum==7)){
		cout<<"Usted es Cancer"<<endl;
	}
	
	if((dia>=22&&mesnum==6)||(dia<=22&&mesnum==7)){
		cout<<"Usted es Leo"<<endl;
	}
	
	if((dia>=23&&mesnum==9)||(dia<=22&&mesnum==10)){
		cout<<"Usted es Libra"<<endl;
	}
	
		if((dia>=23&&mesnum==10)||(dia<=22&&mesnum==11)){
		cout<<"Usted es Escorpio"<<endl;
	}
	
	if((dia>=22&&mesnum==12)||(dia<20&&mesnum==1)){
		cout<<"Usted es Capricornio"<<endl;
	}
	
	if((dia>=23&&mesnum==11)||(dia<=21&&mesnum==12)){
		cout<<"Usted es Sagitario"<<endl;
	}
}

