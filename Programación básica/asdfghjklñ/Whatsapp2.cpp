#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int op;

void menu();
void chatear();
void peru();
void floppa();

int main(){
		do{
		menu();
	}while(op!=7);
	return 0;
}

void menu(){
	cout<<"* * * * * Bienvenido a Whatsapp 2 :D  * * * * * "<<endl;
	cout<<"k desea hacer estimado usuario? ',:) "<<endl;
	cout<<"1). Chatear"<<endl;
	cout<<"2). Bombardear peru"<<endl;
	cout<<"3). Big Floppa"<<endl;
	cout<<"4). Salir :((("<<endl;
	
	switch (op){
		case 1:chatear();
		break;
		case 2:peru();
		break;
		case 3: floppa();
		break;
		case 4:cout<<"Salir de wasap 2 :(((((("<<endl;
		break;
		default:cout<<"Si ocei entiendo UnU"<<endl;
	}
	getch();
	system("cls");
}
