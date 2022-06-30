#include <iostream>
using namespace std;
int main (){
	/*Realizar programa que imprima los numeros pares que el usuario desee*/

	int ok = 1;

	while(ok=1){
		/*
		> Si quieres que imprima el 0, escribe -2
		> Si no quieres que lo imprima, escribe 0
		             |
		             V
		       [ Aquí abajo ]                      */
		int n=      -2        , pu,ok;
		cout<<"Ingresa el numero que desee: ";
		cin>>pu;
		if(pu >= 0 ){
			do{
				n = n + 2;
				cout << n << endl;
			}while (n<pu-1);
		}else{cout<<"No se permiten valores negativos."<<endl;}
		
		cout<<"Reiniciar programa"<<endl;
		cout<<"1). Si."<<endl;
		cout<<"2). No."<<endl;
		cin>>ok;
		if(ok==1){
		
		}else{
			cout<<"Fin del programa"<<endl;
			break;
		}
    }  
	return 0;
}

//Quito was here
/*
⡆⣐⢕⢕⢕⢕⢕⢕⢕⢕⠅⢗⢕⢕⢕⢕⢕⢕⢕⠕⠕⢕⢕⢕⢕⢕⢕⢕⢕⢕
⢐⢕⢕⢕⢕⢕⣕⢕⢕⠕⠁⢕⢕⢕⢕⢕⢕⢕⢕⠅ ⡄⢕⢕⢕⢕⢕⢕⢕⢕⢕
⢕⢕⢕⢕⢕⠅⢗⢕⠕⣠⠄⣗⢕⢕⠕⢕⢕⢕⢕⠕⢠⣿⠐⢕⢕⢕⠑⢕⢕⠵⢕ 
⢕⢕⢕⢕⠁⢜⠕⢁⣴⣿ ⡇⢓⢕⢵⢐⢕⢕⠕⢁⣾⢿⣧⠑⢕⢕⠄⢑⢕⠅⢕ 
⢕⢕⠵⢁⠔⢁⣤⣤⣶⣶⣶⡐⣕⢽⠐⢕⠕⣡⣾⣶⣶⣶⣤⡁⢓⢕⠄⢑⢅⢑ 
⠍⣧⠄⣶⣾⣿⣿⣿⣿⣿⣿⣷⣔⢕⢄⢡⣾⣿⣿⣿⣿⣿⣿⣿⣦⡑⢕⢤⠱⢐ 
⢠⢕⠅⣾⣿⠋⢿⣿⣿⣿⠉⣿⣿⣷⣦⣶⣽⣿⣿⠈ ⣿⣿⣿⣿⠏⢹⣷⣷⡅⢐ 
⣔⢕⢥⢻⣿⡀⠈⠛⠛⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⡀⠈⠛⠛⠁⠄⣼⣿⣿⡇⢔ 
⢕⢕⢽⢸⢟⢟⢖⢖⢤⣶ ⡟⢻⣿⡿⠻⣿⣿⡟⢀⣿⣦⢤⢤⢔⢞⢿⢿⣿⠁⢕ 
⢕⢕⠅⣐⢕⢕⢕⢕⢕⣿⣿⡄⠛⢀⣦⠈⠛⢁⣼⣿⢗⢕⢕⢕⢕⢕⢕⡏⣘⢕ 
⢕⢕⠅⢓⣕⣕⣕⣕⣵⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣷⣕⢕⢕⢕⢕⡵⢀⢕⢕ 
⢑⢕⠃⡈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿ ⣿⣿⣿⣿⣿⣿⢃⢕⢕⢕ 
⣆⢕⠄⢱⣄⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢁⢕⢕⠕⢁ 
⣿⣦⡀⣿⣿⣷⣶⣬⣍⣛ ⣛⣛⡛⠿⠿⠿⠛⠛⢛⣛⣉⣭⣤⣂⢜⠕⢑⣡⣴⣿
*/