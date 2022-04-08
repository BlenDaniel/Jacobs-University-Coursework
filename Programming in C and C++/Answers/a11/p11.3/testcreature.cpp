/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Creature.h"

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