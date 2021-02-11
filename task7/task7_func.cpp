#include <iostream>
#include <cstdlib>
#include <cmath>
#include "func.h"
double result, x, y;
void f()
{
	result = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
}