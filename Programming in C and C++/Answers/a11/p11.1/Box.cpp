/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "Box.h"
#include <iomanip>

using namespace std;

/* 
    First constructor that sets default values for every 
    property of a Box object 
*/
Box::Box(){
    height = width = depth = 0;
    cout << "Default constructor is called" << endl;
} 
/* 
    Second constructor that sets default values 
    for all property of a Box object
*/
Box::Box(double newHeight, double newWidth, double newDepth): height(newHeight), width(newWidth), depth(newDepth){
    cout << "Parametric constructor is called" << endl;
}

/* Copy constructor Method */
Box::Box(const Box& src) {
    height = src.height;
    width = src.width;
    depth = src.depth;
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
    cout << "Copy Constructor is being called" << endl;
}

/* Destructor Method */
Box::~Box() {
	//delete[] str;
	cout << "Empty Destructor has been called" << endl;
}

/* Setter method implementation */
void Box::setHeight(double newHeight) {
	height = newHeight;
}

void Box::setWidth(double newWidth) {
	width = newWidth;
}

void Box::setDepth(double newDepth){
    depth = newDepth;
}

/* Service method implementation */
void Box::print() {	
    cout << "Height is " << fixed << setprecision(2) << height << "." << endl;
    cout << "Width is " << fixed << setprecision(2) <<  width <<"." << endl;
    cout << "Depth is " << fixed << setprecision(2) <<  depth <<"." << endl;
}

/* Volume method implementation */
double Box::volume(){
    return height * width * depth;
}

/* Getter method implementation */
double Box::getHeight(){
    return height;
}

double Box::getWidth(){
    return width;
}

double Box::getDepth(){
    return depth;
}
