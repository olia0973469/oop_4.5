// Ellipse.h

#pragma once
#include "Function.h"

class Ellipse :
	public Function
{
private:
	double a;
	double b;
public:
	Ellipse(double a, double b) : a(a), b(b) {}
	double count(double x) const override;
};
