#include <iostream>
#include <list>    // Fué necesario para guardar las ubicaciones
using namespace std;

int main (){

	char op;
	int ent,total,pago,cambio;
	list<string> ubicaciones;
    list<string>::iterator actual;
	string nueva_ubi;
	   
	cout<<"\n *****�Que pelicula deseas ver hoy?***** "<<endl;
	cout<<"a). Conic"<<endl;
	cout<<"b). Conic 2"<<endl;
	cout<<"c). Conic: Origenes "<<endl;
	cout<<"d). Conic: Resurrection"<<endl;
	cout<<"e). The End of Conic."<<endl;
	cout<<"\nSelecciona una opcion."<<endl;
	cin>>op;
	   
	switch (op){
	   	case 'a':
	   		cout<<"Numero de entradas: ";
	   		cin>>ent;
			if(ent == 0){cout<<"a, ok ._.";break;}
	   		total=ent*80;
	   		cout<<"El monto a pagar es de "<<total<<endl;
	   		cout<<"Recibo (Cuanto dinero das?): ";
	   		cin>>pago;
			if(pago < total){
				cout<<"No tienes el dinero suficiente.";
				break;
			}
			if(pago > 0){
	   			
				cout<<"\nIngrese las ubicaciones para sus asientos:"<<endl; getline(cin,nueva_ubi);
				for( int n = 1  ;  n <= ent  ;  n++ ){
					cout<<n<<". ";
       				getline(cin,nueva_ubi);
        			ubicaciones.push_back(nueva_ubi);
   				}

	   			cambio=pago-total;
	   			cout<<"\nTu pelicula es Conic"<<endl;
	   			cout<<"Tu cambio es de "<<cambio<<endl;
				cout<<"Y las ubicaciones de tus asientos son: ";

				for( actual = ubicaciones.begin()  ;  actual != ubicaciones.end()  ;  actual++ ){
					cout << *actual << ", ";
    			}

			}else{
			   	cout<<"Solo se aceptan numeros positivos."<<endl;
			}break;
			   
			
		case 'b':
	   		cout<<"Numero de entradas: ";
	   		cin>>ent;
			if(ent == 0){cout<<"a, ok ._.";break;}
	   		total=ent*80;
	   		cout<<"El monto a pagar es de "<<total<<endl;
	   		cout<<"Recibo (Cuanto dinero das?): ";
	   		cin>>pago;
			if(pago < total){
				cout<<"No tienes el dinero suficiente.";
				break;
			}
			if(pago > 0){
	   			
				cout<<"\nIngrese las ubicaciones para sus asientos:"<<endl; getline(cin,nueva_ubi);
				for( int n = 1  ;  n <= ent  ;  n++ ){
					cout<<n<<". ";
       				getline(cin,nueva_ubi);
        			ubicaciones.push_back(nueva_ubi);
   				}

	   			cambio=pago-total;
	   			cout<<"\nTu pelicula es Conic 2"<<endl;
	   			cout<<"Tu cambio es de "<<cambio<<endl;
				cout<<"Y las ubicaciones de tus asientos son: ";

				for( actual = ubicaciones.begin()  ;  actual != ubicaciones.end()  ;  actual++ ){
					cout << *actual << ", ";
    			}

			}else{
			   	cout<<"Solo se aceptan numeros positivos."<<endl;
			}break;
			   
		
		case 'c':
	   		cout<<"Numero de entradas: ";
	   		cin>>ent;
			if(ent == 0){cout<<"a, ok ._.";break;}
	   		total=ent*80;
	   		cout<<"El monto a pagar es de "<<total<<endl;
	   		cout<<"Recibo (Cuanto dinero das?): ";
	   		cin>>pago;
			if(pago < total){
				cout<<"No tienes el dinero suficiente.";
				break;
			}
			if(pago > 0){
	   			
				cout<<"\nIngrese las ubicaciones para sus asientos:"<<endl; getline(cin,nueva_ubi);
				for( int n = 1  ;  n <= ent  ;  n++ ){
					cout<<n<<". ";
       				getline(cin,nueva_ubi);
        			ubicaciones.push_back(nueva_ubi);
   				}

	   			cambio=pago-total;
	   			cout<<"\nTu pelicula es Conic: Origenes "<<endl;
	   			cout<<"Tu cambio es de "<<cambio<<endl;
				cout<<"Y las ubicaciones de tus asientos son: ";

				for( actual = ubicaciones.begin()  ;  actual != ubicaciones.end()  ;  actual++ ){
					cout << *actual << ", ";
    			}

			}else{
			   	cout<<"Solo se aceptan numeros positivos."<<endl;
			}break;
			   
		
		case 'd':
	   		cout<<"Numero de entradas: ";
	   		cin>>ent;
			if(ent == 0){cout<<"a, ok ._.";break;}
	   		total=ent*80;
	   		cout<<"El monto a pagar es de "<<total<<endl;
	   		cout<<"Recibo (Cuanto dinero das?): ";
	   		cin>>pago;
			if(pago < total){
				cout<<"No tienes el dinero suficiente.";
				break;
			}
			if(pago > 0){
	   			
				cout<<"\nIngrese las ubicaciones para sus asientos:"<<endl; getline(cin,nueva_ubi);
				for( int n = 1  ;  n <= ent  ;  n++ ){
					cout<<n<<". ";
       				getline(cin,nueva_ubi);
        			ubicaciones.push_back(nueva_ubi);
   				}

	   			cambio=pago-total;
	   			cout<<"\nTu pelicula es Conic: Resurrection"<<endl;
	   			cout<<"Tu cambio es de "<<cambio<<endl;
				cout<<"Y las ubicaciones de tus asientos son: ";

				for( actual = ubicaciones.begin()  ;  actual != ubicaciones.end()  ;  actual++ ){
					cout << *actual << ", ";
    			}

			}else{
			   	cout<<"Solo se aceptan numeros positivos."<<endl;
			}break;
			   
		
		case 'e':
	   		cout<<"Numero de entradas: ";
	   		cin>>ent;
			if(ent == 0){cout<<"a, ok ._.";break;}
	   		total=ent*80;
	   		cout<<"El monto a pagar es de "<<total<<endl;
	   		cout<<"Recibo (Cuanto dinero das?): ";
	   		cin>>pago;
			if(pago < total){
				cout<<"No tienes el dinero suficiente.";
				break;
			}
			if(pago > 0){
	   			
				cout<<"\nIngrese las ubicaciones para sus asientos:"<<endl; getline(cin,nueva_ubi);
				for( int n = 1  ;  n <= ent  ;  n++ ){
					cout<<n<<". ";
       				getline(cin,nueva_ubi);
        			ubicaciones.push_back(nueva_ubi);
   				}

	   			cambio=pago-total;
	   			cout<<"\nTu pelicula es The End of Conic."<<endl;
	   			cout<<"Tu cambio es de "<<cambio<<endl;
				cout<<"Y las ubicaciones de tus asientos son: ";

				for( actual = ubicaciones.begin()  ;  actual != ubicaciones.end()  ;  actual++ ){
					cout << *actual << ", ";
    			}

			}else{
			   	cout<<"Solo se aceptan numeros positivos."<<endl;
			}break;
	}
}/*

   _                ___       _.--.
    \`.|\..----...-'`   `-._.-'_.-'`     
    /  ' `         ,       _.-'   
    )/' _/     \   `-_,   /           Quito was here.
    `-'" `"\_  ,_.-;_.-\_ ',      
        _.-'_./   {_.'   ; /            
       {_.-``-'         {_/     
       */                       