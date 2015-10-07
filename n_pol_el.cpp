#include <iostream>
using namespace std;

int mass[100]; int n_el, j, i, n_pol_el, k;
int main() {
	cout << "Ukazhite kolichestvo elementov massiva: " << endl;
	cin >> n_el;
	cout << "Vvedite elementy massiva: " << endl;

	i = 0;
	while (i < n_el) {
		cin >> mass[i];
		i++;
	}

/*	for (int i = 0; i < n_el; i++)
	{
		cin >> mass[i];
	} */

		n_pol_el = 0;
		i = 0;
		while (i < n_el) {
			if (mass[i] > 0) {
				n_pol_el++;
				}
			i++;
			}
	cout << "Kol-vo polozhitel'nych elementov massiva: " << n_pol_el << endl;
}

