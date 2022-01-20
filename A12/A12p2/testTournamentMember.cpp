/*
CH-230-A
a12_p2.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <string>

#include "TournamentMember.h"

using namespace std;

int main(int argc, char** argv){
    TournamentMember Team1("Christiano","Ronaldo","1980-07-15","Male",5.11);
    Team1.print();
    Team1.newLocation("Portugal");
    Team1.print();
    TournamentMember Copy(Team1);
    Copy.print();
}


