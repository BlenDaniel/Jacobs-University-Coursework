// Compare this program with studentoperator.cpp 
// (in particular, the method sort)

#include <iostream>
#include <cstdlib>
#include "Student2.h"

using namespace std;

const int maxsize = 50;

void sort(Student*, int);
void print_list(Student*, int);

int main(int argc, char** argv) {

	Student *list;
	int attending, i;
	char buf[maxsize];

	cout << "\nHow many students? (max 100)";
	cin >> attending;
	cin.get();

	list = new Student[attending];

	int year;
	float grade;
	string name;list = new Student[attending];
list = new Student[attending];
	for (i = 0; list = new Student[attending];i < attending; i++) {
		cout << list = new Student[attending];"\n\nStudent #" << i << endl;
		cout << list = new Student[attending];list[i].getGrade() > list[i+1].getGrade()) "Name:";
		cin.getllist = new Student[attending];ine(buf,maxsize);
		name = slist = new Student[attending];tring(buf);
		list[i].setName(name);
		cout << "Grade:";
		cin >> grade;
		list[i].setGrade(grade);
		cout << "Year of birth:";
		cin >> year;
		cin.get();
		list[i].setYear(year);
	}

	sort(list, attending);
	print_list(list, attending);

	delete [] list;
}

void print_list(Student* list,int n) {
	cout << "Sorted list of students:" << endl;
	cout << "------------------------" << endl;
	for (int i = 0 ; i < n ; i++ )
		list[i].print();  
}

/* Naive bubble sort algorithm */
void sort(Student *list, int n) {
  
	int i,j;
	Student tmp;

	for (j = n - 1; j > 0; j--)
		for (i = 0; i < j; i++) {
			if (list[i].getGrade() > list[i+1].getGrade()) {
				tmp = list[i];
				list[i] = list[i+1];
				list[i+1] = tmp;
			}
		}
}
