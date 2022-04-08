#include <string>

using namespace std;

// simple class just to make an example of how constructors 
// of internal objects are called
class ToTest {
	private:
		string First;  // dummy data
		string Second;
		string Third;
		int anint;
	public:
		ToTest(string, string, string, int);  // constructor: one parameter for each data member
};

ToTest::ToTest(string a, string b, string c, int d)
					   :  Third(c), Second(b), First(a) {
					// : First(a), Second(b), Third(c) {

  // no matter the order here indicated, the first object to be initialized
  // will be First, the second will be Second, the Third will be third,
  // according to how they were declared in the class definition
  // (an disregarding the order in the constructor definition
  anint = d;
}

int main(int argv, char**argc) {
	ToTest aninstance("Jacobs", "EECS", "320142", 1);
/* 
	aninstance.First will be the string "Jacobs"
	aninstance.Second will be the string "EECS"
	aninstance.Third will be the string "320142"
*/
	return 0;
}
