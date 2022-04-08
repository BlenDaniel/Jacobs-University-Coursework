/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <cstring>

/* Creature Class */
class Creature
{
public:
    Creature();
    Creature(const Creature &);
    ~Creature();
    void run() const;
    int getDistance() const;
    void setDistance(const int);

protected:
    int distance;
};

/* Normal constructor with default value of 10 */
Creature::Creature() : distance(10)
{
    std::cout << "Creating a Creature with distance " << distance << "." << std::endl;
}
/* Copy constructor */
Creature::Creature(const Creature &creature)
{
    distance = creature.distance;
    std::cout << "Copy Constructor is being called" << std::endl;
}
/* Destructor of Creature */
Creature::~Creature()
{
    std::cout << "Destructor method is called on Creature" << std::endl;
}

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

/* Witch class that extends from Creature Class */
class Witch : public Creature
{
public:
    Witch(const char *);
    Witch(const Witch & = "Avada");
    ~Witch();
    void castSpell() const; /* Has a constant method to cast spell */
    char *getSpell() const;
    void setSpell(const char *);

private:
    char *spell; /* Property of spell name */
};
/* Constructor with default value  */
Witch::Witch(const char *text)
{
    spell = new char[strlen(text) + 1];
    strcpy(spell, text);
    std::cout << "Normal Constructor is being called on Witch" << std::endl;
}
/* Copy constructor */
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

/* Wizard class that extends from Creature Class */
class Wizard : public Creature
{
public:
    Wizard();
    Wizard(const Wizard &);
    ~Wizard();
    void hover() const; /* Has a constant method to hover */
    int getDistFactor() const;
    void setDistFactor(const int);

private:
    int distFactor;
};

/* Constructor with default value of 3 */
Wizard::Wizard() : distFactor(3)
{
    std::cout << "Normal Constructor is being called on Wizard" << std::endl;
}
/* Copy constructor */
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
    Hobbit(const Hobbit &);
    ~Hobbit();
    void walk() const; /* Has a constant method to walk */
    double getTime() const;
    void setTime(double);

private:
    double time;
};
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
/* Copy constructor */
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

int main()
{
    /* Creature Example */
    std::cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    /* Witch Example */
    std::cout << "\nCreating a Witch.\n";
    Witch witch("Avada Kazavera");
    witch.run();
    witch.castSpell();

    /* Another Witch Example */
    std::cout << "\nCreating another Witch.\n";
    Witch witch2("Avada");
    witch2.run();
    witch2.castSpell();

    /* Wizard Example */
    std::cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    /* Hobbit Example */
    std::cout << "\nCreating a Hobbit.\n";
    Hobbit h;
    h.setTime(10);
    h.run();
    h.walk();

    /* Another Hobbit Example */
    std::cout << "\nCreating another Hobbit.\n";
    Hobbit h2(h);
    h2.setTime(30);
    h2.run();
    h2.walk();
    std::cout << "\nDestructors\n";
    return 0;
}