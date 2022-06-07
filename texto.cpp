#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //Opens .txt file
    ifstream infile1;
    infile1.open("slopeejemplo.casm");

    //Fail check
    if(infile1.fail())
    {
        cout << "File failed to open.\n";
        exit(1);
    }

    //Prints file to screen (not correctly)
    cout << infile1.rdbuf();

    //Closes file
    infile1.close();
    return 0;
}
