/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std;

/* Default constructor */
Shape::Shape() : name("DefaultValue") {}
/* Parameteric constructor */
Shape::Shape(const string &n) : name(n) {}
/* Copy constructor */
Shape::Shape(const Shape &src) : name(src.name) {}
/*Service method */
void Shape::printName() const { cout << name << endl; }
/* Destructor */
Shape::~Shape() { cout << "Destructor has been called on Shape" << endl; }
/* Parameteric constructor */
CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
    x = nx;
    y = ny;
}
/* Copy constructor */
CenteredShape::CenteredShape(const CenteredShape &src) : Shape(src)
{
    x = src.x;
    y = src.y;
}
/* Destructor */
CenteredShape::~CenteredShape() { cout << "Destructor has been called on CenteredShape" << endl; }
/* Parameteric Constructor */
RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) : CenteredShape(n, nx, ny) { EdgesNumber = nl; }
/* Copy constructor */
RegularPolygon::RegularPolygon(const RegularPolygon &src) : CenteredShape(src) { EdgesNumber = src.EdgesNumber; }
/* Default Constructor */
RegularPolygon::RegularPolygon() : CenteredShape("Default_Value_RegularPolygon", 0, 0)
{
    EdgesNumber = 0;
    cout << "Default constructor has been called on RegularPolygon" << endl;
}
/* Destructor */
RegularPolygon::~RegularPolygon() { cout << "Destructor has been called on RegularPolygon" << endl; }
/* Centershape */
Circle::Circle(const string &n, double nx, double ny, double r) : CenteredShape(n, nx, ny) { Radius = r; }
/* Destructor */
Circle::~Circle() { cout << "Destructor has been called on Circle" << endl; }

/* Hexagon Implementation */
/* Dafault constructor */
Hexagon::Hexagon() : RegularPolygon("Hexagon", 0, 0, 6), color("Default_color"), side(6) { cout << "Calling the Default constructor" << endl; }
/* Parameteric constructor */
Hexagon::Hexagon(const string &n, double nx, double ny, const std::string &nc, double ns) : RegularPolygon(n, nx, ny, 6)
{
    color = nc;
    side = ns;
}
/* Copy constructor */
Hexagon::Hexagon(const Hexagon &src) : RegularPolygon(src)
{
    color = src.color;
    side = src.side;
    cout << "Copy constructor has been called on Hexagon" << endl;
}
/* Destructor */
Hexagon::~Hexagon() { cout << "Destructor has been called on Hexagon" << endl; }
/* Getter methods */
string Hexagon::getColor() const { return color; }
double Hexagon::getSide() const { return side; }
/* Setter methods */
void Hexagon::setColor(const string &nc) { color = nc; }
void Hexagon::setSide(const double ns) { side = ns; }
/* Getting the perimeter of a hexagon */
double Hexagon::perimeter() const { return (6 * side); }
/* Getting the area of a hexagon */
double Hexagon::area() const { return ((3 * sqrt(3)) / 2) * side * side; }