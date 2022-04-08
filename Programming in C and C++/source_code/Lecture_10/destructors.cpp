#include <iostream>
#include <string>

using namespace std;

/*
	This example illustrates that destructor calls are handled by the 
	compiler. Please compile this code and observe the output 
*/

class ToTest {
	private:
		string name;
	public:
		ToTest(string);
		~ToTest();  
		void doSomething();
};

ToTest::ToTest(string n) : name(n) {
	cout <<  "Executing " << name << "'s constructor" << endl;
}

ToTest::~ToTest(){ 
  	cout << "Executing " << name << "'s destructor" << endl;
}

void ToTest::doSomething() {
  	cout << "Doing something with " << name << endl;
}

int main(int argc, char** argv) {
	ToTest a("FIRST");
	{
    	ToTest b("SECOND");
    	a.doSomething();
    	b.doSomething();
    	// b's destructor will be called here, as it is going out of scope
	}
	// a's destructor will be called here
	return 0;
}