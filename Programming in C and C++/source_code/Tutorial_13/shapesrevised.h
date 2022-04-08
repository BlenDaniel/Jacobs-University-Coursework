//  Shapes example revised. Virtual methods have been added
// Please refer also to the shape example

#include <string>

class Shape {
protected: 
	std::string name;
	bool visible;      //  a shape can be visible or not
public:
	Shape(const std::string&);
	Shape();
	Shape(const Shape&);
	virtual ~Shape();  // destructor: hide a shape before removing it from memory
	void printName() const ;
	const std::string getName() const { return name; }
	virtual void draw() = 0;   // pure virtual methods: no implementation is provided in shape
	virtual void erase() = 0;
};

/*
As before, a centered shape is a shape with a center. Please note
that as we are not providing implementations for the methods draw and erase,
this wil be still pure virtual
*/
class centeredShape : public Shape {   
protected:
	double x,y;
public:
	centeredShape(const std::string&,double,double);
	centeredShape();
	centeredShape(const centeredShape&);
	//~centeredShape();
	double getx() const { return x; }
	double gety() const { return y; }
	void move(double,double);
};


/*
As in shapes.cpp. This class will not be pure virtual as we provide implementation
for the methods draw and erase
*/
class RegularPolygon : public centeredShape {
 private: 
  int edgesNumber;
 public:
  RegularPolygon(const std::string&,double,double,int);
  RegularPolygon();
  RegularPolygon(const RegularPolygon&);
  ~RegularPolygon();
  void draw();
  void erase();
};

/* As above*/
class Circle : public centeredShape {
 private:
  double radius;
 public:
  Circle(const std::string&,double,double,double);
  Circle();
  Circle(const Circle&);
  ~Circle();
  void draw();
  void erase();
};
    
/* Final remark: the methods draw and erase are provided in RegularPolygon
and in Circle rather than in centeredShape, as drawing (and erasing) these
shapes is different, so in a real world application this would end up
with different businness code*/
