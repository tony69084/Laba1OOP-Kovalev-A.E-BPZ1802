#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
double result, x, y;
void f();
void main()
{
	cout << "x=0" << endl; x = 0;
	cout << "y=1" << endl; y = 1;
	f();
	cout << "f=" << result << endl;
	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	f();
	cout << "f=" << result << endl;
}