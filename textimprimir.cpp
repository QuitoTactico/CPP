#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

main(){
std::ifstream in("text.txt", ios::in);
std::ofstream out("texxxxxt.txt", ios::out);
int cont =1;

if(in.is_open() && out.is_open()){
    while (!in.eof()) {
        string linea;
        getline(in, linea);
        if(cont == 2){
            out << "here." <<endl;
        }
        cont++;
        out << linea << endl;
    }

    in.close();
    out.close();
    
    //rename("temp.txt", "text.txt");
    
}else{
    std::cout<<"Error"<<endl;
}
return 0;
};