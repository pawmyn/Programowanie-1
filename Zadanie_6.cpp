//Obliczanie rabatu uzale¿nione od dwóch czynników. 

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double cenadet, art; 

	int dzt;
	
	cout << "Podaj ilosc artykulow: ";
	cin >> art;
	cout << "Podaj kwote zaplaty: ";
	cin >> cenadet;
	cout << "Podaj dzien tygodnia: ";
	cin >> dzt;

	double bezrabatu = art*cenadet;
	double dozapl = cenadet*art;

	if (art > 20)
		dozapl *= (1. - 0.18);

	else if (dzt >= 1 && dzt <= 3)
		dozapl *= (1. - 0.12);

	else if (dzt >= 4 && dzt <= 7)
		dozapl *= 1;

	else if (dzt >= 8)
		cout << "Bledny dzien tygodna" << endl; // Przekroczenie wartosci dni tygodnia

	cout << "Do zaplaty: " << dozapl << endl;
	cout << "Cena bez rabatu: " <<bezrabatu << endl;
	cout << "Zaoszczedziles: " << bezrabatu - dozapl << endl; 

	system("PAUSE");
	return 0;
}
