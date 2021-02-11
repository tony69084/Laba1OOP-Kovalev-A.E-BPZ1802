#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
double f(double x, double y);
void main() {
	double x, y;
	cout << "x=0" << endl; x = 0;
	cout << "y=1" << endl; y = 1;
	cout << "f=" << f(x, y) << endl;
	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	cout << "f=" << f(x, y) << endl;
}