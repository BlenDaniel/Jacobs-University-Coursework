// See the companion program randomnonvirtual.cpp for general comments

#include <iostream>
#include <cstdlib>// for random and srandom

using namespace std;

const int dimension = 10;

double random01(); // returns a random number between 0 and 1

class BaseClass {
	private:
		int something; // needs some data;
	public:
		BaseClass() { something = 0; }
		virtual void print() const { cout << "BaseClass print" << endl; }; // NOTE: virtual!
};

class DerivedOne : public BaseClass {
	public:
		void print() const { cout << "DerivedOne print" << endl; } // overriding  (no virtual needed)
};

class DerivedTwo : public BaseClass {
	public:
		void print() const { cout << "DerivedTwo print" << endl; } // overriding
};

int main(int argc, char** argv) {
  
	BaseClass b1, d1,d2;
	d1 = DerivedOne();
	d2 = DerivedTwo();

	cout << "Size of BaseClass: " << sizeof(BaseClass) << endl;
	b1.print();  // will print "BaseClass print"
	d1.print();  // also here: polymorphism works only with pointers
	d2.print();  // as above

	unsigned int seed;
	cout << "Provide a random seed:";
	cin >> seed;
	srandom(seed);

	BaseClass*  list[dimension];
	int i;

	for(i = 0; i < dimension; i++ ) {
		if (random01() < 0.5)
			list[i] = new DerivedOne();
		else
			list[i] = new DerivedTwo();
	}

	for (i = 0; i < dimension; i++ ) {
		list[i]->print();  // here it will print DerivedOne or DerivedTwo, thanks to polymorphism
		delete list[i];
  	}
}

double random01() {
	return (double)random() / RAND_MAX;
}