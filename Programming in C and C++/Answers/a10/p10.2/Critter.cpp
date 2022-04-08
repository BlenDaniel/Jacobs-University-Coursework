/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

/* Setter method implementations */
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newBoredom){
    boredom = newBoredom;
}

void Critter::setHeight(double newHeight){
    height = newHeight;
}

/* New property setter method implementation */
void Critter::setAge(int newAge){
    age = newAge;
}

/* New property setter method implementation */
void Critter::setWeight(float newWeight){
    weight = newWeight;
}

/* Service method implementation */
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
    cout << "I am "<< height << " meters." <<" My bordem level is "<< boredom << "%."<< endl;
    cout << "I am " << age << " years old. I weigh " << weight << " kilograms." << endl;
}

/* Getter method implementation */
std::string Critter::getName(){
    return name;
} 

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom(){
    return boredom;
}

double Critter::getHeight(){
    return height;
}

/* New property getter method implementation */
int Critter::getAge(){
    return age;
}
/* New property getter method implementation */
float Critter::getWeight(){
    return weight;
}