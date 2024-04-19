// Function.h

#pragma once
#include <math.h>
#include <corecrt_math_defines.h>


class Function
{
public:
	virtual double count(double x) const = 0;
};
