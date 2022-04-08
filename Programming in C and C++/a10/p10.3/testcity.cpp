/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
    /* Creating three instances of the class City */
	City b, p, l;
    
    /* Creating variables with values to set for my objects */
    string b_name = "Bremen", p_name = "Paris", l_name = "London";
    int b_i = 20000, p_i = 30000, l_i = 40000;
    string b_mayor = "Mayor B", p_mayor = "Mayor P", l_mayor = "Mayor L";
    double b_area = 40000.0, p_area = 50000.0, l_area = 60000.0;
    
    /* Setting data by initialization */
    /* For City b */
    b.setName(b_name);
    b.setInhabitants(b_i);
    b.setMayor(b_mayor);
    b.setArea(b_area);

    /* For City p */
    p.setName(p_name);
    p.setInhabitants(p_i);
    p.setMayor(p_mayor);
    p.setArea(p_area);

    /* For City l */
    l.setName(l_name);
    l.setInhabitants(l_i);
    l.setMayor(l_mayor);
    l.setArea(l_area);

    /* Calling out the method to show the values of the objects */
    b.print();
    p.print();
    l.print();

    return 0;
}