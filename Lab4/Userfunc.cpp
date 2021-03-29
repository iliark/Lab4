#include "Complex.h"
#include "Userfunc.h"
#include <math.h>
Complex cos(const Complex& z)
{
	Complex result(cos(z.Re()) * cosh(z.Im()), sin(z.Re()) * sinh(z.Im()));
	return result;
}
Complex sin(const Complex& z)
{
	Complex result(sin(z.Re()) * cosh(z.Im()), cos(z.Re()) * sinh(z.Im()));
	return result;
}
Complex pow(const Complex& z1, const Complex& z2)
{
	Complex result(pow(z1.R(), z2.Re()) * cos(z2.Re() * z1.Phi()), sin(z2.Re() * z1.Phi()));
	return result;
}
Complex y(const Complex& z)
{
	return  pow(z,2) - cos(z * 2);
}
