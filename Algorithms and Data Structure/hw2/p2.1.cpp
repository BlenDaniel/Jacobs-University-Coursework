/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <fstream>
#include <iostream>
#include <list>

using namespace std;

template <typename T>
void displayList(list<T> arr, char c){
    typename list<T>::iterator iter;
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

    list<int> a, b, c;
    list<int>::iterator a_iter, b_iter;
    int x;

    cout << "Enter numbers for list \"A\" " << endl; 
    while(true){
        cout << "Enter number: "; 
        cin >> x;
		if (x <= 0) break;
		a.push_back(x);
        b.push_front(x);
        
    }

    

    ofstream out("listB.txt");
    if (!out.good())
    {
        cerr << "Error opening input file " << endl;
        exit(1);
    }

    displayList(a, ' ');

    for (b_iter = b.begin(); b_iter != b.end(); b_iter++)
    {
        out << *b_iter << " ";
    }

    out.close();

    cout << endl;

    for (a_iter = a.begin(),  b_iter = b.begin(); a_iter != a.end() && b_iter != b.end(); a_iter++, b_iter++)
    {
        a.push_back(*a_iter);
        b.push_back(*b_iter);
        a.pop_front();
        b.pop_front();
    }
    cout << "Priniting List A"<< endl;

    displayList(a, ',');

    cout << "\nPriniting List B"<< endl;

    displayList(b, ',');

    cout << endl;

    c.merge(a);
    c.merge(b);

    displayList(c, ' ');
    
    
}