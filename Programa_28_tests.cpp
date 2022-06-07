#include <iostream>
#include <list> 

using namespace std;

void mostrarUbicaciones(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
}

int main(){
    list<string> ubicaciones;
    list<string>::iterator actual;
	string nueva_ubi;
    for(int n = 0; n<4;n++){
        getline(cin,nueva_ubi);
        ubicaciones.push_back(nueva_ubi);
    }


    for( actual = ubicaciones.begin()  ;  actual != ubicaciones.end()  ;  actual++ ){
		cout << *actual << " ";
    }
}
