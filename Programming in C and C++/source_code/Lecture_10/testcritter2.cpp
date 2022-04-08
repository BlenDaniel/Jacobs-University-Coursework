#include <iostream>
#include <cstdlib>
#include "Critter2.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter b("bitey", 1, 2, 22.0);
	b.print();

	Critter *a;
    a = new Critter();	
	a->print();
	
	Critter *c;
    c = new Critter("pooey", 1, 2, 34.0);	
	c->print();

	Critter *d;
	d->print(); // will create segmentation fault!
	return 0;
}