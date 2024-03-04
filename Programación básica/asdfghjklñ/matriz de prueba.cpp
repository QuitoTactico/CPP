#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void opciona();
void opcionb();
void opcionc();
void opciond();

int main(){
	opciona();
 opcionb();
opcionc();
opciond();

	return 0;
}

//matriz de 3*6
void opciona(){
	int vec[3][6],num,j,m;
	srand(time(NULL));
	for(j=0;j<=2;j++){
		for(m=0;m<=5;m++){
			num=rand()/1000;
			vec[j][m]=num;
		}
	}
	for(j=0;j<=2;j++){
		for(m=0;m<=5;m++){
			cout<<vec[j][m]<<"\t";
		}
			cout<<"\n"<<endl;
	}
}

//matriz 4*2
void opcionb(){
	int vec[4][2],num,j,m;
	srand(time(NULL));
	for(j=0;j<=3;j++){
		for(m=0;m<=1;m++){
			num=rand()/1000;
			vec[j][m]=num;
		}
	}
	for(j=0;j<=3;j++){
		for(m=0;m<=1;m++){
			cout<<vec[j][m]<<"\t";
		}
			cout<<"\n"<<endl;
	}
}

//matriz 8*4
void opcionc(){
	int vec[8][4],num,j,m;
	srand(time(NULL));
	for(j=0;j<=7;j++){
		for(m=0;m<=3;m++){
			num=rand()/1000;
			vec[j][m]=num;
		}
	}
	for(j=0;j<=7;j++){
		for(m=0;m<=3;m++){
			cout<<vec[j][m]<<"\t";
		}
			cout<<"\n"<<endl;
	}
}

//matriz 6*6
void opciond(){
	int vec[6][6],num,j,m;
	srand(time(NULL));
	for(j=0;j<=5;j++){
		for(m=0;m<=5;m++){
			num=rand()/1000;
			vec[j][m]=num;
		}
	}
	for(j=0;j<=5;j++){
		for(m=0;m<=5;m++){
			cout<<vec[j][m]<<"\t";
		}
			cout<<"\n"<<endl;
	}
}
