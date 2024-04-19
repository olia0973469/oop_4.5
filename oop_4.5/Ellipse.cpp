// Ellipse.cpp

#include "Function.h"
#include "Ellipse.h"

double Ellipse::count(double x) const
{
	double y = b * sqrt((x * x) / (a * a));
	return y;
}
