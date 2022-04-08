#include <iostream>

const int dimension = 5;

using namespace std;

class VerySimple {
private:
	int somedata;
public:
	VerySimple(int a) : somedata(a) {};
	VerySimple() { somedata = 0; cout << "constructor being called..." << endl; };
	void print();
	void set(int somedata) { this->somedata = somedata; };
};

void VerySimple::print() {
	cout << "My value is " << somedata << endl;
	cout << "My value is " << this->somedata << endl;
	cout << "My address is " << this << endl;  // this is a pointer to the current instance. 
											   // Thus its address will be printed
}


int main(int argc, char ** argv) {

	VerySimple *list;
	list = new VerySimple[dimension];

	list[0].set(34);

	for (int i = 0; i < dimension; i++)
		list[i].print();

	delete[] list;

}
