/*
CH-230-A
a10_p6.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include "Crittter.h"

using namespace std;
     Critter::Critter(){
        name = "default_critter";
        height = 5;
        hunger = 0;
        boredom = 0;
        thirst = hunger;
    }
    Critter::Critter(std::string newName){
        name = newName;
        height = 5;
        hunger = 0;
        boredom = 0;
        thirst = hunger;
    }
	Critter::Critter(std::string newName, int newHunger, int newBoredom ,double newHeight){
        name = newName;
        hunger = gethunger_d(newHunger);
        boredom = newBoredom;
        height = newHeight;
        thirst = hunger;
    }

    Critter::Critter(std::string newName, int newHunger, int newBoredom, double newHeight, double newThirst){
        name = newName;
        hunger = gethunger_d(newHunger);
        boredom = newBoredom;
        height = newHeight;
        thirst = newThirst;
        newThirst = hunger;
    }


void Critter::setName(string& newName) {
	name = newName;
}

void Critter::setHunger(double newHunger) {
	hunger = gethunger_d(newHunger);
}

void Critter::setHeight(double newHeight){
	height = newHeight;
}

void Critter::setBoredom(int newBoredom){
	boredom = newBoredom;
	}
void Critter::setThirst(double newThirst){
    thirst = newThirst;
}
 void Critter::print() {
cout << "I am " << name << ". My hunger level is " << gethunger_i() << "." << endl;
cout << "My boredom is " << boredom << ". My height is " << height << "." << endl;
cout << "My thirst is " << thirst << endl;
cout << endl;
}

std::string Critter::getName(){
    return name;
}

int Critter::getHunger() {
	return hunger;
}

double Critter::getHeight(){
    return height;
}

int Critter::getBoredom(){
    return boredom;
}

int Critter::gethunger_i(){
    return (hunger*10);

}
double Critter::gethunger_d(int hunger){
    return (double)hunger/10;
}

double Critter::getThirst(){
    return thirst;
}



