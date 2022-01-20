/*
CH-230-A
a9_p7.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
using namespace std;

void swapping(int &a, int &b) { // swap ints
int  apex = a;
a = b;
b = apex;
} 
void swapping(float &x, float &y) {// swap floats
float  apex = x;
x = y;
y = apex; } 

void swapping(const char *&str1, const char *&str2) { // swap char pointers
const char  *apex = str1;
str1 = str2;
str2 = apex;} 

int main(void) {
int a = 7, b = 15;
float x = 3.5, y = 9.2;
const char *str1 = "One";
const char *str2 = "Two";
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
swapping(a, b);
swapping(x, y);
swapping(str1, str2);
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
return 0;
}