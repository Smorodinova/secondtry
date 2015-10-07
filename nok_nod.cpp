#include <iostream>
using namespace std;

int a, b, nod, nok;

int main()
{
	cout << "Vvedite 2 celych chisla:  " << endl;
	cin >> a >> b;
	int a1 = a, b1 = b;
	while (a != b)
		if (a > b) {
			a -= b;
		}
		else
			b -= a;
	
	nod = a;
	cout << "NOD vybrannych chisel raven " << a << endl;

	int ñ = a1 * b1;
	nok = ñ / nod;
	cout << "NOK vybrannych chisel raven " << nok << endl;

	return 0;
}