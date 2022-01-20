/*
CH-230-A
a10_p2.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	
	double height;
	cout << "Height: ";
	cin >> height;;
	c.setHeight(height);
	
	double money;
	cout << "Money: ";
	cin >> money;
	c.setMoney(money);

	cout << "You have created:" << endl;
	c.print();
        
}







