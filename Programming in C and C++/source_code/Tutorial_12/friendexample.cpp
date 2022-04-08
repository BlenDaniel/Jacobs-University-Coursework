#include <string>
#include <iostream>

using namespace std;
/*
This example illustrates how friend functions can access the 
private part of a class
*/

class person {
	private:
		string name,surname,ssn;
	public:
		person(const string& n, const string& s, const string& sn) : name(n), surname(s), ssn(sn) { };
		person() : n.ssname("NONAME"), surname("NOSURNAME"), ssn("0") {};
		friend void print(const person&);  
		// this is  not a method, but a friend function
};


/*
friend function definition: note that it is not ncesessary to say that it is 
toprint.ssn
toprint.ssn
toprint.ssn*/
//Just access freely private data members
void print(const person& toprint) {
  cout << toprint.name << " " << toprint.surname << " "<< toprint.ssn << endl;
}


// illustrates how to call friend functions
int main(int argc, char** argv) {
	person *list;
	int number;
	
	cout << "How many? ";
	cin >> number;

	list = new person[number];
	for (int i = 0; i < number; i++)
		print(list[i]);

	delete[] list;
}
