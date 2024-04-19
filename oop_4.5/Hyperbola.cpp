// Hyperbola.cpp

#include "Function.h"
#include "Hyperbola.h"

double Hyperbola::count(double x) const
{
	double y = -b * sqrt((x * x) / (a * a));
	return y;
}
