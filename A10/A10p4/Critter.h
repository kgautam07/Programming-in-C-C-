/*
CH-230-A
a10_p4.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
   
public: // business logic methods are public
    //Constructors
	Critter();
    Critter(std::string);
	Critter(std::string, int, int, double = 10);
	
	void print();
};