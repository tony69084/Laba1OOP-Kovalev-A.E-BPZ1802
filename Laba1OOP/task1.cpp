#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void main() {
	double  f, x, y;
	cout << "x=0"<< endl; x = 0;
	cout << "y=1" << endl; y = 1;
	f = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
	cout << "f=" << f << endl;
	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	f = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
	cout << "f=" << f << endl;
}

