/*
CH-230-A
a11_p1.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <string>

class Box
{
    private:
    double height;
    double width;
    double depth;

    public:
    //setters
    void setHeight(double newHeight);
    void setWidth(double newWidth);
    void setDepth(double newDepth);
    //getters
    double getHeight();
    double getWidth();
    double getDepth();

    Box(); //default constructor
    Box(double, double, double); //constructor with parameters
    Box(const Box&x); //copy constructor
    ~Box();//destructor

    void print();





};