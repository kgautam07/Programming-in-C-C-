/*
CH-230-A
a9_p3.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <iostream>
using namespace std;
//function to get absolute value
 float absolute(float value){
    if(value < 0) //condition applied
        return -value;
    else 
        return value;
    }

int main(){
    float a;
    cin >> a; //getting input from keyboard
    absolute(a);
    //printing the absolute value
    cout<<"The absolute value of the number is: "<< absolute(a) << endl;
    return 0;
}
   




