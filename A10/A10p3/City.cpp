/*
CH-230-A
a10_p3.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include "City.h"
#include "string"
using namespace std;

    void City::setName(string& newName){
    name = newName;

    }   
    void City::setPeople(int newPeople){
        n = newPeople;

    }
    void City::setMayor(string& newMayor){
        mayor = newMayor;

    }
    
    void City::setArea(double newArea){
        area = newArea;
    }
    
    void City::print(){
        cout << "The name of the city is " << name << "." << endl;
        cout << n << " people live there" << "." <<endl;
        cout << "The mayor of the city is " << mayor << "." << endl;
        cout << "The area of the city is " << area << "km^2." << endl;
        cout <<"-------------------------------" <<  endl;
    }

    int City::getPeople(){
        return n;
    }
    string City::getMayor(){
        return mayor;
    }
    double City::getArea(){
        return area;
    }