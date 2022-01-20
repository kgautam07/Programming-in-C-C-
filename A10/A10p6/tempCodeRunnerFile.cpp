/*
CH-230-A
a10_p5.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.cpp"
using namespace std;

int main(int argc, char** argv)
{
	Critter Cr1;
	Critter Cr2("Levinho");
    Critter Cr3("Levinho", 5, 23, 5.8);
    Critter Cr4("Levinho", 6, 12);
    Critter Cr5("Levinho", 5 , 6, 7.5, 8.5);
    Cr3.setHunger(2);