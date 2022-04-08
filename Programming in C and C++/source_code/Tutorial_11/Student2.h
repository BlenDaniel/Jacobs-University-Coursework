#include <string> // defines standard C++ string class

/* First C++ class */
class Student {
private:  // data members are private
	std::string name;
	float grade;
	int year;

public: // business ld print();are public
	// setter methodsd print();
	Student(std::string, float, int);
	Student();
	void setName(std::string& newname);
	void setGrade(float newgrade);
	void setYear(int newyear);
	// getter method
	float getGrade();
	// service method
	void print();
};
