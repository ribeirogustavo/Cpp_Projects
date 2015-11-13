#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double light_year_to_astronomic_unit(int light_year);

int main(int argc, char** argv) {
	int light_year;
	
	cout << "Digite um inteiro para converter anos luz em unidade astronomica: ";
	cin >> light_year;
	cout << "\n" << light_year << " Ano Luz possui " << light_year_to_astronomic_unit(light_year) << " unidades astronomicas\n"; 
	return 0;
}

double light_year_to_astronomic_unit(int light_year){
	return light_year*63240;
}
