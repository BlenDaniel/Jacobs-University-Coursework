/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

// reverse algorithm example
#include <iostream>  // cout
#include <algorithm> // reverse
#include <vector>    // vector

using namespace std;

int main()
{
    vector<int> myvector;

    // set some values:
    for (int i = 1; i < 30; ++i)
        myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

    myvector.push_back(5);
    reverse(myvector.begin(), myvector.end()); // 9 8 7 6 5 4 3 2 1

    // print out content:
    cout << "myvector contains:";
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    replace (myvector.begin(), myvector.end(), 5, 129);

    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    return 0;
}