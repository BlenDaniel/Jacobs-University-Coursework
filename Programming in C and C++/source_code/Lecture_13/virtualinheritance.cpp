#include <iostream>

using namespace std;

class A {
	private:
		int val;
	public:
		A(int v) { val = v; cout << "Constructor A" << endl; }
};

class B : public virtual A {
	public:
		B(int v): A(v) { cout << "Constructor B" << endl; }
};

class C : public B {
	public:
		// error: no matching function to call A::A();
		//C(int v) : B(v) { cout << "Constructor C" << endl; }
		C(int v) : A(v), B(v) { cout << "Constructor C" << endl; }
};

int main() {
	C obj(5);
	return 0;
}
