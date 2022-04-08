#include <iostream>
#include "inlineoutside.h"

using namespace std;

int main(int argc, char** argv) 
{
	SimpleInline first("TEST",32);
	string out;
	out = first.getString();
	cout << first.getString() << " " << first.getInt() << endl;
	out = " something new";
	cout << first.getString() << " " << first.getInt() << endl;
	first.setString("NOW?");
	cout << first.getString() << " " << first.getInt() << endl;
}
