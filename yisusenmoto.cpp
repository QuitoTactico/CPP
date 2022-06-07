#include <iostream>
using namespace std;
int main()
{
	
	//De acuerdo a 3 numeros dados por el usuario indicar cual de ellos es el menor y cual el mayor
	int n1,n2,n3;
	cout<<"ingresa el primer numero"<<endl;
	cin>>n1;
	cout<<"ingresa segundo numero"<<endl;
	cin>>n2;
	cout<<"ingresa el tercer numero"<<endl;
	cin>>n3;
	
	if(n1>n2 && n1>n3)
		
	    cout<<"el primer numero es mayor"<<n1;
	
	if(n2<n1 && n2>n3){
		
	    cout<<"el segundo numero es mayor"<<n2;
	}
	if(n3>n1 && n3>n2){

		cout<<"el tercer numero es mayor"<<n3;
	}
}
