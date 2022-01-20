/*
CH-230-A
a12_p5.cpp
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
    cout << "Division:" << one / two ;
    cout << "Sum:" << one + two ;
    cout << "Difference:" << one - two ;
    if (one > two){
        cout << one <<" is greather than " << two << endl;
    } 
    else if(one < two){
        cout << two << " is greater than " << one << endl;
    }
    else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
	
}

