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
    Creature();
    Creature(const Creature &); /* Copy constructor */
    ~Creature();
    void run() const;
    int getDistance() const;
    void setDistance(const int);

protected:
    int distance;
};

/* Witch class that extends from Creature Class */
class Witch : public Creature
{
public:
    Witch(const char *);
    Witch(const Witch & = "Avada"); /* Copy constructor */
    ~Witch();
    void castSpell() const; /* Has a constant method to cast spell */
    char* getSpell() const;
    void setSpell(const char*);

private:
    char *spell; /* Property of spell name */
};

/* Wizard class that extends from Creature Class */
class Wizard : public Creature
{
public:
    Wizard();
    Wizard(const Wizard &); /* Copy constructor */
    ~Wizard();
    void hover() const; /* Has a constant method to hover */
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
    ~Hobbit();
    void walk() const; /* Has a constant method to walk */
    double getTime() const;
    void setTime(double);

private:
    double time;
};

#endif