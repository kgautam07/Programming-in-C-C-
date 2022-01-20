/*
CH-230-A
a12_p4.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction one, two;
    cin >> one >> two;
	cout << "Multiplication:" << one * two ;
    cout << "Division:" << one / two << endl;
    return 0;
	
}

