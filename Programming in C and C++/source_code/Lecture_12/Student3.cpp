#include <iostream>
#include "Student3.h"

using namespace std;

Student::Student(char* n, float gr, int ye) : name(n) {
	grade = gr;
	year = ye;
}

Student::Student() {
	// empty constructor, so we can declare arrays of Students 
}

void Student::setName(string& newname) {
	name = newname;
}

void Student::setGrade(float newgrade) {
	grade = newgrade;
}

void Student::setYear(int newyear) {
	year = newyear;
}

void Student::print() const {
  cout << grade << " " << year << " " << name << endl;
}

/* 
	Returns true if the first instance is greater than the second instance, 
	false otherwise.
	The comparison is based on the grade. Note that grade data member can 
	be accessed as the operator was declared to be friend to class Student
*/

// Version 1
/*bool operator >(const Student& first, const Student& second) {
  return (first.grade > second.grade);
}*/

// Version 2
bool Student::operator>(const Student s &) {
	return this->grade > s.grade;
}