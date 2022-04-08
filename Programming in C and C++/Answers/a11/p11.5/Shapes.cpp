/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std; 

/* pi */
# define M_PI 3.141592653589793238462643383279502884L

/* Implementation of Shape */
Shape::Shape(const string& n) : name(n) {
    cout << "Parametric constructor has been called on Shape" << endl;
}

/* Shape Default Value */
Shape::Shape() : name("Default_Value_Shape"){
    cout << "Default constructor has been called on Shape" << endl;
}

/* Destructor for shape */
Shape::~Shape() {
    cout << "Destructor has been called on Shape" << endl;
}

/* Copy constructor */
Shape::Shape(const Shape &s){
    name = s.name;
    cout << "Copy constructor has been called on Shape" << endl;
}

void Shape::printName() const {
	cout << name << endl;
}

/* Getter method implementation */
std::string Shape::getName() const{
    return name;
}

/* Setter method implementation */
void Shape::setName(const std::string& newName){
    name = newName;
}


/* Implementation of CenteredShape */
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
    cout << "Parametric constructor has been called on CenteredShape" << endl;
}

CenteredShape::CenteredShape(): Shape("Default_Value_CenteredShape"){
    x = 0;
    y = 0;
    cout << "Default constructor has been called on CenteredShape" << endl;
}

/* Destructor for CenteredShape */
CenteredShape::~CenteredShape() {
    cout << "Destructor has been called on CenteredShape" << endl;
}

/* Copy constructor */
CenteredShape::CenteredShape(const CenteredShape &s) : Shape(s.getName()){
    x = s.x;
    y = s.y;
    cout << "Copy constructor has been called on CenteredShape" << endl;
}

void CenteredShape::move(double x, double y){
    cout << "Centered Shape is moving to an x value of " << x << " and y value of " << y << endl;
}

/* Getter method implementation */
double CenteredShape::getX() const{
    return x;
}
double CenteredShape::getY() const{
    return y;
}

/* Setter method implementation */
void CenteredShape::setX(const double nx){
    x = nx;
}
void CenteredShape::setY(const double ny){
    y = ny;
}

/* Implementation of RegularPolygon */
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
    cout << "Parametric constructor has been called on RegularPolygon" << endl;
}

RegularPolygon::RegularPolygon(): CenteredShape("Default_Value_RegularPolygon", 0, 0) {
    EdgesNumber = 0;
    cout << "Default constructor has been called on RegularPolygon" << endl;
}

/* Destructor for RegularPolygon */
RegularPolygon::~RegularPolygon() {
    cout << "Destructor has been called on RegularPolygon" << endl;
}

/* Copy constructor */
RegularPolygon::RegularPolygon(const RegularPolygon &r) : CenteredShape(r.getName(), r.getX(), r.getY()){
   EdgesNumber = r.EdgesNumber;
    cout << "Copy constructor has been called on RegularPolygon" << endl;
}



/* Getter method implementation */
int RegularPolygon::getENum() const{
    return EdgesNumber;
}

/* Setter method implementation */
void RegularPolygon::setENum(const int n){
    EdgesNumber = n;
}

/* Implementation of Circle */
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n, nx, ny) 
{
	Radius = r;
    cout << "Parametric constructor has been called on Circle" << endl;
}

Circle::Circle() : CenteredShape("Default_Value_Circle", 0, 0)  {
    Radius = 0;
    cout << "Default constructor has been called on Circle" << endl;
}

/* Destructor for Circle */
Circle::~Circle() {
    cout << "Destructor has been called on Circle" << endl;
}

/* Copy constructor */
Circle::Circle(const Circle &r) : CenteredShape(r.getName(), r.getX(), r.getY()){
   Radius = r.Radius;
    cout << "Copy constructor has been called on Circle" << endl;
}

/* Getter method implementation */
double Circle::getRadius() const{
     return Radius;
}

/* Setter method implementation */
void Circle::setRadius(const double r){
    Radius = r;
}
/* Getting the perimeter of a circle */
double Circle::Perimeter() const{
    double p = 2*M_PI*Radius;
	return p;
}

/* Getting the area of a circle */
double Circle::Area() const{
    double a = M_PI*Radius*Radius;
	return a;
}


/* Rectangle constructor */
Rectangle::Rectangle(const string& n, double nx, double ny, int nl, double l, double h) : 
  RegularPolygon(n, nx, ny, nl) 
{
	length = l;
    height = h;
    cout << "With every parametric constructor has been called on Rectangle" << endl;
}
Rectangle::Rectangle(const std::string& n, double nx, double ny, double nwidth, double nheight) :
    RegularPolygon(n, nx, ny, 4)
{
    cout << "Parametric constructor has been called on Rectangle" << endl;
}

Rectangle::Rectangle(): RegularPolygon("Default_Value_Rectangle", 0, 0, 4){
    length = 0;
    height = 0;
    cout << "Default constructor has been called on Rectangle" << endl;
}

/* Destructor for Rectangle */
Rectangle::~Rectangle() {
    cout << "Destructor has been called on Rectangle" << endl;
}

/* Copy constructor */
Rectangle::Rectangle(const Rectangle &r) : RegularPolygon(r.getName(), r.getX(), r.getY(), r.getENum()){
    length = r.length;
    height = r.height;
    cout << "Copy constructor has been called on Rectangle" << endl;
}
/* Getter method implementation */
double Rectangle::getLength() const{
    return length;
}
double Rectangle::getHeight() const{
    return height;
}
/* Setter method implementation */
void Rectangle::setLength(const double newLength){
    length = newLength;
}
void Rectangle::setHeight(const double newHeight){
    height = newHeight;
}

/* Getting the perimeter of a Rectangle */
double Rectangle::Perimeter() const{
    double p = 2 * ( length + height)  ;
	return p;
}

/* Getting the area of a Rectangle */
double Rectangle::Area() const{
    double a = length * height;
	return a;
}


/* Square constructor */
Square::Square(const string& n, double nx, double ny, double r, int nl, int l, int h, int s) : 
  Rectangle(n, nx, ny, nl, l, h) {
	side = s;
    cout << "With every parametric constructor has been called on Square" << endl;
}


Square::Square(const string& n, double nx, double ny, double nside) : Rectangle(n, nx, ny, nside, nside) {
    cout << "Parametric constructor has been called on Square" << endl;
}

Square::Square() :  Rectangle("Default_Value_Square", 0, 0, 4, 0, 0) {
    side = 0;
    cout << "Default constructor has been called on Square" << endl;
}

/* Copy constructor */
Square::Square(const Square &r) : Rectangle(r){
    side = r.side;
    cout << "Copy constructor has been called on Square" << endl;
}

/* Destructor for Square */
Square::~Square() {
    cout << "Destructor has been called on Square" << endl;
}

/* Getter method implementation */
int Square::getSide() const{
    return side;
}

/* Setter method implementation */
void Square::setSide(const int newSide){
    side = newSide;
}