/*
CH-230-A
a10_p3.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <string> // defines standard C++ string class

class City
{
    private:
    std::string name;
    int n;
    std::string mayor;
    double area;
    

    public:
    //setter
    void setName(std::string& newName);
    void setPeople(int newPeople);
    void setMayor(std::string& newMayor);
    void setArea(double newArea);
    //getter
    std::string getName();
    int getPeople();
    std::string getMayor();
    double getArea();


    void print();



};