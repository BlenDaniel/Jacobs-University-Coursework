/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape
{					  // base class
private:			  // private access modifier: could also be protected
	std::string name; // every shape will have a name
public:
	Shape(const std::string &); // builds a shape with a name
	Shape();					// empty shape
	Shape(const Shape &);		// copy constructor
	~Shape();					// destructor
	void printName() const;		// prints the name
	std::string getName() const;
	void setName(const std::string &);
};

class CenteredShape : public Shape
{ // inherits from Shape
private:
	double x, y; // the center of the shape
public:
	CenteredShape(const std::string &, double, double); // usual three constructors
	CenteredShape();									// empty CenteredShape
	CenteredShape(const CenteredShape &);				// copy constructor
	~CenteredShape();									// destructor
	void move(double, double);							// moves the shape, i.e. it modifies it center
	double getX() const;
	double getY() const;
	void setX(const double);
	void setY(const double);
};

class RegularPolygon : public CenteredShape
{ // a regular polygon is a centered_shape with a number of edges
private:
	int EdgesNumber; // the edge number of a regular polygon
public:
	RegularPolygon(const std::string &, double, double, int); // usual four constructors
	RegularPolygon();										  // empty RegularPolygon
	RegularPolygon(const RegularPolygon &);					  // copy constructor
	~RegularPolygon();										  // destructor
	int getENum() const;
	void setENum(const int);
};

class Circle : public CenteredShape
{ // a Circle is a shape with a center and a radius
private:
	double Radius;

public:
	Circle(const std::string &, double, double, double); // usual three constructors
	Circle();											 // empty Circle
	Circle(const Circle &);								 // copy constructor
	~Circle();											 // destructor
	double Perimeter() const;							 // getting the perimeter of a circle
	double Area() const;								 // getting the area of a circle
	double getRadius() const;
	void setRadius(const double);
};

class Rectangle : public RegularPolygon
{ // a Rectangle is a regular polygon with a number of edges
private:
	double length;
	double height;

public:
	Rectangle(const std::string &, double, double, int, double, double); // usual six constructors
	Rectangle(const std::string &, double, double, double, double);		 // another constructor with five parameters only
	Rectangle();														 // empty Rectangle
	Rectangle(const Rectangle &);										 // copy constructor
	~Rectangle();														 // destructor
	double Perimeter() const;											 // getting the perimeter of a Rectangle
	double Area() const;												 // getting the area of a Rectangle
	double getLength() const;
	double getHeight() const;
	void setLength(const double);
	void setHeight(const double);
};

class Square : public Rectangle
{ // a Square is a Rectangle with a equal length of all edges
private:
	int side;

public:
	Square(const std::string &, double, double, double, int, int, int, int); // usual eight constructors
	Square(const std::string &, double, double, double);					 // another constructor with four parameters only
	Square();																 // empty Square
	Square(const Square &);													 // copy constructor
	~Square();																 // destructor
																			 // Since square has a parent class of rectangle
																			 // then the methods to get perimeter and area are in here as well
	int getSide() const;
	void setSide(const int);
};

#endif