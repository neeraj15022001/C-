//
// Created by Neeraj Gupta on 10/09/21.
//

#include <iostream>
using namespace std;
class ComplexNumber {
    int real;
    int imag;
public:
    ComplexNumber(int real, int imag) {
        this -> real = real;
        this -> imag = imag;
    }
    void plus(ComplexNumber const &c2) {
        real += c2.real;
        imag += c2.imag;
    }
    void multiply(ComplexNumber const &c2) {
        int newReal = (real * c2.real) + (-(imag * c2.imag));
        int newImag = (real * c2.imag) + (imag * c2.real);
        real = newReal;
        imag = newImag;
    }
    void print() {
        if(imag < 0)
            cout << real << "-i" <<imag << endl;
        else
            cout << real << "+i" <<imag << endl;
    }
};
