/*
CH-230-A
a10_p5.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;
   
public: // business logic methods are public
     //Constructors
	Critter();
    Critter (std::string);
	Critter(std::string, int, int, double = 10);

	//setter methods
    void setHeight(double newHeight);
	void setName(std::string& newName);
	void setHunger(double newHunger);
	void setBoredom(int newBoredom);
	
	// getter method
	std::string getName();
	int getHunger();
	int getBoredom();
	double getHeight();
	int gethunger_i();
	double gethunger_d(int);
	 
	
	void print();
};