// Hyperbola.h

#pragma once
#include "Function.h"

class Hyperbola :
	public Function
{
private:
	double a;
	double b;
	double x;
public:
	Hyperbola(double a, double b) : a(a), b(b) {}
	double count(double x) const override;
};

