#include <iostream>
using namespace std;
#include "class_test.h"

// just print something when constructor/destructor is called.

Test::Test() {
	cout << "constructor for Test." << endl;
}

Test::~Test() {
	cout << "destructor for Test." << endl;
}
