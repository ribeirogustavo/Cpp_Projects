#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	int Furlong, Jardas;
	
	cout << "Digite a quantidade em Furlong para conversão em Jardas : \n";
	cin >> Furlong;
	Jardas = Furlong*220;
	
	cout << "\n " << Furlong << " Furlong é igual á " << Jardas <<" Jardas. \n\n";
	
	system("PAUSE");
	
	return 0;
}

