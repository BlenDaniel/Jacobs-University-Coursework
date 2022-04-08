#include <iostream>
using namespace std;
	
int main () {
	char *buffer;
	int mb;
	try {
		cout << "How many MB should be reserved? ";
		cin >> mb;
		if (mb <= 0)
			throw "Error getting memory!";
		buffer = new char[256 * 4 * 1024 * mb];
	}
	catch (const char * str){
		cout << "Exception: " << str << endl;
		return 1;
	}
	cout << "Programm completed without errors." << endl;
	return 0;
}
