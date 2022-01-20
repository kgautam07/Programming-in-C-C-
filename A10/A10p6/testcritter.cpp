/*
CH-230-A
a10_p6.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Crittter.h"
using namespace std;

int main(int argc, char** argv)
{
	Critter Cr1;
	Critter Cr2("Levinho");
    Critter Cr3("Levinho", 5, 23, 5.8);
    Critter Cr4("Levinho", 6, 12);
    Critter Cr5("Levinho", 5 , 6, 7.5, 8.5);
    Cr3.setHunger(2);
    Cr4.setHunger(2);
    Cr1.print();
    Cr2.print();
    Cr3.print();
    Cr4.print();
    Cr5.print();


}