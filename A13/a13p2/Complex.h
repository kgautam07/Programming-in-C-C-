/*
CH-230-A
a13_p2.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <cstring>
#include <fstream>

class Complex 
{
    private:
        double real;
        double imaginary;
    
    public:
        //setter
        void setReal(double newreal);
        void setImaginary (double newImaginary);
      
        double getReal () const;
        double getImaginary () const;
        //functions
       
        Complex(); //Default constructor
        Complex (double, double); //constructor with parameters
        Complex operator+(Complex& y);
        Complex operator-(Complex& y);
        Complex operator*(Complex& y);
        friend std::istream&  operator >> (std:istream& in1, Complex& p);
        friend std::ostream&  operator << (std::ostream& out, const Complex& p);

        void operator = (const Complex& p);
        ~Complex(); //Destructor
        void print();

};

inline void Complex::setReal(double newreal){
    real = newreal;
}
inline void Complex::setImaginary(double newImaginary){
    imaginary = newImaginary;
}
inline double Complex::getReal() const{
    return real;
}
inline double Complex::getImaginary() const{
    return imaginary;
}