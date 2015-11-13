#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Celsius_2_Farenheit(int Celsius);

int main(int argc, char** argv) {
	int Celsius;
	
	cout << "Digite Graus em Celsio para a conversao em Farenheit: ";
	cin >> Celsius;
	cout << "\n" << Celsius << " Graus Celsios equivale a " << Celsius_2_Farenheit(Celsius) << " Graus em Farenheit \n\n";
	system("PAUSE");
	return 0;
}

int Celsius_2_Farenheit(int Celsius){
	int Farenheit;
	
	Farenheit = 1.8*Celsius+32;
	
	return Farenheit;
	
}
