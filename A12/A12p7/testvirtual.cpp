/*
CH-230-A
a12_p6.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 6;
int main() {
	Area *list[num_obj];	// (1)list is the array derived from class Area
	int index = 0;				// (2)index is initialized to 0
	double sum_area = 0.0;			// (3)sum area is initialized to 0
	double sum_perimeter = 0.0;		//perimeter is also initialized to 0
	cout << "Creating Ring: ";							
	Ring blue_ring("BLUE", 5, 2);	//(4)Ring named BLUE is created with
	cout << "Creating Circle: ";	// outer radius 5 and innerradius 2
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	list[0] = &blue_ring;				// (5) blue ring is pointed by first
	list[1] = &yellow_circle;			//element of the array
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	while (index < num_obj) {			// (7) while loop to get the total 
		(list[index])->getColor();		//area and the perimeter
		double area = list[index++]->calcArea();// (8) calculates the area
		double perimeter=list[index++]->calcPerimeter();//calculates perimeter
		sum_area += area;
		sum_perimeter += perimeter;
	}
	cout << "\nThe total area is "
		<< sum_area << " units " << endl;//(9)total area is printed
	cout << "The total perimeter is "
		<< sum_perimeter << "units" << endl;//total perimeter  is printed
	return 0;
}





/*********************************************************************************************
 * 									-------------											 
 * 									|   Area	|											 
 * 									-------------											 
 * 									/			\
 * 								   /			 \
 * 					---------------				  --------------	
 * 					|   Circle	  |				  |  Rectangle  |
 * 					---------------				  ---------------
 * 						   |							 |
 * 						   |							 |
 * 					----------------			  ---------------
 * 					|	  Ring    	|			  |	  Square	|
 * 					-----------------			  ---------------
 * 
 * 
 * 
 *********************************************************************************************/