/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <string> /* defines standard C++ string class */

/* First C++ class */
class Critter
{
private:  /* data members are private */
	std::string name;
	double hunger;
	int boredom;
	double height;
	double thirst;

public: /* business logic methods are public */
	/* Constructors method declarations */
	Critter();
	Critter(std::string);
	/* Height is optional here */
	Critter(std::string, int, int, double = 10.0);
	Critter(std::string, int, int, double, double);

	/* setter methods */
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	void setThirst(double newthirst);
	/* getter method */
    std::string getName();
    int getHunger();
    int getBoredom(); 
	double getHeight(); 
	double getThirst(); 
	/* service method */
	void print();
};