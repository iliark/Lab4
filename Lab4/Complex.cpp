#include "Complex.h"
#include <cmath>
#include <iostream>
Complex::Complex() 
{
    this->re = 0;
    this->im = 0;
}

Complex::Complex(double re) 
{
    this->re = re;
    this->im = 0;
}

Complex::Complex(double re, double im) 
{
    this->re = re;
    this->im = im;
}

double Complex::Re() const 
{
    return this->re;
}

double Complex::Im() const 
{
    return this->im;
}

double Complex::R() const
{
    return sqrt(re*re + im * im);
}
double Complex::Phi() const
{
    return atan2(im, re);
}
Complex Complex::operator+(const Complex& z) const {
    Complex res(this->re + z.re, this->im + z.im);
    return res;
}

Complex Complex::operator-(const Complex& z) const {
    Complex res(this->re - z.re, this->im - z.im);
    return res;
}

Complex Complex::operator*(const Complex& z) const {
    Complex res(this->re * z.re - this->im * z.im, this->re * z.im + this->im * z.re);
    return res;
}

Complex Complex::operator/(const Complex& z) const {
    Complex res((this->re * z.re + this->im * z.im) / (z.re * z.re + z.im * z.im),
        (this->im * z.re - this->re * z.im) / (z.re * z.re + z.im * z.im));
    return res;
}

Complex::operator double() const {
    return this->re;
}

ostream& operator<< (ostream& out, const Complex& z) 
{
    if (z.Im() >= 0) 
    {
        out << z.Re() << "+" << z.Im() << "i";
    }
    else 
    {
        out << z.Re() << z.Im() << "i";
    }
    return out;
}