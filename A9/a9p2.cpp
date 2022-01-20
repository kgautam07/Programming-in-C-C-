/*
CH-230-A
a9_p2.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    double x;
    string s;
    cin >> n >> x >> s;//getting input from keyboard
    
    for(int i=0; i<n; i++){ //using for loop for printing n times
    cout<<s<<":"<<x<<endl;  //printing required output
    }
    
    return 0;
}