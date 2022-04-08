/* 
The most instructive thing is to compile, run and observe the output
of this program. Later, do the same thing with randomvirtual and
observe the differences.
*/

#include <iostream>
#include <cstdlib>// for random and srandom

using namespace std;

const int dimension = 10;

double random01(); // returns a random number between 0 and 1

// Dummy base class. Just print a message to indentify itself
class BaseClass {DerivedOne(); { cout << "DerivedOne constructor called" << endl; }
		void print() const { cout << "DerivedOne print" << endl; } // redefinition of method print
};

class DerivedTwo : public BaseClass { // derives from BaseClass
	public:
		DerivedTwo() { cout << "DerivedTwo constructor called" << endl; }
		void print() const { cout << "DerivedTwo print" << endl; }  // redefinition of method print
};

int main(int argc, char** argv) {
  
  BaseClass b1;
  BaseClass d1 = DerivedOne();
  BaseClass d2 = DerivedTwo();

  cout << "Sizeof BaseClass: " << sizeof(BaseClass) << endl;

  b1.print();   // will print "BaseClass print"
  d1.print();   // also here
  d2.print();   // and also here

  unsigned int seed;
  cout << "Provide a random seed:";
  cin >> seed;
  srandom(seed);

  BaseClass *list[dimension];
  int i;

  // This cycle randomly assigns elemnts in list as DerivedOne or DerivedTwo
	for(i = 0; i < dimension; i++) {
	  if (random01() < 0.5)
		list[i] = new DerivedOne(); // Ok: BaseClass is needed, but Derived one can be assigned
	  else
		list[i] = new DerivedTwo();  // also here
	}

	for (i = 0; i < dimension; i++) {
		list[i]->print();  // will always print "BaseClass print"
		delete list[i];
	}
}

// Returns a random number between 0 and 1. Makes a (very poor) use of the random standard C function
double random01() {
	return (double) random() / RAND_MAX;  // random returns an int between 0 and RAND_MAX. This way we clip it into 0,1
}