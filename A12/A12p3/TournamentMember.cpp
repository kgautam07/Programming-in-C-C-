/*
CH-230-A
a12_p3.cpp
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
    
}   

string TournamentMember::location = "Bremen";

void TournamentMember::newLocation(const string newlocation){
    location = newlocation;
}

TournamentMember::~TournamentMember(){
    cout<<"Destructor is being called" << endl;
}

Player::Player(){
    cout<<"Empty constructor for player being called" << endl;
}
Player::Player(const char newFirstname[36], const char newLastname[36], const char newBirthdate[11],
    const std::string newGender, const double newHeight, const int newNumber, 
    const char newPosition[20], int newGoal, std::string newFoot) : TournamentMember(newFirstname, newLastname, 
    newBirthdate, newGender, newHeight) {
    number = newNumber;
    strcpy(position, newPosition);
    goal = newGoal;
    foot = newFoot;
}
    
Player::Player(const Player& P) : TournamentMember(P){
    cout << "Copy constructor for player class being called" << endl;
    number = P.number;
    position[20] = P.position[20];
    goal = P.goal;
    foot = P.foot; 
}

void Player::print()const {
    cout << "Details of the Player:" << endl;
    cout <<"---------------------------------------" <<endl;
    cout <<"First Name: " << getFirstname() << endl;
    cout <<"Last Name: " << getLastname()<< endl;
    cout <<"Date of Birth: " << getBirthdate() << endl;
    cout <<"Gender: " << getGender() << endl;
    cout <<"Height: " << getHeight() << endl;
    cout <<"Location: " << getLocation()<< endl;
    cout << "Player number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "No. of goals scored: "<< goal << endl;
    cout << "Foot: " << foot<< endl;
}

void Player::increment(int g){
    goal = goal + g;
}
Player::~Player(){
    cout<< "Destructor is being called" << endl;
}
