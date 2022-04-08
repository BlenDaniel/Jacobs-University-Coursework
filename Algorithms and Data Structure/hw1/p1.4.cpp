/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

template <class T>
void display(vector<T> arr){
	for (unsigned int i = 0; i < arr.size() ; i++) {
		cout << arr.at(i);
        if(i != arr.size() - 1){
            cout <<  ", ";
        }
	}
}

int main(int argc, char** argv)
{
    string word;
    vector<string> v;

    do{
        cout << "Enter Word: " << endl;
        getline(cin, word);
        if(word == "END"){
            cout << "Printing words " << endl;
            display(v);
            exit(0);
        }else{
            v.push_back(word);
        }
        
    }while(word != "END");
}