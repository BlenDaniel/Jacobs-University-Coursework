/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(){
    /* Test objects creating */
    Player a;
    Player b("Henry", "Giggs", "1978-12-01", "British", 23, 76, 3, true);
    Player c(b);
    /* Test objects increamenting the values */
    a.increment();
    a.increment();
    a.increment();
    b.increment();
    b.increment();
    c.increment();
    /* Calling the print function */
    a.print();
    b.print();
    c.print();

}