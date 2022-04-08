#include <iostream>
#include <cstdlib>
#include "Student3.h"

using namespace std;

const int maxsize = 50;

/* 
	This example illustrates how programs can look more clear (?)
	by using overloaded operators
*/

void sort(Student*,int);  // sorts a vector of Students
void printList(Student*,int);  // prints a vector of Students

int main(int argc, char** argv)
{

	Student *list;
	int attending,i;
	char buf[maxsize];

	cout << "\nHow many Students? (max 100)";
	cin >> attending;
	cin.get();

	list = new Student[attending];  // allocates data structure

	int year;
	float grade;
	string name;

	// read data from keyboard
	for (i = 0; i < attending; i++) {
		cout << "\n\nStudent #" << i << endl;
		cout << "Name:";
		cin.getline(buf,maxsize);
		name = string(buf);
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
	printList(list, attending);

	delete []list;  // release data

}

void printList(Student* list, int n) {
	cout << "Sorted list of Students:" << endl;
	cout << "------------------------" << endl;
	for (int i = 0; i < n; i++) // scans and prints
		list[i].print();  
}

/* Naive bubble sort algorithm */
void sort(Student *list,int n) {
  
	int i,j;
	Student tmp;

	for (j = n - 1; j > 0; j--) {
    	for (i = 0; i < j; i++) {
      		if (list[i] > list[i+1]) { //observe that here we are using the overloaded > operator
				tmp = list[i];
				list[i] = list[i+1];
				list[i+1] = tmp;
			}
		}
	}
}
