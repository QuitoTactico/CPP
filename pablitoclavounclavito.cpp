#include <iostream>

using namespace std;

int main()
{
	//programa que dadoa 3 numeros enteros nos imprima cual es mayor
	int n1, n2, n3;
	cout<<"ingresa el primer numero"<<endl;
	cin>>n1;
	cout<<"ingresa el segundo numero"<<endl;
	cin>>n2;
	cout<<"ingresa el tercer numero"<<endl;
	cin>>n3;
	
	if(n1>n2&&n1>n3){
		cout<<"el primer numero es mayor"<<n1;
	}
	else{
		if(n2>n1&&n2>n3){
			cout<<"el segundo numero es mayor"<<n2;
			
		}
    }
    
		if(n3>n1&&n3>n2){
			cout<<"el tercer numero es mayor"<<n3;
		}
		
	
	return 0;
}
