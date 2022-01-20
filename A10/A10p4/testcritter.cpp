/*
CH-230-A
a10_p4.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"
using namespace std;

int main(int argc, char** argv)
{
	Critter Cr1;
	Critter Cr2("Levinho");
    Critter Cr3("Levinho", 5, 23, 5.8);
    Critter Cr4("Levinho", 21, 12);
    Cr1.print();
    Cr2.print();
    Cr3.print();
    Cr4.print();

    return 0;
}