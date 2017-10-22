
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()

{
	double a;
	cout << "Podaj liczbe a: ";
	cin >> a;

	double b;
	cout << "Podaj liczbe b: ";
	cin >> b;

	double c;
	cout << "Podaj liczbe c: ";
	cin >> c;

	double x, z, y;
	x = a*a, z = b*b, y = c*c;

	double d = a*a + b*b;

	double wynik = pow(d, (1 / 2.0)); //wyliczamy pierwiastek; 
	
	cout << "Pierwiastek stopnia drugiego z liczby " << d << " to: " << wynik << endl;
	if (a*a + b*b == c*c)
		cout << "Trojkat jest prostokatny \n" << "Wyjasnienie: "<< 
		"pierwiastek z sumy kwadratow liczb (a^2 = " << x << ")" << 
		" i (b^2 = " << z << ")" << " jest rowny licznie c - " <<  
		c << " cnd." << endl; 


	if (a*a + b*b != c*c)
		cout << "Trojkat nie jest prostokatny \n"<< "Wyjasnienie: " <<
		"pierwiastek z sumy kwadratow liczb (a^2 = " << x << ")" <<
		" i (b^2 = " << z << ")" << " nie jest rowny licznie c - " <<
		c << endl;

	system("pause");
	return 0;
	
}
