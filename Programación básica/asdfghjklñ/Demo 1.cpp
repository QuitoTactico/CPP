#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void captura();
void imprimir();
void calculo();
void aries();
void capricornio();
void cancer();
void leo();
void tauro();
void geminis();
void virgo();
void libra();
void escorpio();
void sagitario();
void acuario();
void picis();

int dia,mes,ano,op;
string nombre,apellidop,apellidom,nombrec;

int main(){
	captura();
    imprimir();
    aries();
    capricornio();
    cancer();
    leo();
    tauro();
    geminis();
    virgo();
    libra();
    escorpio();
    sagitario();
    acuario();
    picis();

 
return 0;
}

void captura(){
	cout<<"ingrese su nombre(s): "<<endl;
    getline(cin,nombre);
    cout<<"ingrese su apellido paterno: "<<endl;
    getline(cin,apellidop);
    cout<<"Ingrese su apellido materno: "<<endl;
    getline(cin,apellidom);
    cout<<"ingrese su dia de nacimiento"<<endl;
    cin>>dia;
    cout<<"ingrese su mes en numeros"<<endl;
    cin>>mes;
    cout<<"ingrese su ano de nacimiento"<<endl;
    cin>>ano;
    
}
void calculo(){


switch(op){

case 1:aries();
   break;
   case 2:tauro();
   break;
   case 3:geminis();
   break;
   case 4:cancer();
   break;
   case 5:leo();
	break;
	case 6:virgo();
	break;
	case 7:libra();
	break;
	case 8:escorpio();
	break;
	case 9:sagitario();
	break;
	case 10:capricornio();
	break;
	case 11:acuario();
	break;
	case 12:picis();
	break;
	
	
   }
}
void aries(){
if((dia>=21&&mes==3)||(dia <=20&&mes==4))
	
	cout<<"usted es Aries"<<endl<<"eres ardiente, no tienes ning�n tipo de censura, siempre vives la viva como hay que vivirla es decir al maximo"<<endl<<"Es compatible con G�minis, Acuario, Leo y Tauro y no lo es con Libra y Piscis."<<endl
	<<"Su planeta es Marte y su piedra es ojo de tigre"<<endl<<"prediccion:"<<endl<<" Vigile sus palabras y procure no criticar porque las palabras se pueden volver en su contra."<<endl;

	
}

void tauro(){
		if((dia>=21&&mes==4)||(dia<=20&&mes==5))
	cout<<"Usted es Tauro"<<endl<<"Das unas vibras motivadoras porque todos los que est�n cerca de ti"<<endl<<"Es compatible con Capricornio, Piscis y Virgo y no con Leo y Acuario."<<endl
	<<"Su planeta es venus y su piedra es zafiro"<<endl<<"prediccion:"<<endl<<"Un poco de descanso y de tranquilidad le ira muy bien para recuperar fuerzas."<<endl;
}

void geminis(){
if((dia>=21&&mes==5)||(dia<=21&&mes==6))
	
	cout<<"Ustes es geminis"<<endl<<"eres una mariposa social, te encanta relacionarte con todo el mundo y aprender de todas las experiencias"<<endl<<"es compatibe con Acuario y Libra y no es incompatble con ningun signo :)"<<endl
	<<"Su planeta es mercurio y su piedra es Agata"<<endl<<"prediccion:"<<endl<<"El amor tocara a su puerta dentro de muy pronto (nunca)."<<endl;

}

void cancer(){
	if((dia>=22&&mes==6)||(dia<=22&&mes==7))
	
	cout<<"usted es cancer"<<endl<<"siempre estas preocupado por los dem�s hace que seas una persona bastante querida."<<endl<<"Es compatible con Virgo, Escorpio y Tauro y no es con Aries, Libra y Sagitario."<<endl
	<<"Su planeta es Luna y su piedra es Esmeralda"<<endl<<"prediccion:"<<endl<<"Hoy se tiene que guiar por la cabeza, piense con meditacion sus acciones."<<endl;

	
}


void leo(){
if((dia>=23&&mes==7)||(dia<=23&&mes==8))
	
	cout<<"Usted es Leo"<<endl<<"deseas tener lo mejor y te encanta sentirte admirado por todas las personas"<<endl<<"Es compatible con Libra, Sagitario y Aries y no con  Tauro y Escorpio"<<endl
	<<"Su planeta es Sol y su piedra es Onix"<<endl<<"prediccion:"<<endl<<"Una oportunidad de crecer se acerca, no la desaproveches."<<endl;

}

void virgo(){
if((dia>=24&&mes==8)||(dia<=22&&mes==9))
	
	cout<<"usted es virgo"<<endl<<"eres una persona s�per perfeccionista y ordenada "<<endl<<"Es compatible con  Libra,C�ncer, Tauro y Capricornio y no con G�minis y Libra."<<endl
	<<"Su planeta Mercurio y su piedra es Amatista"<<endl<<"prediccion:"<<endl<<"Es una suerte que la paciencia le acompa�e desde el nacimiento, porque hoy la va a necesitar."<<endl;


}

