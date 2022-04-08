// demonstrates usage of the new operator
#include <iostream>

using namespace std;

int main() 
{
	int*  ptr_1 = new int;  // allocates one integer (initialized with 0)
	char* ptr_2 = new char; // allocates one char (initialized with the empty character)

	int** ptr_3 = new int*;
	char** ptr_4 = new char*;

	int* ptr_5 = new int(12);
	char* ptr_6 = new char('x');

	int* ptr_7 = new int[5]; // allocates an int array with 5 elements
							 // C++ 9x does not allow to initialize elements
	int* ptr_8 = new int[4] {1,2,3,4};  // C++0x initialization
							 
	char* ptr_9 = new char[8]; // allocates an char array with 8 elements
	char* ptr_10 = new char[8] {'O', 'K'}; // C++0x initialization

	cout << ptr_1[0] << endl;
	cout << ptr_2[0] << "test" << endl;
	cout << ptr_5[0] << endl;
	cout << ptr_6[0] << endl;
	cout << ptr_8[2] << endl;
	cout << ptr_9[2] <<"another test"<< endl;
	cout << ptr_10[0] << ptr_10[1] << endl;
	delete [] ptr_7;
	return 0;
}
