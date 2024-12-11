
#pragma once
#include <iostream>
#include "Quadrangle.h"
class Rhombus : public Quadrangle
{
protected:
double height;
public:
	Rhombus (double h, double a, std::string n);

	double GetArea();
};
