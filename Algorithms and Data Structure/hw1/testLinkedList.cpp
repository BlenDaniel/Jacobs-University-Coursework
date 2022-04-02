/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(void) {
    List<int> list;
    list.push_back(203);
    list.push_back(472);
    list.push_back(729);
    list.push_front(3729);
    list.push_front(802);
    int front_elem, back_element;
    list.pop_back(front_elem);
    cout << "Number of elements: " << list.get_size() << endl;
    list.pop_front(back_element);

    cout << "Popped " << back_element  << " from the back." << endl;
    cout << "Popped " << front_elem << " from the front." << endl; 
    cout << "Number of elements: " << list.get_size() << endl;
    front_elem = list.getFront();
    back_element = list.getBack();
    
    cout << "Current element on the front is " << front_elem << endl;
    cout << "Current element on the front is " << back_element << endl;

}