/*
CH-230-A
a12_p2.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <cstring>

#include "TournamentMember.h"

using namespace std;
//empty constructor
TournamentMember::TournamentMember(){
    cout << "Empty constructor is being called" << endl;
}
//parametric constructor
TournamentMember::TournamentMember(const char newFirstname[36], const char newLastname[36], const char newBirthdate[11],
    const std::string newGender, const double newHeight){
        cout << "Parametric constructor is being called" << endl;
        strcpy(firstname, newFirstname);
        strcpy(lastname, newLastname);
        strcpy(birthdate, newBirthdate);
        gender = newGender;
        height = newHeight;
    }
//copy constructor
TournamentMember::TournamentMember(const TournamentMember& T){
    cout << "Copy constructor is being called" << endl;
        strcpy(firstname, T.firstname);
        strcpy(lastname, T.lastname);
        strcpy(birthdate, T.birthdate);
        gender = T.gender;
        height = T.height;
}

void TournamentMember::print(){
    cout << "Details of the Person:" << endl;
    cout <<"---------------------------------------" <<endl;
    cout <<"First Name: " << firstname << endl;
    cout <<"Last Name: " << lastname<< endl;
    cout <<"Date of Birth: " << birthdate << endl;
    cout <<"Gender: " << gender << endl;
    cout <<"Height: " << height << endl;
    cout <<"Location: " << location << endl;
    cout <<"---------------------------------------" <<endl;

}   

string TournamentMember::location;

void TournamentMember::newLocation(const string newlocation){
    location = newlocation;
}

TournamentMember::~TournamentMember(){
    cout<<"Destructor is being called" << endl;
}