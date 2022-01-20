/*
CH-230-A
a9_p4.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
//first overloaded function to compute the difference 
//between the second and first parameter
int mycount(int first, int second){
    return second - first;
}
//second overloaded function that counts the number of occurrences of a 
//character if a character and a string are passed.
int mycount(char ch, string apex){
    int count = 0;
    /*Loop until end of string*/;
    for ( int idx = 0; apex[idx] != '\0'; idx++){
    if(apex[idx] == ch){  //condition applied    
     count++;
    }
  }
     return count;
}
    
int main(){
    int a, b;
    cin>> a>> b;//input of integers
    char ch;
    cin >> ch; //input of character 
    getchar();
    string data;
    getline (cin, data);//input string
    cout << mycount(a, b) << endl;
    cout << mycount(ch ,data) << endl;
    return 0;
}

    