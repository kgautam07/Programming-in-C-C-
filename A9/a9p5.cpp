/*
CH-230-A
a9_p5.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int  main() {
    string name;
    cout << "Enter your name:" << endl;
    getline (cin, name); //getting players name
    cout << "Welcome to this game Mr. " << name << "!" << endl;
    cout << "You have to choose any number between 1 and 10" << endl;
    cout << "Guess the number:" << endl;
   
    int  die;
    int num;
    int  count = 0;
    int  randomNumber;
    randomNumber = rand();
    // init  random  number  generator
    srand(static_cast <unsigned int >(time (0)));
    die = (randomNumber % 10) + 1;
    while (1) { //loop until the correct number is entered
        cin >> num;
        if (num > die){ //if the number is larger
            cout<< "Your number is larger." << endl << "Please, reenter number"<< endl;
        }
        else if (num < die){ //if the number is smaller
            cout<< "Your number is smaller." << endl << "Please, reenter number"<< endl;
        }
        else if (num == die){ //if the number is correct
            cout << "Congratulations! "<<name<< "! Your number is correct"<< endl;
            cout << "You guessed the correct number in " << count + 1 << " time(s)."<< endl;
            exit(1);
        }
        else
        cout<< "Sorry, your number was wrong" << endl;
        count++;

    }
    return 0;
    }


