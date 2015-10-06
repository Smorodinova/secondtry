#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b, c;
	cout << "vvedite celoje znachenie dlya koefficienta a:  " << endl;
	cin >> a;
	cout << "vvedite celoje znachenie dlya koefficienta b:  " << endl;
	cin >> b;
	cout << "vvedite celoje znachenie dlya koefficienta c:  " << endl;
	cin >> c;

	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "X - luboe chislo" << endl;
			}
			else {
				cout << "net reshenij" << endl;
			}
		}
		else {
			if (c == 0) {
				cout << "X = 0" << endl;
			}
			else {
				cout << "X = " << -c / (float)b << endl;
			}
		}
	}
	else {
		if (b == 0) {
			if (c == 0) {
				cout << "X = 0" << endl;
			}
			else {
				cout << "net reshenij" << endl;
			}
		}
		else {
			if (c == 0) {
				cout << "X1 = 0, X2 = " << -b / (float)a << endl;
			}
			else {
				float d;
				d = (float)b * (float)b - 4 * (float)a * (float)c;

				if (d > 0) {
					float x1, x2;
					x1 = (-b + 1 / d*d) / 2 * a;
					x2 = (-b - 1 / d*d) / 2 * a;
					cout << "X1 = " << x1 << "\n" << "X2 = " << x2 << endl;
				}
				else if (d == 0) {
					float x;
					x = -b / 2 * (float)a;
					cout << x << endl;
				}
				else {
					cout << "Dejstvitel'nych kornej net" << endl;
				}
			}
		}
	}
	return 0;
}
