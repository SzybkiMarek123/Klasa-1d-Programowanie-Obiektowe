#include "Rhombus.h"
Rhombus::Rhombus(double h,double a, std::string n) :Quadrangle(a, a, a, a, n)
{
	height = h;
}
double Rhombus::GetArea()
{
	return sideA * height;
}