#include <iostream>
#include "Complex.h"
#include "Userfunc.h"
using namespace std;
int main() {
    double Real, Imag;
    cout << "Insert real part: ";
    cin >> Real;
    cout << "Insert imaginary part: ";
    cin >> Imag;
    Complex number(Real, Imag);
    cout << y(number);
    return 0;
}