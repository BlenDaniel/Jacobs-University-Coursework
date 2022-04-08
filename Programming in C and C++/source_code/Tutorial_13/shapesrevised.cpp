/* See shapes revised.h. Almost all the methods are less than 3 lines long.
   You should now be familiar with constructor related syntax, which could
   be the onsly obscure thing */

#include <iostream>
#include "shapesrevised.h"

using namespace std; 


Shape::Shape(const string& n) : name(n) {
	visible = false;
}

Shape::Shape() : name("") {
	visible = false;
}

Shape::Shape(const Shape& src) : name(src.name) {
	visible = src.visible;
}

Shape::~Shape() {}

void Shape::printName() const {
	cout << name << endl;
}

centeredShape::centeredShape(const string&n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

centeredShape::centeredShape() : Shape() {
	x = y = 0;
}

centeredShape::centeredShape(const centeredShape& src) : Shape(src.getName()) {
	x = src.x;
	y = src.y;
}


RegularPolygon::RegularPolygon(const string&n, double nx, double ny, int nl) :
	centeredShape(n,nx,ny) {
	edgesNumber = nl;
}

RegularPolygon::RegularPolygon() : centeredShape("REGULAR POLYGON",0,0) {
	edgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon& src) : centeredShape(src.name,src.x,src.y) {
	edgesNumber = src.edgesNumber;
}

void RegularPolygon::draw() {
	visible = true;
	cout << "Drawing a regular polygon" << endl;
}

void RegularPolygon::erase() {
	visible = false;
	cout << "Erasing a regular polygon" << endl;
}

RegularPolygon::~RegularPolygon() {
	if (visible)  // erase it, but only if is visible
	erase();
}


Circle::Circle(const string&n, double nx, double ny, double r) : 
	centeredShape(n, nx, ny) {
	radius = r;
}

Circle::Circle() : centeredShape("Circle", 0, 0) {
	radius = 0;
}

Circle::Circle(const Circle& src) : centeredShape(src.name, src.x, src.y) {
	radius = src.radius;
}

Circle::~Circle() {
	if (visible)
	erase();
}

void Circle::draw() {
	visible = true;
	cout << "Drawing a Circle" << endl;
}

void Circle::erase() {
	visible = false;
	cout << "Erasing a Circle" << endl;
}
