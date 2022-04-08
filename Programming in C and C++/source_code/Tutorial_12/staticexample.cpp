// As usual: the most instructive thing is to compile and run this program
#include <iostream>

using namespace std;

class WithCounter {

private:
	static int classcounter;               // this counts the number of 
										   // instances of this class
	static const int ClassConstant = 100;  // this is the way to create class 
	                                       // constants
	WithCounter(const WithCounter&);       // avoids pass by value
public:
	WithCounter();
	~WithCounter();
};

int WithCounter::classcounter = 0;  // explicit storage allocation. 

WithCounter::WithCounter() {
	classcounter++;                     // whenever an instance is created, 
										// increase the counter and print it
	cout << "New instance created" << endl;
	cout << "There are now " << classcounter << " instance of WithCounter" << endl;

}

WithCounter::~WithCounter() {
  classcounter --;  					// when an instance is removed, 
  										// decrease the counter and print it
  cout << "An instance is being destroyed " << endl;
  cout << "There are now " << classcounter << " instance of WithCounter" << endl;
}


int main(int argc, char** argv) {

	int tocreate;
	WithCounter *seq;
	WithCounter a;
	{
		WithCounter b;
		cout << "How many?";
		cin >> tocreate;
		// here the desctructor of b will be called
	}

	seq = new WithCounter[tocreate];
	cout << "About to destroy them... " << endl;

	delete[] seq;

	cout << "Ending program..." << endl;
	return 0;
}
