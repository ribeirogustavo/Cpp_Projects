#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void two_times();
void twice();

int main(int argc, char** argv) {
	short int aux1,aux2;
	
	two_times();
	two_times();
	twice();
	twice();
	
	
	return 0;
}

void two_times(){
	cout << "Three Blind mice \n";
}

void twice(){
	cout << "See how they run \n";
}
