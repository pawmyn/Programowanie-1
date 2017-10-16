#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double bbloat = 49.814774;
	double bblan = 19.051674;
		
	double krloat = 50.058585;
	double krlan = 19.945813;
		
	double ktloat = 49.882513;
	double ktlan = 19.224914;
		
	double osloat = 50.035534;
	double oslan = 19.217743;

	double distbboskr_a = bblan + oslan + krlan;
	double distbboskr_a = bbloat + osloat + krloat;

	double distbbktkr_b = bblan + ktlan + krlan;
	double distbbktkr_b = bbloat + ktloat + krloat;

	double wynik = sqrt
	(
		pow((distbbktkr_b + distbbktkr_a), 2) +
		pow((distbboskr_a + distbboskr_b), 2)
	);


		cout << wynik << endl;
		system("pause");
		return 0;
}
