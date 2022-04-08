#include <iostream>

using namespace std;

class A {
	public:
		int val;
	public:
		A(int val) { 
			this->val = val; 
			cout << "Constructor A: " << endl; 
		}
		virtual void print() {
			cout << val << endl;
		}
};

class B : public A {
	protected:
		char c;
	public:
		B(int v, char c): A(v) { 
			this-> c =c;
			cout << "Constructor B: " << endl; 
		}
		void print() {
			cout << val << " " << c << endl;
		}
};

class C : public A {
	protected:
		string s;
	public:
		C(int v, string s) : A(v) { 
			this->s = s;
			cout << "Constructor C: " << endl;
		}
		void print() {
			cout << val << " " << s << endl;
		}
};

class D : public B, public C {
	protected:
		double x;
	public:
		D(int v, char c, string s, double x): B(v, c), C(v, s) { 
			this->x = x;
			cout << "Constructor D: " << endl; 
		}
		void print() {
			// ambiguous val
			//cout << val << " " << c << " " << s << " " << x << endl;
			// specify which val 
			//cout << B::val << " " << c << " " << x << endl;
			cout << B::val << " " << c << " " << s << " " << x << endl;
			cout << C::val << " " << c << " " << s << " " << x << endl;
			// use static_cast to convert to one of the parents
			cout << static_cast<B *>(this)->val << " " << c << " " << s << " " << x << endl;
			cout << static_cast<C *>(this)->val << " " << c << " " << s << " " << x << endl;
		}
};

int main() {
	cout << "Creating object A" << endl;
	A obja(1);
	cout << endl;
	cout << "Creating object B" << endl;
	B objb(2, 'b');
	cout << endl;
	cout << "Creating object C" << endl;
	C objc(3, "example");
	cout << endl;
	cout << "Creating object D" << endl;
	D objd(5, 'a', "test", 2.98);
	cout << endl;
	obja.print();
	objb.print();
	objc.print();
	objd.print();
	return 0;
}
