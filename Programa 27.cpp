#include <iostream>
using namespace std;
int main ()
{

  int mes,dia;
  
cout<<"Selecciona un numero (1 AL 12)"<<endl;
cin>>mes;


switch (mes){
	case 1:
		cout<<"El mes que seleccionaste es Enero"<<endl;
		cout<<"Ingresa un dia del mes (1 al 31)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=31){
			cout<<"La estacion a donde pertenece este mes es invierno"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 2:
		cout<<"El mes que seleccionaste es Febrero"<<endl;
			cout<<"Ingresa un dia del mes (1 al 28)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=28){
			cout<<"La estacion a donde pertenece este mes es invierno"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 3:
		cout<<"El mes que seleccionaste es Marzo"<<endl;
			cout<<"Ingresa un dia del mes (1 al 31)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=19){
			cout<<"La estacion a donde pertenece este mes es invierno"<<endl;
		}
		if(dia>=20 && dia<=31){
			cout<<"La estacion a la que pertenece este mes es primavera"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 4:
		cout<<"El mes que seleccionaste es Abril"<<endl;
			cout<<"Ingresa un dia del mes (1 al 30)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=30){
			cout<<"La estacion a donde pertenece este mes es primavera"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 5:
		cout<<"El mes que seleccionaste es Mayo"<<endl;
			cout<<"Ingresa un dia del mes (1 al 31)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=31){
			cout<<"La estacion a donde pertenece este mes es primavera"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 6:
		cout<<"El mes que seleccionaste es Junio"<<endl;
			cout<<"Ingresa un dia del mes (1 al 30)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=21){
			cout<<"La estacion a donde pertenece este mes es primavera"<<endl;
		}
			if(dia>=21 && dia<=30){
			cout<<"La estacion a la que pertenece este mes es verano"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 7:
		cout<<"El mes que seleccionaste es Julio"<<endl;
			cout<<"Ingresa un dia del mes (1 al 31)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=31){
			cout<<"La estacion a donde pertenece este mes es verano"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 8:
		cout<<"El mes que seleccionaste es Agosto"<<endl;
			cout<<"Ingresa un dia del mes (1 al 31)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=31){
			cout<<"La estacion a donde pertenece este mes es verano"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 9:
		cout<<"El mes que seleccionaste es Septiembre"<<endl;
			cout<<"Ingresa un dia del mes (1 al 31)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=22){
			cout<<"La estacion a donde pertenece este mes es verano"<<endl;
		}
			if(dia>=22 && dia<=30){
			cout<<"La estacion a la que pertenece este mes es oto�o"<<endl;
	    }
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 10:
		cout<<"El mes que seleccionaste es Octubre"<<endl;
			cout<<"Ingresa un dia del mes (1 al 31)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=31){
			cout<<"La estacion a donde pertenece este mes es oto�o"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 11:
		cout<<"El mes que seleccionaste es Noviembre"<<endl;
			cout<<"Ingresa un dia del mes (1 al 31)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=30){
			cout<<"La estacion a donde pertenece este mes es oto�o"<<endl;
		}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		
			case 12:
		cout<<"El mes que seleccionaste es Diciembre"<<endl;
			cout<<"Ingresa un dia del mes (1 al 31)"<<endl;
		cin>>dia;
		if(dia>=1 && dia<=21){
			cout<<"La estacion a donde pertenece este mes es oto�o"<<endl;
		
			if(dia>=21 && dia<=31){
			cout<<"La estacion a la que pertenece este mes es invierno"<<endl;
		}
	}
		else{
			cout<<"El dia que ingresaste no es valido"<<endl;
		}
		break;
		default:
			cout<<"Mes invalido"<<endl;	
			
}
return 0;
}
   
