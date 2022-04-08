/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Creature.h"

/* Normal constructor with default value of 10 */
Creature::Creature() : distance(10)
{
    std::cout << "Creating a Creature with distance " << distance << "." << std::endl;
}

/* Copy Constructor */
Creature::Creature(const Creature &creature)
{
    distance = creature.distance;
    std::cout << "Copy Constructor is being called" << std::endl;
}

/* Destructor of creature */
Creature::~Creature()
{
    std::cout << "Destructor method is called on Creature" << std::endl;
}
/* Service method */
void Creature::run() const
{
    std::cout << "running " << distance << " meters!\n";
}
/* Getter method implementation */
int Creature::getDistance() const
{
    return distance;
}
/* Setter method implementation */
void Creature::setDistance(const int newDistance)
{
    distance = newDistance;
}

/* Constructor with default value  */
Witch::Witch(const char *text)
{
    spell = new char[strlen(text) + 1];
    strcpy(spell, text);
    std::cout << "Normal Constructor is being called on Witch" << std::endl;
}
/* Copy Constructor */
Witch::Witch(const Witch &w)
{
    spell = new char[strlen(w.spell + 1)];
    strcpy(spell, w.spell);
    std::cout << "Copy Constructor of Witch is being called" << std::endl;
}

/* Method implementation of Casting spell from a certain distance */
void Witch::castSpell() const
{
    std::cout << "Casting Spell " << spell << " over " << distance << " meters!\n";
}

/* Destructor Method */
Witch::~Witch()
{
    delete[] spell;
    std::cout << "Destructor has been called on Witch" << std::endl;
}

/* Getter method implementation */
char *Witch::getSpell() const
{
    return spell;
}

/* Setter method implementation */
void Witch::setSpell(const char *s)
{
    spell = new char[strlen(s) + 1];
    strcpy(spell, s);
}

/* Constructor with default value of 3 */
Wizard::Wizard() : distFactor(3)
{
    std::cout << "Normal Constructor is being called on Wizard" << std::endl;
}
/* Copy Constructor */
Wizard::Wizard(const Wizard &w)
{
    distFactor = w.distFactor;
    std::cout << "Copy Constructor of Wizard is being called" << std::endl;
}
/* Destructor of Wizard */
Wizard::~Wizard()
{
    std::cout << "Destructor has been called on Wizard" << std::endl;
}
/* Hover method implementation */
void Wizard::hover() const
{
    std::cout << "hovering " << (distFactor * distance) << " meters!\n";
}
/* Getter method implementation */
int Wizard::getDistFactor() const
{
    return distFactor;
}
/* Setter method implementation */
void Wizard::setDistFactor(const int newDistance)
{
    distFactor = newDistance;
}

/* Default Constructor of Hobbit */
Hobbit::Hobbit() : time(5)
{
    std::cout << "Normal Constructor is being called on Hobbit" << std::endl;
}
/* Constructor of Hobbit */
Hobbit::Hobbit(int distance, double newTime) : time(newTime)
{
    std::cout << "Constructor is being called on Hobbit" << std::endl;
}
/* Copy Constructor */
Hobbit::Hobbit(const Hobbit &h)
{
    time = h.time;
    std::cout << "Copy Constructor of Hobbit is being called" << std::endl;
}
/* Destructor of Hobbit */
Hobbit::~Hobbit()
{
    std::cout << "Destructor has been called on Hobbit" << std::endl;
}

/* Walk method implementation */
void Hobbit::walk() const
{
    std::cout << "Walking at a speed of " << (distance / time) << " meters/second!\n";
}
/* Getter method implementation */
double Hobbit::getTime() const
{
    return time;
}
/* Setter method implementation */
void Hobbit::setTime(const double newTime)
{
    time = newTime;
}
