/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

char TournamentMember::location[50] = "\0";

/* Empty Constructor */
TournamentMember::TournamentMember()
{
    name[0] = '\0';
    lname[0] = '\0';
    dob[0] = '\0';
    nationality[0] = '\0';
    numberOfTournamentsAttended = 0;
    cout << "Empty Constructor is being called" << endl;
}

/* Parameteric Constructor */
TournamentMember::TournamentMember(const char *newName, const char *newLName, const char *newDob, const char *newNationality, const int newNumTA) : numberOfTournamentsAttended(newNumTA)
{
    strncpy(name, newName, strlen(newName) + 1);
    strncpy(lname, newLName, strlen(newLName) + 1);
    strncpy(dob, newDob, strlen(newDob) + 1);
    //strncpy(location, newLocation, strlen(newLocation) + 1);
    strncpy(nationality, newNationality, strlen(newNationality) + 1);
    cout << "Constructor is being called" << endl;
}

/* Destructor Constructor */

TournamentMember::~TournamentMember()
{
    /* delete name;
    delete lname;
    delete dob;
    delete location;
    delete nationality;*/
    numberOfTournamentsAttended = 0;
    cout << "Destructor has been called" << endl;
}

/* Copy Constructor */
TournamentMember::TournamentMember(const TournamentMember &src)
{
    strncpy(name, src.name, strlen(src.name) + 1);
    strncpy(lname, src.lname, strlen(src.lname) + 1);
    strncpy(dob, src.dob, strlen(src.dob) + 1);
    strncpy(nationality, src.nationality, strlen(src.nationality) + 1);
    numberOfTournamentsAttended = src.numberOfTournamentsAttended;
    cout << "Copy Constructor is being called" << endl;
}

/* Service method implementation */
void TournamentMember::print()
{
    cout << "\nTournament Member's full name is " << name << " " << lname << "." << endl;
    cout << "Date of birth is " << dob << ". The tournament member is in " << location << "."
         << " She/He has a nationality of " << nationality << "." << endl;
    cout << "This tournament member has atteneded "
         << numberOfTournamentsAttended 
         << " number of tournaments before this one." << endl;
}