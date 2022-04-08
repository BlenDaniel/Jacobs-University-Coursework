#include "Student2.h"
#include <iostream>

using namespace std;

/*
Student::Student(char* n, float gr, int ye) : name(n) {
	grade = gr;
	year = ye;
}
*/
Student::Student(string n, float gr, int ye) {
	name = n;
	grade = gr;
	year = ye;
}

Student::Student() {
	// empty constructor, so we can declare arrays of students 
	cout << "Empty constructor is called" << endl;
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

void Student::print() {
	cout << grade << " " << year << " " << name << endl;
}

float Student::getGrade() {
	return grade;
}