void libra(){
		if((dia>=23&&mes==9)||(dia<=22&&mes==10))
	
	cout<<"Usted es libra"<<endl<<"puedes tener la mala reputaci�n de ser una persona indecisa"<<endl<<"es compatible con Leo y Sagitario y no con Capricornio, Aries y Virgo."<<endl
	<<"Su planeta es Venuz y su piedra es Cuarzo Rosa"<<endl<<"prediccion:"<<endl<<"Dedique la jornada a la reflexi�n y conseguir� grandes logros."<<endl;

}
void escorpio(){
		if((dia>=23&&mes==10)||(dia<=22&&mes==11))
	
	cout<<"Usted es Escorpio"<<endl<<"Eres una persona s�per apasionada que vive las cosas como se tiene que vivirlas"<<endl<<"Es compatible con C�ncer, Piscis y Capricornio y no con Leo y Acuario."<<endl
	<<"Su planeta es Pluton y su piedra es Lapislazuli"<<endl<<"prediccion:"<<endl<<"Muchos y nuevos amigos, es un buen d�a para ampliar su c�rculo."<<endl;
		
}
void sagitario(){
	if((dia>=23&&mes==11)||(dia<=21&&mes==12))
	
	cout<<"Usted es SAGITARIO"<<endl<<"eres una persona generosa, amable y s�per divertida."<<endl<<"Es compatible con  Acuario y Libra y no con Escorpio y Tauro."<<endl
	<<"Su planeta es Jupiter y su piedra es Turquesa"<<endl<<"prediccion:"<<endl<<"Tus bolas explotaran el 17 de Enero de 2023."<<endl;
	
}

void capricornio(){
	if((dia>=22&&mes==12)||(dia<20&&mes==1))
	
	cout<<"Usted es CAPRICORNIO"<<endl<<"eres una persona s�per trabajadora, siempre est�s luchando por cumplir todos tus objetivos"<<endl<<"Es compatible con Tauro, Virgo y Escorpio y no con Aries, Libra y G�minis."<<endl
	<<"Su planeta es Saturno y su piedra es Rub�"<<endl<<"prediccion:"<<endl<<"No te fies de las palabras de Escorpio, es un naco."<<endl;
}
void acuario(){
	if((dia>=21&&mes==1)||(dia<<19&&mes==2))
	
	cout<<"Usted es Acuario"<<endl<<"las vibras que das son s�per liberadoras e independientes"<<endl<<"Es compatible con C�ncer y Tauro G�minis, Sagitario y Leo	Libra, Aries y G�minis. y no tiene incopatibilidades"<<endl
	<<"Su planeta es Urano y su piedra es Granate"<<endl<<"prediccion:"<<endl<<"Esta es tu se�al para hablarle a esa persona, la suerte te acompa�a."<<endl;
}
void picis(){
	if((dia>=20&&mes==2)||(dia<=20&&mes==3))
	
	cout<<"Usted es picis"<<endl<<"eres una persona s�per so�adora, siempre est�s en tu propio mundo"<<endl<<"Es compatible con G�minis, Sagitario y Leo y no con C�ncer, Escorpio y Piscis."<<endl
	<<"Su planeta es Neptuno y su piedra es Amatista"<<endl<<"prediccion:"<<endl<<"No quiera tener siempre la raz�n."<<endl;
}

void imprimir(){

}

                        Bc o   1 .  *2 . e x e     ����p r o y e  *c t o z o d   i a PROYEC~1EXE  p�rSUSU  TySU�5� B. c p p    �������������  ����s i g n o  �s   t a k e     2 SIGNOS~1CPP  C={RURU  �|RU,�  �. e x e    e������������  �����s i g n o  es   t a k e     2 �IGNOS~1EXE  V{RURU  W{RU�3�r �. e x e    e������������  �����s i g n o  es   t a k e     2 �IGNOS~1EXE  V{RURU  �{RU�3�r �. e x e    e������������  �����s i g n o  es   t a k e     2 �IGNOS~1EXE  V{RURU  �{RU�3�r �. e x e    e������������  �����s i g n o  es   t a k e     2 �IGNOS~1EXE  V{RURU  |RU�3�r �. e x e    e������������  �����s i g n o  es   t a k e     2 �IGNOS~1EXE  V{RURU  �|RU�3�r B. e x e    e������������  ����s i g n o  es   t a k e     2 SIGNOS~1EXE  V{RUSU  �|RU�3�r �. 1 . c p  �p   ��������  �����s i g n o  �s   t a k e     2 �IGNOS~2CPP  �|RURU  �|RU      B. 1 . c p  �p   ��������  ����s i g n o  �s   t a k e     2 SIGNOS~2CPP  �|RURU  �|RU�5�  Bc o   1 .  �2 . c p p     ����p r o y e  �c t o z o d   i a PROYEC~1CPP  �rSUSU  ntSU�(  �c o   1 .  *2 . e x e     �����p r o y e  *c t o z o d   i a �ROYEC~1EXE  p�rSUSU  �rSU�5,� �c o   1 .  *2 . e x e     �����p r o y e  *c t o z o d   i a �ROYEC~1EXE  p�rSUSU  BtSU�5� �c o   1 .  *2 . e x e     �����p r o y e  *c t o z o d   i a �ROYEC~1EXE  p�rSUSU  RtSU�5� �c o   1 .  *2 . e x e     �����p r o y e  *c t o z o d   i a �ROYEC~1EXE  p�rSUSU  otSU�5� �c o   1 .  *2 . e x e     �����p r o y e  *c t o z o d   i a �ROYEC~1EXE  p�rSUSU  �tSU�5� 