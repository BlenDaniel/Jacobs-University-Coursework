/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/* Class Motor */
class Motor
{

public:
    Motor()
    {
        /* Throwing An error upon construction */
        throw "This motor has problems";
    }
    virtual ~Motor() {}
};

/* Class Car */
class Car
{
private:
    Motor *motor; /* Has a pointer to a motor */

public:
    Car()
    {
        /* Upon construction trying to initialize Motor */
        try
        {
            motor = new Motor();
        }
        catch (const char *str)
        {
            cerr << str << endl;
            /* Throwing another error after catching one */
            throw "The car in this garage has problems with the motor";
        }
    }
    virtual ~Car() {}
};

/* Garage class */
class Garage
{
private:
    Car *car; /* Has a pointer to a Car */

public:
    Garage()
    {
        /* Upon construction trying to initialize Car */
        try
        {
            car = new Car();
        }
        catch (const char *)
        {
            /* Catching the error */
            throw;
        }
    }
    virtual ~Garage() {}
};

int main()
{
    /* Trying to create a Garage object */
    try
    {
        Garage gm;
    }
    catch (const char *str)
    {
        /* Printing the error that are caught while trying
        to create the object */
        cerr << str << endl;
    }
    return 0;
}