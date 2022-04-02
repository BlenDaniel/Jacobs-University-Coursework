/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

// reverse algorithm example
#include <iostream>  // cout
#include <algorithm> // reverse
#include <set>    // set
#include <ctime>

using namespace std;

class AsendingOrder {
	public:
		bool operator() (const int &v1, const int &v2) {
			return v1 < v2;
		}
};


int getRandom()
{
	int random_num = rand();
	srand(random_num);
	int r_num = random_num % 49 + 1;
	return r_num;
}

int main()
{
    srand(time(NULL));
    set<int, AsendingOrder> sint;  //  a set of ints

	pair<set<int>::iterator, bool> result;// insert returns a pair: an interator
  										// pointing to the inserted 
	// element and a bool indicating if insertion succeeded or not
    while(sint.size() < 6){
        int x = getRandom();
        result = sint.insert(x);	// pushes squares into the set: 
										// some insertion will fail because would 
										// end up in duplicated elements
		if (!result.second)
			cout << "Failed to insert " << x << endl;
    }

    cout << "The numbers in assending order are " << endl;
    set<int>::iterator it;
	for(it = sint.begin(); it != sint.end(); it++)
		cout << *it << " ";
	cout << endl;

}
