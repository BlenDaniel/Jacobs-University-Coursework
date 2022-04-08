/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Box.h"

using namespace std;


int main(int argc, char** argv){
	/* Getting a number n which is the number of boxes */
    int n;
    cout << "Enter the number of boxes: ";
    cin >> n;

    /* Dynamically allocating memory for the boxes */
    Box *boxes = NULL;
    boxes = new Box[2*n];
    /* Variables to hold the height, width and depth */
    double h, w, d;

    for(int i = 0; i < n; i++){
        /* Prompting user to enter the height, width and depth of the ith object */
        cout << "Enter the height of box number " << i+1 << ": ";
        cin >> h;
        cout << "Enter the width of box number " << i+1 << ": ";
        cin >> w;
        cout << "Enter the depth of box number " << i+1 << ": ";
        cin >> d;
        /* 
            Making the ith object from the list of boxes  
            have the values given
        */
        //boxes[i] = Box(h,w,d);
        boxes[i].setHeight(h);
        boxes[i].setWidth(w);
        boxes[i].setDepth(d);
        /*
            Copying the object to the i*2th position of the
            list
        */
        boxes[i + n] = Box(boxes[i]);
    }

    /* Printing the objects in the list */
    for(int i = 0; i < n * 2; i++) {
        cout << "Printing box number " << i + 1 << ":"<< endl;
        boxes[i].print();
        cout << "The volume of box " << i + 1 << " is ";
        cout << fixed << setprecision(2) << boxes[i].volume() << endl;
    }
    /* Deallocating memory */
    delete [] boxes;
    return 0;
}

