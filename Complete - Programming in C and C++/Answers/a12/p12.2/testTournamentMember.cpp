/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;

int main(){
    /* Test objects creating */
    TournamentMember a("Lisa", "Simpson", "1999-12-01", "American", 0);
    TournamentMember b;
    TournamentMember c(a);

    /* Calling inline setter methods */ 
    b.setName("Mohamed");
    c.setLocation("Canada");

    /* Calling inline getter method */
    cout << a.getNationality() << endl;

    /* Calling the print function */
    a.print();
    b.print();
    c.print();
}