#include <iostream>
#ifndef Complex_H
#define Complex_H
using namespace std;
class Complex {
private:
    double re;
    double im;

public:
    Complex();
    Complex(double z);
    Complex(double re, double im);
    double Re() const;
    double Im() const;
    double R() const;
    double Phi() const;
    explicit operator double() const;
    friend ostream& operator<< (ostream& out, const Complex& z);
    Complex operator +(const Complex& z) const;
    Complex operator -(const Complex& z) const;
    Complex operator *(const Complex& z) const;
    Complex operator /(const Complex& z) const;
};
#endif
