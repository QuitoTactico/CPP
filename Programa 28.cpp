#include <iostream>

using namespace std;

int main (){

	char op;
	   int ent,total,pago,cambio;
	   
	   cout<<" *****¿Que pelicula deseas ver hoy?***** "<<endl;
	   cout<<"a). conic"<<endl;
	   cout<<"b). conic 2"<<endl;
	   cout<<"c). conic 3"<<endl;
	   cout<<"d). conic 4"<<endl;
	   cout<<"e). conic 5"<<endl;
	   cout<<"Selecciona una opcion"<<endl;
	   cin>>op;
	   
	   switch (op){
	   	case 'a':
	   		cout<<" # de entradas "<<endl;
	   		cin>>ent;
	   		total=ent*80;
	   		cout<<"El monto a pagar es"<<total<<endl;
	   		cout<<"recibo"<<endl;
	   		cin>>pago;
	   		if(pago>=0){
	   			
	   			cambio=pago-total;
	   			cout<<"Tu pelicula es conic"<<endl;
	   			cout<<"Tu cambio es de "<<cambio;
			   }
			   else{
			   	cout<<"solo se aceptan numeros positivos"<<endl;
			   }
			   break;
			   
			   	case 'b':
	   		cout<<" # de entradas "<<endl;
	   		cin>>ent;
	   		total=ent*80;
	   		cout<<"El monto a pagar es"<<total<<endl;
	   		cout<<"recibo"<<endl;
	   		cin>>pago;
	   		if(pago>=0){
	   			
	   			cambio=pago-total;
	   			cout<<"Tu pelicula es conic 2"<<endl;
	   			cout<<"Tu cambio es de "<<cambio;
			   }
			   else{
			   	cout<<"solo se aceptan numeros positivos"<<endl;
			   }
			   break;
			   
			   	case 'c':
	   		cout<<" # de entradas "<<endl;
	   		cin>>ent;
	   		total=ent*80;
	   		cout<<"El monto a pagar es"<<total<<endl;
	   		cout<<"recibo"<<endl;
	   		cin>>pago;
	   		if(pago>=0){
	   			
	   			cambio=pago-total;
	   			cout<<"Tu pelicula es conic 3"<<endl;
	   			cout<<"Tu cambio es de "<<cambio;
			   }
			   else{
			   	cout<<"solo se aceptan numeros positivos"<<endl;
			   }
			   break;
			   
			   	case 'd':
	   		cout<<" # de entradas "<<endl;
	   		cin>>ent;
	   		total=ent*80;
	   		cout<<"El monto a pagar es"<<total<<endl;
	   		cout<<"recibo"<<endl;
	   		cin>>pago;
	   		if(pago>=0){
	   			
	   			cambio=pago-total;
	   			cout<<"Tu pelicula es conic 4"<<endl;
	   			cout<<"Tu cambio es de "<<cambio;
			   }
			   else{
			   	cout<<"solo se aceptan numeros positivos"<<endl;
			   }
			   break;
			   
			   	case 'e':
	   		cout<<" # de entradas "<<endl;
	   		cin>>ent;
	   		total=ent*80;
	   		cout<<"El monto a pagar es"<<total<<endl;
	   		cout<<"recibo"<<endl;
	   		cin>>pago;
	   		if(pago>=0){
	   			
	   			cambio=pago-total;
	   			cout<<"Tu pelicula es conic 5"<<endl;
	   			cout<<"Tu cambio es de "<<cambio;
			   }
			   else{
			   	cout<<"solo se aceptan numeros positivos"<<endl;
			   }
			   break;
	   }
}
