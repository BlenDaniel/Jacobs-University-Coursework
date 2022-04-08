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
	/* Added two additional properties */
    int age;
    float weight;

public: /* business logic methods are public */
	/* setter methods */
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
    void setAge(int newage);
    void setWeight(float newweight);
	/* getter method */
    std::string getName();
    int getHunger();
    int getBoredom(); 
	double getHeight();   
    int getAge();
    float getWeight();
	/* service method */
	void print();
};