/*
CH-230-A
a12_p1.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
#include<math.h>
using namespace std;
int main(int argc, char** argv) {

  
  Hexagon B("Blue Hexagon",0,0,9);
  Hexagon G("Green Hexagon",0,0,15);
  Hexagon Copied(G);
  
  B.printName();
  cout << "Area of Hexagon: "<< B.area() << endl;
  cout << "Perimeter of Hexagon: " << B.perimeter() << endl;
  cout<<"--------------------------------------------"<< endl;
  
  G.printName();
  cout << "Area of Hexagon: "<< G.area() << endl;
  cout << "Perimeter of Hexagon: " << G.perimeter() << endl;
  cout<<"--------------------------------------------"<< endl;

//using copy constructor
  G.printName();
  cout << "Area of Hexagon: "<< Copied.area() << endl;
  cout << "Perimeter of Hexagon: " << Copied.perimeter() << endl;
  cout<<"--------------------------------------------"<< endl;

return 0;
}
  