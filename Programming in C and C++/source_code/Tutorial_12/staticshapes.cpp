#include <string>
#include <iostream>

using namespace std;

class Shape {
private: 
	string name;
	static float xorigin;
	static float yorigin;
public:
	static void translateReference(float, float);
	Shape(const string&);
	Shape();
	Shape(const Shape&);
	void print() const ;
};

float Shape::xorigin = 0;
float Shape::yorigin = 0;

Shape::Shape(const string& n) : name(n)
{
}

void Shape::print() const { 
	cout << name << endl;
	cout << "Reference point:" << xorigin << "," << yorigin << endl;
}

void Shape::translateReference(float deltax, float deltay) {
	xorigin +=deltax;
	yorigin +=deltay;
}

int main(int argc, char**argv) {
	Shape first("A");
	Shape *second = new Shape("B");
	Shape::translateReference(1,1);
	cout << "first: ";
	first.print();
	cout << "second: ";
	second->print();
	first.translateReference(1,1);
	cout << "first: ";
	first.print();
	cout << "second: ";
	second->print();
	second->translateReference(-2,-2);
	cout << "first=";
	first.print();
	cout << "second: ";
	second->print();
	return 0;
}
