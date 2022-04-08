#include <iostream>
#include <cstdlib>
#include <stdexcept>
using namespace std;

void exitus (void) {
	cout << "Exception without catch-Block." << endl;
	cout << "Nothing will work any more." << endl;
	exit(999);
}

int main (void) {
	set_terminate(exitus);
	char *buffer;
	int mb;
	try {
		cout << "How many MB should be reserved? ";
		cin >> mb;
		if (mb <= 0)
			throw "Error getting memory!";
		buffer = new char[1024 * 1024 * mb];
		cout << "Program completed without errors." << endl;
	}
	catch (int i) {
		cout << "Exception: errorcode " << i << endl;
	}
	return 0;
}
