#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std; 
int liczba, strzal, i; 

int main() {
	srand(time(NULL));
	liczba = rand() % 100 + 1;

	cout << "Wylosowalem dla Ciebie liczbe :)"
		 << "\nMasz 10 prob zeby zgadnac." << endl; 

	while(liczba != strzal) {
		
		cout << "\nPodaj liczbe od 1-100" << endl;
		cin >> strzal;

		if (strzal == liczba) {
			system("cls");
			cout << "Zgadles! Brawo :)" << endl;
			cout << "Zgadles za " << i << " razem." << endl;
			system("pause");
		}

		else if (strzal < liczba){
			system("cls");
			cout << strzal << " jest za mala!" << endl;
			i++;
			cout << "Proba: " << i << endl;
		}

		else if (strzal > liczba) {
			system("cls");
			cout << strzal << " jest za duza!" << endl;
			i++;
			cout << "Proba: " << i  << endl;
		}

		if (i >= 10) {
			cout << "Jestes ciota, heh." << endl; 
			system("pause");
		}	
	}
}