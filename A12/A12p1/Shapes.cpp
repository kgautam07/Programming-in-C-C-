/*
CH-230-A
a12_p1.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>
#include<math.h>


using namespace std; 


Shape::Shape(const string& n) : name(n) {
}
Shape::Shape(){
}
Shape::Shape(const Shape& S){
  name = S.name;
}
void Shape::printName() const {
	cout << name << endl;
}
void Shape::setName(std::string newName){
  name = newName;
}
std::string Shape::getName(){
      return name;
}

/*--------------------Centered Shape------------------*/
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
CenteredShape::CenteredShape(){
}
CenteredShape::CenteredShape(const CenteredShape& a){
  x = a.x;
  y = a.y;
}
void move(double, double);	// moves the shape, i.e. it modifies it center
void CenteredShape::setX(double newX){
  x= newX;
}
void CenteredShape::setY(double newY){
  y = newY;
}
int CenteredShape::getX(){
      return x;
    }
int CenteredShape::getY(){
  return y;
}

/*--------------------Regular polygon------------------*/
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(){}
RegularPolygon::RegularPolygon(const RegularPolygon& P){
EdgesNumber = P.EdgesNumber;
}
void RegularPolygon::setEdgesNumber(int newEdgesNumber){
  EdgesNumber = newEdgesNumber;
}
int RegularPolygon::getEdgesNumber(){
      return EdgesNumber;
    }

/*--------------------Hexagon------------------*/

Hexagon::Hexagon(const std::string& n, double nx, double ny, double nside)
:RegularPolygon(n, nx, ny, 4)
{
            side = nside;
           
        }
Hexagon::Hexagon()
{
}
Hexagon::Hexagon(const Hexagon& H){
    side = H.side;
}

void Hexagon::setside(double newside){
      side = newside;
    }
void Hexagon::setColour( std::string newColour){
    Colour = newColour;
}
double Hexagon::getside(){
      return side;
   }
std::string Hexagon::getColour(){
    return Colour;
}

double Hexagon::perimeter()
{
      return 6*side ;
}
double Hexagon::area()
{
       return (3*sqrt(3))/2*side*side;
    }

Hexagon::~Hexagon(){  //destructor being called
  cout << "destructor is called" <<endl;
}
    
/*--------------------Circle------------------*/

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{ 
  radius = r;
}

		Circle::Circle()
    {}
		Circle::Circle(const Circle& C){
      radius = C.radius;
    }
		void Circle::setRadius(double newRadius){
      radius = newRadius;
    }
		double Circle::getRadius(){
      return radius;
    }
		double Circle::perimeter(){
    return  2 * M_PI * radius ;
    }
		double Circle::area(){
      return M_PI* radius * radius ;
    }
    









    