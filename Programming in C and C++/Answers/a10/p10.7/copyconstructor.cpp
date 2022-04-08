/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

/* Class Construction of NaiveString */
class NaiveString {
private:
	char *str;
public:
	/* Constructor of NaviveString */
	NaiveString(const char*);
	/* Copy constructor */
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
	/* Destructor of the NaiveString object */
	~NaiveString();
};


/* Constructor Method */
NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
    cout << "Normal Constructor is being called" << endl;
}

/* Destructor Method */
NaiveString::~NaiveString() {
	delete[] str;
	cout << "Destructor has been called" << endl;
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/

NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
    cout << "Copy Constructor is being called" << endl;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

/* Service Method to print the values of the NaiveString */
void NaiveString::print() {
	cout << str << endl;
}

/* Function to change the data of the object by value  */
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

/* Function to change the data of the object by reference */
void funcByref(NaiveString& s){
    cout << "funcByref() being called" << endl;
	s.update('B', 'C');
	s.print();
}

int main(int argc, char** argv)
{
	/* Creating an object NaiveString a by using a constructor */
	NaiveString a("aBcBdB");
	a.print();

	/* 
		Calling the function funcbyval to change 
		the data of a
	*/
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();

	/* Creating an object NaiveString a by using a copy constructor */
	NaiveString b(a);
	/* 
		Calling the function funcByref to change 
		the data of b
	*/
	cout << "About to call funcByref()" << endl;
	funcByref(b);
	b.print();
}