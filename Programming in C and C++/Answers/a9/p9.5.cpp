/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    /* Declaring and initializing the variables */
    string name;
    int guess = 0, tries = 0;
    int randomNumber = 0;
   
    /* Getting a dynamic string from user */
    cout << "Enter name: ";
    getline(cin, name);

    /* Getting a random number between the range of 1 - 100 */
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand() % 100 + 1;

    /* Prompting user to input values */
    cout << "Enter guess: ";
    cin >> guess;

    /* A loop until a person guesses the randomnumber*/
    while (guess != randomNumber)
    {
        /* Incrementing tries */
        tries++;

        /* To check if the guess was below or above the random number */
        if (randomNumber < guess) {
            cout << "Correct number is less than your guess.\nGuess again: ";
        }
        else {
            cout << "Correct number is greater than your guess.\nGuess again: ";
        }
        /* 
            Since the random number and the guess are not the same, prompting the user to
            enter another guess.
        */
        cin >> guess;
    }
    /* When player successfuly guess the number */
    if (randomNumber == guess) {
        cout << "Congratulation " << name << "\nYou win after "<< tries << " tries!" << endl;
    }

    return 0;
}