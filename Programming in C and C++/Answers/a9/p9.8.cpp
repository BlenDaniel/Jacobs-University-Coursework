/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <list>
#include <math.h>
using namespace std;

/* For substracting the maximum number from every element in the list */
void subtract_max(int my_list[], int size) {
    /* Initially the max number is the element at index number 0 */
    int max = my_list[0];

    /* 
        Getting the max number by comparing the initial 
        number with the rest of the items in the list
    */
    for(int i = 1; i < size; i++){
        if(max < my_list[i]){
            max = my_list[i];
        }        
    }

    /* For subtracting maximum number from every item in the list */
    for(int i = 0; i < size; i++){
        my_list[i] = my_list[i] - max;  
    }


}

/* Deallocating the memory */
void deallocate(int *my_list) {
    delete [] my_list;
}



int main(void){
    /* Initializing variables */
    int x, n;
	cout << "Enter size of a list: ";
	cin >> n;
	int *a = new int(n);

	/* For allowing the user to enter the elements in the list */
	for (x = 0; x < n; x++) {
        cout << "Enter element at index " << n << " : ";
		cin >> a[x];
	}

    /* Printing the numbers in the list */
	for (x = 0; x < n; x++) {
		cout << a[x] << " " << endl;
	}

    cout <<"After substracting: " << endl;
    subtract_max(a, n);
    /* Printing the numbers in the list after subtracting the maximum number from each element */
    for (x = 0; x < n; x++) {
		cout << a[x] << " " << endl;
	}
    
    /* Deallocating the list */
    deallocate(a);
	return 0;
}