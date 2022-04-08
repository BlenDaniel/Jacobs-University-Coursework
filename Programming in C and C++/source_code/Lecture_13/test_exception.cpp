#include <iostream>
using namespace std;
#include "class_test.h"
#include "class_exception.h"


void function1() {
	Test t;
	cout<< "Starting function1. "
				"Exception 'Error' follows." << endl;
	throw Error("Error in function1.");
}

int main() {
	cout << "Starting program." << endl;
	try {
		cout << "Starting try-block, "
				"'function1' is being called." << endl;
		function1();
	}
	catch( Error e ) {
		cout << "Starting catch-block "
				"for 'Error'-Objects." << endl;
		cout << e.showMsg() << endl;
	}
	catch( char *str ) {
		cout << "Starting catch-block for "
				"Strings: " << str << endl;
	}
	// this matches any exception
	catch(...) {
		cout << "General exception caught" << endl;
	}
	cout << "Back in 'main'. "
				"Program stops." << endl;
	return 0;
}
