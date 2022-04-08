#include <string> // defines standard C++ string class

/* First C++ class */
class Student {
	private:  // data members are private
		std::string name;
		float grade;
		int year;

	public: // business logic methods are public
			// setter methods
		Student(char*, float, int);
		Student();
		void setName(std::string& newname);
		void setGrade(float newgrade);
		void setYear(int newyear);
		// no need for the getGrade method now
		// this will compare two instance of Students on the basis of their grade
		// Version 1
		//friend bool operator>(const Student &, const Student &);
		// Version 2
		bool operator>(const Student &);
		// service method
		void print() const ;
};