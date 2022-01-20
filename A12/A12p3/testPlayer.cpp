/*
CH-230-A
a12_p3.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <string>

#include "TournamentMember.h"

using namespace std;

int main(int argc, char** argv){
   
    Player a("Christiano","Ronaldo","1980-07-15","Male",5.11, 7,"Forward",87,"Right_footed");
    Player b("David","Beckham","1985-09-23","Male",5.6,9,"Mid-Fielder",54,"Right-footed");
    Player c("Alex","Morgen","1990-03-23","Female",5.2,10,"Defender",12,"Left-footed");
    Player::newLocation("Hamburg");
    a.print();
    b.print();
    c.print();
    a.increment(2);
    a.print();

    return 0;
}
