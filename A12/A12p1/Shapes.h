/*
CH-230-A
a12_p1.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
		void setName(std::string newName);
		std::string getName();
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		void setX(double newX);
		void setY(double newY);
		int getX();
		int getY();
		
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;					
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();						//default constructor
		RegularPolygon(const RegularPolygon&);  //copy constructor
		void setEdgesNumber(int newEdgesNumber);//setter method
		int getEdgesNumber();					//getter method
		
};
class Hexagon : public RegularPolygon{ //inherited from Regular polygon
    private:
        double side;
        std::string Colour;
    public:
        Hexagon(const std::string& n, double nx, double ny, double nside);					//parametric constructor
        Hexagon();						//empty constructor
		~Hexagon();						//destructor
        Hexagon(const Hexagon&);		//copy constructor
		void setside(double newside);     //setter method
        void setColour(std::string newColour); //setter method
		double getside();					//getter method
        std::string getColour();			//getter method
		double perimeter();					//for perimeter
		double area();                      //for area
        						
							
};


class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();						//parametric constructor
		Circle(const Circle&);			//copy constructor
		void setRadius(double newRadius); //setter method
		double getRadius();				//getter method
		double perimeter();				//for perimeter
		double area();					//for area
		// void Cprint();
};
  
#endif