#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
	Complex c1;
	Complex c2(1, -9);
	Complex c3(-7, 8);
	Complex c4(6);
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	cout << c2.magnitude() << endl;
	return 0;
}
