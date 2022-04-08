/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <math.h>
#include <ctime>

using namespace std;

/* Function to check if a character consonant or not */
bool checkConsonant(char c)
{
    switch (c)
    {
    case 'a':
        return false;
        break;
    case 'e':
        return false;
        break;
    case 'i':
        return false;
        break;
    case 'o':
        return false;
        break;
    case 'u':
        return false;
        break;
    case 'A':
        return false;
        break;
    case 'E':
        return false;
        break;
    case 'I':
        return false;
        break;
    case 'O':
        return false;
        break;
    case 'U':
        return false;
        break;
    default:
        return true;
        break;
    }
}

/* Replacing the vowels with _ */
string replace_vowels(string str)
{
    for (unsigned int i = 0; i < str.length(); i++)
    {
        /* Inital replacing the replacing vowels */
        if (!checkConsonant(str[i]))
        {
            str[i] = '_';
        }
    }
    return str;
}

/* Unreplacing the vowels in the string when the guess is correct to some extent */
string upreplace_vowels(string str, string guess)
{
    /* To if the word is the guess word */
    if (str != guess)
    {
        for (unsigned int i = 0; i < str.length(); i++)
        {
            /* Since the guess is not the same as the guess then adding underscores to the vowels */
            if (!checkConsonant(str[i]))
            {
                str[i] = '_';
            }
        }
    }
    return str;
}

/* To quit the program */
bool quitter(string str)
{
    /* To check if a user wants to quit or not */
    if (str == "quit")
    {
        return false;
    }
    else {
        return true;
    }
}

int main()
{
    /* My list of words */
    string my_list[] = {
        "computer",
        "television",
        "keyboard",
        "laptop",
        "mouse",
        "allocate",
        "memory",
        "operator",
        "example",
        "number",
        "dynamically",
        "strictly",
        "language",
        "specification",
        "typical",
        "single",
        "part",
    };

    /* Tries is initally 1 because when a person plays the game they will obviously try */
    int tries = 1, randomNumber = 0;
    string guess;

    /* Random number generator */
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand() % 17;

    /* Random word */
    string word = my_list[randomNumber];
    cout << "Guessing Game" << endl;
    /* Printing the word after replacing the vowels */
    cout << replace_vowels(word) << endl;
    cout << "Enter the word you think it might be: ";
    /* Getting the first inital guess*/
    getline(cin, guess);


    while (quitter(guess))
    {
        if (guess != word)
        {
            /* Incrementing the try again */
            tries++;
            /**/
            cout << upreplace_vowels(word, guess) << endl;
            if (tries == 1)
            {
                /* Guess the word */
                cout << "Guess Word: ";
            }
            else
            {
                /* Wrong guess and prompting user to try again */
                cout << "Wrong guess. Try again: ";
            }
            /* Get a word */
            getline(cin, guess);
        }
        else
        {
            /* When a player wins */
            cout << "\nCongradulations, You win after " << tries << " tries!" << endl;
            randomNumber = rand() % 17;
            /* Getting a random word again */
            word = my_list[randomNumber];
            cout << "\nTo play again, press any key\nTo quit, enter \"quit\"\n"
                 << endl;
            tries = 0;
            /* Getting an input to quit or actually play again */
            getline(cin, guess);
        }
    }
    return 0;
}