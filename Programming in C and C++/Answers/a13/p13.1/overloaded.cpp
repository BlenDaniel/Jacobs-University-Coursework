#include <iostream>
#include <fstream>
#include <string>

/* 
This example illustrates how stream operators can be overloaded to 
deal with user defined data types.
*/

using namespace std;

/* ADT defined by the programmer */
class worker {
	string name;  //name
	int pin;      // personal identification number

public:
	worker(const string& n, int p) : name(n) , pin(p) {};	// copies parameters to data members
	worker() : name("") , pin(0) {} ;						// empty constructor
	friend ostream& operator<<(ostream&, const worker&);	// overloaded << output operator. Must be friend
	friend istream& operator>>(istream&, worker&); 			// overloaded >> input operator. Must be friend
};

/* 
Please note the return type and the parameters list. 
This is almost mandatory. The same holds for the input >> operator
*/
ostream& operator<<(ostream& o, const worker& aw) {
	// writes both data members to the stream
	o << aw.name << "-" << aw.pin << endl;
	return o;
}

istream& operator>>(istream& i, worker& aw) {
	// gets both data members from the stream
	char buf[50];
	i.getline(buf, 50, '-');
	aw.name = buf;
	i >> aw.pin;
	i.get(); // removed trailing \n
	return i;
}


int main(int argc, char** argv) {
	// creates instances
	worker a("John John", 234);
	worker b("Jack Jack", 324);

	cout << a << b;	// dumps data to screen

	cout << "Dumping to file...: " << endl;

	ofstream out("data");  
	out << a << b;	// dumps data to a stream connected to a file
	out.close();

	worker c,d;

	ifstream in("data");

	cout << "Reading from file ...." << endl;
	// gets data back
	in >> c;
	in >> d;

	// dumps again to screen to verify they are the same
	cout << c << d ;
}