/*
CH-230-A
a13_p2.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(){}

Complex::Complex (double p, double q){
    real = p;
    imaginary = q;
}

    Complex Complex:: operator +(Complex& y){
        Complex addition(this->real +y.real, this->imaginary + y.imaginary);
    }

    Complex Complex:: operator -(Complex& y){
        Complex Subtraction(this->real -y.real, this->imaginary - y.imaginary);
    }
    
    Complex Complex:: operator *(Complex& x, Complex& y){
        Complex Multiply(this->real*y.imaginary-this->imaginary*y.real, this->imaginary *y.real + this->real * y.imaginary);
        
    }
        
    std::istream&  operator >> (std::istream& in1, Complex& p){
        in1 >> p.real;
        getchar();
        in1 >> p.imaginary;
        return in1;   
    }

    std::ostream&  operator << (std::ostream& out, const Complex& p){
        if (p.imaginary > 0){
            out << p.real << '+' << p.imaginary << 'i';
        } 
        else if(p.imaginary < 0){
            out << p.real << p.imaginary << 'i';
        }
        else {
            out << p.real;
        }
        return out;

    }

Complex::~Complex() 
{ 
}
