#include <iostream>
using namespace std;
int main ()
{
	/*Realizar un programa donde el usuario seleccione la operación a realizar y muestre en pantalla el
resultado de la operación, considerar que solo se aceptan números positivos.*/
char op;
float n1,n2,r;
cout<<"selecciona uno de los siguientes operadores (+,-,*,/)"<<endl;
cin>> op;

   switch (op) {

case '+':
cout<<"\n *** el operador que seleccionaste fue de la suma ***\n"<<endl;
  cout<<"ingresa un numero"<<endl;
  cin>>n1;
  if (n1>=0){
  cout<<"ingresa un numero"<<endl;
  cin>>n2;
  if (n2>=0){
  
  r=n1+n2;
  cout<<"el resultado de la suma es"<<r;
  } 
}
 break;
}

     switch (op) {
	
  case '-':
cout<<"\n *** el operador que seleccionaste fue de la resta ***\n"<<endl;
  cout<<"ingresa un numero"<<endl;
  cin>>n1;
  if (n1>=0){
  }
  cout<<"ingresa un numero"<<endl;
  cin>>n2;
  if (n2>=0){
  r=n1-n2;
  cout<<"el resultado de la resta es"<<r;
  }
  break;
}
   switch (op) { 
  case '*':
cout<<"\n *** el operador que seleccionaste fue de la multiplicacion ***\n"<<endl;
  cout<<"ingresa un numero"<<endl;
  cin>>n1;
  if (n1>=0){
  cout<<"ingresa un numero"<<endl;
  cin>>n2;
  if (n2>=0){
  r=n1*n2;
  cout<<"el resultado de la multiplicacion es"<<r;
}
}
  break;
}

    switch (op) {
    	
  case '/':
cout<<"\n *** el operador que seleccionaste fue de la division ***\n"<<endl;
  cout<<"ingresa un numero"<<endl;
  cin>>n1;
  if (n1>=0){
  cout<<"ingresa un numero"<<endl;
  cin>>n2;
  if (n1>=0){
  r=n1/n2;
  cout<<"el resultado de la divicion es"<<r;
}
}
  break;

}
return 0 ;
}
