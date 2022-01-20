/*
CH-230-A
a12_p5.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}
std::ostream& operator << (std::ostream& out, const Fraction& f){

	std::cout << f.num << "/" << f.den << std::endl;
    return out;
}
std::istream& operator >> (std::istream& in, Fraction& f){
    std::cout << "Enter numerator of the fractional number: ";
    std::cin >> f.num;
    std::cout << "Enter denominator of the fractional number: ";
    std::cin >> f.den;
    if (f.den == 0){
        std::cout << "Some error occured" << std::endl;
        exit(0);
    }
    return in;
}

// multiplication
Fraction Fraction::operator * (const Fraction& first){
    if (this->den == 0 || first.den == 0){ //if either of denominator is 0.Can't multiply
        exit(1);
    }
    Fraction res(this->num*first.num, this->den * first.den);
    return res;
}

//division
Fraction Fraction::operator / (const Fraction& first){
    if (this->den == 0 || first.den == 0){//if either of denominator is 0.Can't divide
        exit(1);
    }
    Fraction res(this->num*first.den,this->den*first.num);
    return res;
}

//addition
Fraction Fraction::operator + (const Fraction& first){
    if (this->den == 0 || first.den == 0){//if either of denominator is 0.Can't add
        exit(1);
    }
    Fraction res(this->num*lcm(this->den,first.den)/this->den + first.num*this->lcm(this->den, first.den)
    /first.den, this->lcm(this->den, first.den));
    return res;
}

//subtraction
Fraction Fraction::operator - (const Fraction& first){
    if (this->den == 0 || first.den == 0){//if either of denominator is 0.Can't subtract
        exit(1);
    }
    Fraction res(this->num*lcm(this->den,first.den)/this->den - first.num*this->lcm(this->den, first.den)
    /first.den, this->lcm(this->den, first.den));
    return res;
    }

//assigning
Fraction& Fraction::operator = (const Fraction& first){
    this->num = first.num;
    this->num = first.den;
    return *this;
}

//conparison with >
bool Fraction::operator > (const Fraction& first){
if(this->num*first.den > first.num*this->den){
    return true;
}
else {
    return false;
}

}
	
//comparison with <
bool Fraction::operator < (const Fraction& first){
if(this->num*first.den < first.num*this->den){
    return true;
}
else {
    return false;
}

}
