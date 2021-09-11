//
// Created by Neeraj Gupta on 10/09/21.
//
#include <iostream>
using namespace std;
class Fraction {
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator) {
        this -> numerator = numerator;
        this -> denominator = denominator;
    }
    int getNumerator() const {
        return numerator;
    }
    int getDenominator() const {
        return denominator;
    }
    void setNumerator(int numerator) {
        this->numerator = numerator;
    }
    void setDenominator(int denominator) {
        this->denominator = denominator;
    }
    void print() const {
        cout << numerator << " / " << denominator << endl;
    }
    void simplify() {
//        cout << "simplify" << endl;
        int gcd = 1;
        int j = min(numerator, denominator);
//        cout << j << endl;
        for (int i = 1 ; i <= j; ++i) {
            if (numerator%i == 0 && denominator%i==0) {
                gcd = i;
            }
        }
//        cout << gcd << endl;
        numerator = numerator/gcd;
        denominator = denominator/gcd;
    }
    Fraction add(Fraction const &f2) const {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = (x * numerator) + (y * f2.numerator);
        Fraction fNew(num, lcm);
        fNew.simplify();
        return fNew;
    }
    Fraction multiply(Fraction const &f2) const {
        int num = numerator * f2.numerator;
        int den = denominator * f2.denominator;
        Fraction fNew(num,den);
        fNew.simplify();
        return fNew;
    }
//    Operator Overloading
    Fraction operator +(Fraction const &f2) const {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = (x * numerator) + (y * f2.numerator);
        Fraction fNew(num, lcm);
        fNew.simplify();
        //        numerator = num;
        //        denominator = lcm;
        //        simplify();
        return fNew;
    }

    Fraction operator *(Fraction const &f2) const {
        int num = numerator * f2.numerator;
        int den = denominator * f2.denominator;
        Fraction fNew(num,den);
        fNew.simplify();
        return fNew;
    }
    bool operator ==(Fraction const &f2) const {
        return (this->numerator == f2.numerator) && (this->denominator == f2.denominator);
    }

    Fraction& operator ++() {
        numerator += denominator;
        simplify();
        return *this;
    }
    Fraction operator++(int) {
        Fraction fNew(numerator, denominator);
        fNew.simplify();
        numerator += denominator;
        simplify();
        return fNew;
    }
    Fraction& operator +=(Fraction const &p2) {
        *this = *this + p2;
        return *this;
    }
};

