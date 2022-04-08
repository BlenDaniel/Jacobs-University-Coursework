/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

/* 
    First constructor that sets default values for every 
    property of a critter object 
*/
Critter::Critter(){
    name = "default_critter"; 
    hunger = 0; 
    boredom = 0; 
    height = 5.0; 
    cout << "Default constructor is called" << endl;
} 

/* 
    Second constructor that sets default values 
    for all property of a critter object except the name 
*/

Critter::Critter(string newname): hunger(0), boredom(0), height(5.0){
    name = newname; 
    cout << "Only with Name constructor is called" << endl;
}

/* 
    Third constructor that can get all the values of a 
    critter object or all the values except height. 
*/

Critter::Critter(string newname, int newboredom, int newhunger, double newheight) {
	name = newname;
    boredom = newboredom;
    hunger = newhunger / 10.0;
    height = newheight;
    cout << "Height optional constructor is called" << endl;
}

/* Setter method implementation */
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger / 10.0;
}

void Critter::setBoredom(int newBoredom){
    boredom = newBoredom;
}

void Critter::setHeight(double newHeight){
    height = newHeight;
}


/* Service method implementation */
void Critter::print() {
	cout << "I am " << name << ". My hunger level stored inside is " << to_string(hunger) << "." << endl;
    cout << "Hunger level converted to integer is " << (int) hunger * 10  << "." << endl;
    cout << "I am "<< height << " meters." <<" My boredom level is "<< boredom << "%."<< endl;
}

/* Getter method implementation */

std::string Critter::getName(){
    return name;
} 

int Critter::getHunger() {
	return (int) hunger * 10;
}

int Critter::getBoredom(){
    return boredom;
}

double Critter::getHeight(){
    return height;
}

