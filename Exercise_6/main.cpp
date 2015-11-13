#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void time(int hora,int minuto);

int main(int argc, char** argv) {
	int hora,minuto;
	
	cout << "Digite o numero de horas: ";
	cin >> hora;
	cout << "Digite o numero de minutos: ";
	cin >> minuto;
	
	time(hora,minuto);
	
	system("PAUSE");
	return 0;
}

void time(int hora,int minuto){
	cout << "\nTime : " << hora << ":" << minuto << "\n\n"; 
}
