/*
CH-230-A
a10_p8.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>

using namespace std;

void Complex::setReal(double newreal) 
{
    real = newreal;
}

void Complex::setImaginary(double newimaginary)
{
    imaginary = newimaginary;
}

double Complex::getReal()
{
    return real;
}

double Complex::getImaginary() 
{
    return imaginary;
}


Complex Complex::Conjugate() {
    Complex conj (real, -imaginary);
    return conj;
}

Complex Complex::Sum(Complex a) 
{
    Complex add(real + a.real, imaginary + a.imaginary);
    return add;
}

Complex Complex::Diff(Complex s) 
{
    Complex difference (s.real - real, s.imaginary - imaginary);
    return difference;
}

Complex Complex::Mult(Complex p) 
{
    Complex prod (real * p.real - imaginary * p.imaginary,
    real * p.imaginary + imaginary * p.real);
    return prod;
}


Complex::Complex() 
{
    real = 0;
    imaginary = 0;
}


Complex::Complex(double rl, double img) 
{
    real = rl;
    imaginary = img;
} 

Complex::Complex(const Complex& c) 
{
    real = c.real;
    imaginary = c.imaginary;
}

void Complex::print() 
{
    cout << noshowpos << real << showpos << imaginary << "i" << endl;
}
Complex::~Complex() 
{ 
}
