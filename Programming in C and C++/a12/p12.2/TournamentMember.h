/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#ifndef __TOURNAMENTMEMEBER
#define __TOURNAMENTMEMEBER

#include <cstdlib>
#include <iostream>
#include <cstring>

class TournamentMember
{
private: /* Data members are private */
    char name[36];
    char lname[36];
    char dob[11];
    static char location[50];
    char nationality[50];
    int numberOfTournamentsAttended;

public: /* Business logic methods are public */
    /* Constructors method declarations */
    TournamentMember();
    TournamentMember(const char *, const char *, const char *, const char *, const int);
    TournamentMember(const TournamentMember &); /* Copy constructor */
    ~TournamentMember();                        /* Destructor method */
    /* Inline Getter method implementation for name */
    char *getName() const
    {
        char *str = new char[strlen(name) + 1];
        for (unsigned int i = 0; i < strlen(name); ++i)
        {
            str[i] = name[i];
        }
        return str;
    }
    /* Inline Getter method implementation for lname */
    char *getLName() const
    {
        char *str = new char[strlen(lname) + 1];
        for (unsigned int i = 0; i < strlen(lname); ++i)
        {
            str[i] = lname[i];
        }
        return str;
    }
    /* Inline Getter method implementation for dob */
    char *getDob() const
    {
        char *str = new char[strlen(dob) + 1];
        for (unsigned int i = 0; i < strlen(dob); ++i)
        {
            str[i] = dob[i];
        }
        return str;
    }
    /* Static Inline Getter method implementation for location */
    static char *getLocation()
    {
        static char *str = new char[strlen(location) + 1];
        for (unsigned int i = 0; i < strlen(location); ++i)
        {
            str[i] = location[i];
        }
        return str;
    }
    /* Inline Getter method implementation for nationality */
    char *getNationality() const
    {
        char *str = new char[strlen(nationality) + 1];
        for (unsigned int i = 0; i < strlen(nationality); ++i)
        {
            str[i] = nationality[i];
        }
        return str;
    }
    /* Inline Getter method implementation for numberOfTournamentsAttended */
    int getNumberOfTA() const
    {
        return numberOfTournamentsAttended;
    }
    /* Setter method implementation for name */
    void setName(const char *newValue)
    {
        strncpy(name, newValue, strlen(newValue) + 1);
    }
    /* Setter method implementation for lname */
    void setLName(const char *newValue)
    {
        strncpy(lname, newValue, strlen(newValue) + 1);
    }
    /* Setter method implementation for dob */
    void setDob(const char *newValue)
    {
        strncpy(dob, newValue, strlen(newValue) + 1);
    }
    /* Setter method implementation for location */
    static void setLocation(const char *newValue)
    {
        strncpy(location, newValue, strlen(newValue) + 1);
    }
    /* Setter method implementation for nationality */
    void setNationality(const char *newValue)
    {
        strncpy(nationality, newValue, strlen(newValue) + 1);
    }
    /* Setter method implementation for numberOfTournamentsAttended */
    void setNumberOfTA(const int newValue)
    {
        numberOfTournamentsAttended = newValue;
    }
    /* Service method implementation */
    void print();
};

#endif