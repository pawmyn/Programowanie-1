#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std; 

int liczba, strzal, i; 

int main() {
	srand(time(NULL));
	liczba = rand() % 100 + 1;

	while(liczba != strzal) {
		cout << "Podaj liczbe od 1-100" << endl;
		cin >> strzal;

		if (strzal < liczba){
			system("cls");
			cout << "Za mala!" << endl;
			i++;
			cout << "Proba: " << i << endl;
		}

		if (strzal > liczba) {
			system("cls");
			cout << "Za duza!" << endl;
			i++;
			cout << "Proba: " << i  << endl;
		}

		if (strzal == liczba) {
			system("cls");
			cout << "Zgadles! Brawo :)" << endl;
			cout << "Zgadles za " << i << "razem." << endl;
			system("pause");
		}

		if (i >= 10) {
			cout << "Jestes ciota" << endl; 
			system("pause");
		}
			
	}
	
	return 0;
	system("pause");

}