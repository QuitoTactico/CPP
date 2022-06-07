#include <iostream>
#include <list>    // Fué necesario para guardar las ubicaciones
using namespace std;
int ent,pago; char op; string pel,nueva_ubi; list<string> ubicaciones; list<string>::iterator actual;
int menu(string peli);
int main (){
	cout<<"\n ***** Que pelicula deseas ver hoy? ***** "<<endl;
	cout<<"a). Conic\nb). Conic 2\nc). Conic: Origenes"<<endl;
	cout<<"d). Conic: Resurrection\ne). The End of Conic."<<endl;
	cout<<"\nSelecciona una opcion."<<endl; cin>>op;
	switch (op){  case 'a': pel = "Conic";  case 'b': pel = "Conic 2";
		case 'c': pel = "Conic: Origenes";  case 'd': pel = "Conic: Resurrection";
	    case 'e': pel = "The End of Conic."; } menu(pel); return 0;}
int menu(string peli){
	cout<<"Numero de entradas: "; cin>>ent;
	if(ent == 0){cout<<"a, ok ._.";}
	cout<<"El monto a pagar es de "<<ent*80<<endl;
	cout<<"Recibo (Cuanto dinero das?): "; cin>>pago;
	if(pago < ent*80){ cout<<"No tienes el dinero suficiente."; }
	if(pago > 0){  cout<<"\nIngrese las ubicaciones para sus asientos:"<<endl; getline(cin,nueva_ubi);
		for( int n = 1  ;  n <= ent  ;  n++ ){
			cout<<n<<". ";  getline(cin,nueva_ubi);
        	ubicaciones.push_back(nueva_ubi);}
	   	cout<<"\nTu pelicula es "<<peli<<"\nTu cambio es de "<<pago-(ent*80)<<endl;
		cout<<"Y las ubicaciones de tus asientos son: ";
		for(actual=ubicaciones.begin();actual!=ubicaciones.end();actual++){cout<<*actual<<", ";}
	}else{ cout<<"Solo se aceptan numeros positivos.";} return 0;
}/*
    _                ___       _.--.
    \`.|\..----...-'`   `-._.-'_.-'`     
    /  ' `         ,       _.-'   
    )/' _/     \   `-_,   /           Quito was here, again.
    `-'" `"\_  ,_.-;_.-\_ ',         Sí, es horrible 
        _.-'_./   {_.'   ; /            
       {_.-``-'         {_/     */                       