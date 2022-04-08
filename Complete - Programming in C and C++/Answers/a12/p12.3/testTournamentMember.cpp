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

    TournamentMember a("Lisa", "Simpson", "1999-12-01","American", 0);
    TournamentMember b;
    TournamentMember c(a);

    a.print();
    b.print();
    c.print();
}