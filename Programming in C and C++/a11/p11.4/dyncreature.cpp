/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Creature.h"

int main(int argc, char **argv)
{
    /* First when starting the program I initialze the input word to be start */
    std::string input = "Start";
    /* init of the objects */
    Wizard *w;
    Witch *witch;
    Hobbit *h;
    /* While loop that will not quit unless the input is "quit" */
    while (input != "quit")
    {
        /* Info */
        std::cout << "Enter 'Witch'(to create a Witch object)\nor Enter 'Wizard'(to create a Wizard object)\nor Enter 'Hobbit'(to create a Hobbit object)\nor 'quit' to quit\n>>>";
        std::getline(std::cin, input);

        if (input == "Wizard") /* For creating a wizard object */
        {
            std::string b = "N";
            w = new Wizard();
            /* Asking the user if they would like to set the new objects to have new values or default ones */
            std::cout << "Would you like to set a new value for distance and distFactor?('Y' for yes and 'N' for no) " << std::endl;
            std::getline(std::cin, b);
            if (b == "Y" || b == "y")
            {
                /* for getting and setting the new values w */
                int newValueDistance;
                int newValueDistFactor;
                std::cout << "Enter Distance: ";
                std::cin >> newValueDistance;
                std::cout << "Enter DistFactor: ";
                std::cin >> newValueDistFactor;
                w->setDistance(newValueDistance);
                w->setDistFactor(newValueDistFactor);
                std::cin.ignore();
            }
            else
            {
                std::cout << "Sticking with the default value" << std::endl;
            }
            /* Short info to show if the wizard setting was successful or not */
            std::cout << "Successfully Created a Wizard with Distance of " << w->getDistance() << " and DistFactor of " << w->getDistFactor() << std::endl;
            w->run();
            w->hover();
            /* Freeing the new created object */
            delete w;
            std::cout << std::endl;
        }
        else if (input == "Witch")
        {
            std::string b = "N";
            witch = new Witch();
            /* Asking the user if they would like to set the new objects to have new values or default ones */
            std::cout << "Would you like to set it to a new distance and spell knowledge?('Y' for yes and 'N' for no) " << std::endl;
            std::getline(std::cin, b);
            if (b == "Y" || b == "y")
            {
                /* for getting and setting the new values witch */
                int newValueDistance;
                char newValueSpell[100];
                std::cout << "Enter Distance: ";
                std::cin >> newValueDistance;
                std::cout << "Enter Spell: ";
                std::cin >> newValueSpell;
                witch->setDistance(newValueDistance);
                witch->setSpell(newValueSpell);
                std::cin.ignore();
            }
            else
            {
                std::cout << "Sticking with the default value" << std::endl;
            }
            /* Short info to show if the Witch setting was successful or not */
            std::cout << "Successfully Created a Witch with Distance of " << witch->getDistance() << " and Spell of " << witch->getSpell() << std::endl;
            witch->run();
            witch->castSpell();
            /* Freeing the new created object */
            delete witch;
            std::cout << std::endl;
        }
        else if (input == "Hobbit")
        {
            std::string b = "N";
            h = new Hobbit();
            /* Asking the user if they would like to set the new objects to have new values or default ones */
            std::cout << "Would you like to set it to a new distance and time?('Y' for yes and 'N' for no) " << std::endl;
            std::getline(std::cin, b);
            if (b == "Y" || b == "y")
            {
                /* for getting and setting the new values witch */
                int newValueDistance;
                int newValuTime = 0;
                std::cout << "Enter Distance: ";
                std::cin >> newValueDistance;
                std::cout << "Enter Spell: ";
                std::cin >> newValuTime;
                h->setDistance(newValueDistance);
                h->setTime(newValuTime);

                std::cin.ignore();
            }
            else
            {
                std::cout << "Sticking with the default value" << std::endl;
            }
            /* Short info to show if the Hobbit setting was successful or not */
            std::cout << "Successfully Created a Hobbit with Distance of " << h->getDistance() << " and Time " << h->getTime() << std::endl;
            h->run();
            h->walk();
            /* Freeing the new created object */
            delete h;
            std::cout << std::endl;
        }
        else if (input == "quit")
        {
            /* Exiting the program */
            std::cout << "Exiting Program" << std::endl;
            exit(1);
        }
        else
        {
            /* Short info to tell the user they have not inputted the right command */
            std::cout << "\nWrong Input!\n";
        }
    }
}