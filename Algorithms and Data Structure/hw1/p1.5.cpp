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
#include <algorithm>

using namespace std;

template <typename T>
void display(vector<T> arr, char c){
    typename vector<T>::iterator viterator;
    viterator = arr.begin();
    unsigned int i = 0;
    while(viterator != arr.end()){
        cout << *viterator;
        if(i != arr.size() - 1){
            cout << c << " ";
        }
        i++;
        ++viterator;
        cout << endl;
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
            display(v, ' ');
            cout<< endl;

            if(v.size() >= 5){
                cout << "Swapped the 2nd position and 5th position" << endl;                
                iter_swap(v.begin() + 1, v.begin() + 4); 
                
            }
            display(v, ' ');
            cout<< endl;
            cout << "Replaced last element with \"???\"" << endl;
            v.at(v.size() - 1) = "???";
            
            
            cout<< endl;
            cout << "Adding \",\" at the end: " << endl;
            display(v, ',');
            
            cout<< endl;
            cout << "Adding \";\" at the end: " << endl;
            display(v, ';');
            cout<< endl;
            
            
            cout << "Reversing the list: " << endl;
            reverse(v.begin(), v.end());
            display(v, ' ');
            exit(0);

        }else{
            v.push_back(word);
        }
        
    }while(word != "END");
}