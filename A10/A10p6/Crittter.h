/*
CH-230-A
a10_p6.cpp
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
    double thirst;
   
public: // business logic methods are public
     //Constructors
	Critter();
    Critter (std::string);
	Critter(std::string, int, int, double = 10);
    Critter(std::string, int, int, double, double);

	//setter methods
    void setHeight(double newHeight);
	void setName(std::string& newName);
	void setHunger(double newHunger);
	void setBoredom(int newBoredom);
    void setThirst(double newThirst);
	
	// getter method
	std::string getName();
	int getHunger();
	int getBoredom();
	double getHeight();
	double gethunger_d(int);
	int gethunger_i();	
    double getThirst();
	 
	
	

	
	void print();
};