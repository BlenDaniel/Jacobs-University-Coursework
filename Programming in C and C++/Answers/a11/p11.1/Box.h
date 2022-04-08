/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <string> /* defines standard C++ string class */

class Box
{
private:  /* data members are private */

	double height;
	double width;
    double depth;

public: /* business logic methods are public */
	Box();
    Box(double, double, double);
    Box(const Box &);
    ~Box();
    
    /* setter methods */	
	void setHeight(double newheight);
    void setWidth(double newwidth);
    void setDepth(double newdepth);

	/* getter method */    
	double getHeight(); 
    double getWidth(); 
    double getDepth(); 
	/* service method */
	void print();
    double volume();
};