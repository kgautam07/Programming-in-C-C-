/*
CH-230-A
a10_p2.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int boredom;
	int hunger;
	double height;
	double money;

public: // business logic methods are public
    // setter methods
	
	
	void setName(std::string& newname);
	
	void setBoredom(int newboredom);
	void setHunger(int newhunger);
	void setHeight(double newHeight);
	void setMoney(double newMoney);
	// getter method
	std::string getName;
	int getHunger();
	double getHeight();
	double getMoney();

	// service method
	void print();
};