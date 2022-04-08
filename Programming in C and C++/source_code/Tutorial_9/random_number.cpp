#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int die ;
	int count = 0;
	int randomNumber;
	// init random number generator
	//srand(4);
	srand(static_cast<unsigned int>(time(0)));
	while(count < 10) {
		count++;
		randomNumber = rand();
		//die = randomNumber;
		die = (randomNumber % 6) + 1;
		cout << count << " : " << die << endl ;
	}
	return 0;
}
