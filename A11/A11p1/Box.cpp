/*
CH-230-A
a11_p1.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include "Box.h"
#include <iostream>


    void Box::setHeight(double newHeight)
    {
        height = newHeight;
    }

    void Box::setWidth(double newWidth)
    {
        width = newWidth;
    }

    void Box::setDepth(double newDepth)
    {
        depth = newDepth;
    }

    double Box::getHeight()
    {
        return height;
    }

    double Box::getWidth()
    {
        return width;
    }

    double Box::getDepth()
    {
        return depth;
    }

    Box::Box(){
      height = 0;
      width = 0;
      depth = 0;
    }

    Box::Box(double newHeight, double newDepth, double newWidth){
        height = newHeight;
        depth = newDepth;
        width = newWidth;
    }

    Box::Box(const Box&x){
        height = x.height;
        width =x.width;
        depth = x.depth;
    }

    void Box::print()
    {
        std::cout << "The volume of box is " << height*width*depth << std::endl;
        std::cout<<"------------------------------------------" << std::endl;
    }


   Box::~Box(){
        
    }
