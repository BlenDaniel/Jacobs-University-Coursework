/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <string> /* defines standard C++ string class */

class City
{
private:  /* data members are private */
	std::string name;
	int inhabitants;
	std::string mayor;
	double area;

public: /* business logic methods are public */
	/* setter methods */
	void setName(std::string& newname);
	void setInhabitants(int newinhabitants);
	void setMayor(std::string& newmayor);
    void setArea(double newarea);

	/* getter method */
    std::string getName();
    int getInhabitants();
    std::string getMayor();    
    double getArea();

	/* service method */
	void print();
};