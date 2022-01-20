/*
CH-230-A
a10_p2.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"
#include "string"
using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	cout << "My height is " << height << "." << endl;
	cout << "I have  "<< money << " euro."<< endl;
}
void Critter::setHeight(double newHeight){
	height = newHeight;
}
void Critter::setMoney(double newMoney){
	money = newMoney;
}


double Critter::getMoney(){
	return money;
}
	
int Critter::getHunger() {
	return hunger;
}
double Critter::getHeight(){
	return height;
}