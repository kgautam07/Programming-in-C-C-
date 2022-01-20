/*
CH-230-A
a10_p8.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <string>

class Complex 
{
    private:
        double real;
        double imaginary;
    
    public:
        //setter
        void setReal(double newreal);
        void setImaginary (double newimaginary);
        //getter
        double getReal ();
        double getImaginary ();
        //functions
        Complex Conjugate();
        Complex Sum(Complex a);
        Complex Diff(Complex a);
        Complex Mult(Complex a);
        
        Complex(); //Default constructor
        Complex (double, double); //constructor with parameters
        Complex (const Complex&);//Copy constructor
        ~Complex(); //Destructor
        void print();

};