/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <string> /* defines standard C++ string class */

class Critter
{
private:  /* data members are private */
	std::string name;
	int hunger;
	int boredom;
	double height;

public: /* business logic methods are public */
	/* Constructors method declarations */
	Critter();
	Critter(std::string);
	/* Height is optional here */
	Critter(std::string, int, int, double = 10.0);

	/* setter methods */
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	/* getter method */
    std::string getName();
    int getHunger();
    int getBoredom(); 
	double getHeight();  
	/* service method */
	void print();
};