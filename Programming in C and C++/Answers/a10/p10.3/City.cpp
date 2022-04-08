/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "City.h"

using namespace std;

/* Setter method implementations */
void City::setName(string &newName){
    name = newName;
}

void City::setInhabitants(int newInhabitants){
    inhabitants = newInhabitants;
}

void City::setMayor(string &newMayor){
    mayor = newMayor;
}

void City::setArea(double newArea){
    area = newArea;
}

/* Service method implementation */
void City::print(){
    cout << "The city name is " << name << ". " << name << " has " << inhabitants << " number of inhabitants." << endl;
    cout << "The mayor of " << name << " is "<< mayor << ". " << name << " has an area of " << to_string(area) << " km^2." << endl << endl; 
}

/* Getter method implementation */
string City::getName(){
    return name;
}

int City::getInhabitants(){
    return inhabitants;
}

string City::getMayor(){
    return mayor;
}

double City::getArea(){
    return area;
}
