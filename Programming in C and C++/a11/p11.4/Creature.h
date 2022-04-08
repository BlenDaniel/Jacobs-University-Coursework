/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#ifndef __CREATURE_H
#define __CREATURE_H

#include <iostream>
#include <string>

/* Creature Class */
class Creature
{
public:
    Creature();                 /* Empty Wizard */
    Creature(const Creature &); /* Copy constructor */
    ~Creature();                /* Destructor */
    void run() const;           /* Has a constant method to run */
    int getDistance() const;
    void setDistance(const int);

protected:
    int distance;
};

/* Witch class that extends from Creature Class */
class Witch : public Creature
{
public:
    Witch(const char * = "Avada"); /* Witch with optional value for the parameter */
    Witch(const Witch &);          /* Copy constructor */
    ~Witch();                      /* Destructor */
    void castSpell() const;        /* Has a constant method to cast spell */
    char *getSpell() const;
    void setSpell(const char *);

private:
    char *spell; /* Property of spell name */
};

/* Wizard class that extends from Creature Class */
class Wizard : public Creature
{
public:
    Wizard();               /* Empty Wizard */
    Wizard(const Wizard &); /* Copy constructor */
    ~Wizard();              /* Destructor */
    void hover() const;     /* Has a constant method to hover */
    int getDistFactor() const;
    void setDistFactor(const int);

private:
    int distFactor;
};

/* Hobbit class that extends from Creature Class */
class Hobbit : public Creature
{
public:
    Hobbit();
    /* 
            Constructor taking two parameters of integer of 
            distance from parent class and a double value
            time from itself 
        */
    Hobbit(int, double); 
    Hobbit(const Hobbit &); /* Copy constructor */
    ~Hobbit();              /* Destructor */
    void walk() const;      /* Has a constant method to walk */
    double getTime() const;
    void setTime(double);

private:
    double time;
};

#endif