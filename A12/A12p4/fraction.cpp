/*
CH-230-A
a12_p4.cpp
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
    if (this->den == 0 || first.den == 0){ //if either denominator is 0.Can't multiply
        exit(1);
    }
    Fraction res(this->num*first.num, this->den * first.den);
    return res;
}

//division
Fraction Fraction::operator / (const Fraction& first){
    if (this->den == 0 || first.den == 0){//if either denominator is 0.Can't divide
        exit(1);
    }
    Fraction res(this->num*first.den,this->den*first.num);
    return res;
}


