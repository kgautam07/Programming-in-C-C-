/*
CH-230-A
a10_p4.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
     Critter::Critter(){
        name = "default_critter";
        height = 5;
        hunger = 0;
        boredom = 0;
        cout << "Constructor is called without supplying any parameters" << endl;
    }
    Critter::Critter(std::string newName){
        name = newName;
        height = 5;
        hunger = 0;
        boredom = 0;
        cout << "Constructor is called by only supplying name as parameter" << endl;
    }
	Critter::Critter(std::string newName, int newHunger, int newBoredom ,double newHeight){
        name = newName;
        hunger = newHunger;
        boredom = newBoredom;
        height = newHeight;
        cout << "Constructor is called by supplying name, hunger, ";
        cout<< " boredom and height all as parameters." <<endl;
    }

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
    cout << "My boredom is " << boredom << ". My height is " << height << "." << endl;
    cout << endl;
    }
