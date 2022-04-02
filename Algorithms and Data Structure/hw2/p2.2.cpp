/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <fstream>
#include <iostream>
#include <deque>

using namespace std;

template <typename T>
void displayDeque(deque<T> arr, char c){
    typename deque<T>::iterator iter;
    unsigned int i = 0;
    for (iter = arr.begin(); iter != arr.end(); iter++)
    {
        cout << *iter;
        if (i != arr.size() - 1)
        {
            cout << c;
        }
        i++;
        
    }   

}

int main(void) {

    deque<float> a;
    deque<float>::iterator a_iter;
    float x;
    int index = 0; 

    cout << "Enter floats for deque \"A\" " << endl; 
    while(true){
        cout << "Enter float: "; 
        cin >> x;
		if (x == 0) break;
        x > 0 ? a.push_back(x) : a.push_front(x);
        
    }

    displayDeque(a, ',');

    cout << endl;


    for (a_iter = a.begin(); a_iter != a.end(); a_iter++)
    {
        if (*a_iter > 0)
        {
            break;
        }
        index++;
        
    }

    deque<float>::iterator it = a.begin();
    it+=index;
    it = a.insert(it, 0);

    displayDeque(a, ';');
    

    
    
    
}