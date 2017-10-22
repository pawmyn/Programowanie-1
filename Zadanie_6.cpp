//Obliczanie rabatu uzale¿nione od trzech czynników. 

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()


{
	double cenadet, art, x; // x - do zap³aty

	int dzt;
	
	cout << "Podaj ilosc artykulow: ";
	cin >> art;
	cout << "Podaj kwote zaplaty: ";
	cin >> cenadet;
	cout << "Podaj dzien tygodnia: ";
	cin >> dzt;


	if (art > 20)
		x *= (1. - 0.18)*cenadet*art;

	else if (dzt >= 1 && dzt <= 3)
		x *= (1. - 0.12)*cenadet*art;

	
	
	cout << x << endl;

	system("PAUSE");
	return 0;
}
