/*
CH-230-A
a9_p6.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <iostream>
#include <cmath>
using namespace std;

//overloaded function for integer
int myfirst (int n, int array[]){
    int apex;
    for (int i =  0; i < n; i++) {
        if (array[i] > 0 && (array[i] % 2 == 0)) {
            apex = array[i];
            break;
        }
        else {
            apex = -1;
        }
    }
    return apex;
}

//overloaded function for doubles
double myfirst (int n, double array[]) {
    double apex;
    for (int i = 0; i < n; i++) {
        if (array[i] < 0 && (modf(array[i], &apex) == 0)) {
            return  array[i];
            
        }
    }
    return -1.1;
}
//overloaded function for character
char myfirst (int n, char array[]){
    char flag;
    for (int i = 0; i < n; i++){
        if (array[i]!='a'&&array[i]!='e'&&array[i]!='i'&&array[i]!='o'&&array[i]!='u'){
         flag = array[i];
           break; 
        } 
        else flag = '0'; 
    }
   return flag; 
}

int main(){
    int n1;
    int n2;
    int n;
    //this is for arrayay of integers
    cout << "Enter the size of integers:" << endl; 
    cin >> n1;
    int ar_int[n1];
    cout<<"Enter the elements:"<< endl;
    for (int i = 0; i < n1; i++) {
        cin >> ar_int[i];
    }
     
    //this is for arrayay of doubles
    cout << "Enter the size of doubles:" << endl;
    cin >> n2;
    double ar_dou[n2];
    cout<<"Enter the elements:"<< endl;
    for (int i = 0; i < n2; i++) {
        cin >> ar_dou[i];
    }
      
    // this is for arrayay of characters
    cout << "Enter the size of characters:" << endl;
    cin >> n;
    cout<<"Enter the elements:"<< endl;
    char ar_char[n];
    for (int i = 0; i < n; i++) {
        cin >> ar_char[i];
        getchar();
    }
    cout << myfirst (n1, ar_int) << endl;
    cout << myfirst (n2, ar_dou) << endl;
     cout << "The first consonant is:" <<myfirst(n, ar_char) << endl;
   
}


























