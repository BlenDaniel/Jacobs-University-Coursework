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

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();
        ~Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
        ~CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
        ~RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
        ~Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon { /* Hexagon is a regularpolygon with addional fields of color and side */
    private:
        std::string color;
        double side;
    public:
        Hexagon(); /* Empty constructor */
        Hexagon(const std::string&, double, double, const std::string&, double); /* Parameteric constructor */
        Hexagon(const Hexagon&); /* Copy constructor */
        ~Hexagon(); /* Copy constructor */
        /* Getter method Implementation */
        std::string getColor() const; 
        double getSide() const;
        /* Setter method Implementation */
        void setColor(const std::string&);
        void setSide(const double);
        /* Serive method Implementation */
        double perimeter() const;
        double area() const;
};
    
#endif