#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

string amongos(string texto, const string& reemplazar, const string& losAmongos) {
    size_t indiceInicio = 0;
    while((indiceInicio = texto.find(reemplazar, indiceInicio)) != string::npos) {
        texto.replace(indiceInicio, reemplazar.length(), losAmongos);
        indiceInicio += losAmongos.length();
    }
    return texto;
}

int main (){         //AQUÍ PONEMOS LO QUE VAMOS A LLENAR DE AMONGOS XD
    cout << amongos(string("ajjsjsja oli, deberian salir amongos"), string(" "), string(" AMONGO ")) << endl;
    cout << amongos(string("well, en efecto quedo bien"), string(" "), string(" AMONGO ")) << endl;
    cout << amongos(string("mirandarina ajsjadnfa"), string(" "), string(" AMONGO ")) << endl;
    return 0;
}