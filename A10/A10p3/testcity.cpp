/*
CH-230-A
a10_p3.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	City Bremen, Paris, London;
    string name1; // name of three cities
    string name2;
    string name3;
    int n1;  //no of inhabitants of first city
    string mayor1; // mayor of first city
    int area1; // area of first city
    cout <<"Enter the name of the cities:" << endl;
    getline(cin, name1);
    getline(cin, name2);
    getline(cin, name3);
    //getting details of first city;
    cout << "Details for " << name1 << endl;
    Bremen.setName(name1);
    cout << "Name of mayor: ";
    getline(cin, mayor1);
    Bremen.setMayor(mayor1);
    cout << "No. of inhabitants: ";
    cin >> n1;
    Bremen.setPeople(n1);
    cout<< "Area: ";
    cin>> area1;
    Bremen.setArea(area1);

    int n2; // no of inhabitants of second city
    string mayor2; // mayor of second city
    double area2; // area of second city
    //getting details of second city
    cout << "Details for "<< name2 << endl;
    Paris.setName(name2);
    cout << "Name of mayor: ";
    getchar();
    getline(cin, mayor2);
    Paris.setMayor(mayor2);
    cout << "No. of inhabitants: ";
    cin >> n2;
    Paris.setPeople(n2);
    cout<< "Area: ";
    cin>> area2;
    Paris.setArea(area2);

    int n3; //no of inhabitants of third city
    string mayor3; //mayor of third city
    double area3; // area of third city
    //getting details of third city
    cout << "Details for "<< name3 << endl; 
    London.setName(name3);
    cout << "Name of mayor: ";
    getchar();
    getline(cin, mayor3);
    London.setMayor(mayor3);
    cout << "No. of inhabitants: ";
    cin >> n3;
    London.setPeople(n3);
    cout<< "Area: ";
    cin>> area3;
    London.setArea(area3);

    cout << "You have created:" << endl;
	Bremen.print();
    Paris.print();
    London.print();
        return 0;
}
    