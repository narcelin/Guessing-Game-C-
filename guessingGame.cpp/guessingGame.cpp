#include "guessingGame.h"

#include <iostream>
#include <cstdlib>

using namespace std;

bool guessingGame(int guesses)
{
    cout << "Playing Guessing game \n";
    cout << "Rules: Guess a number between 1 - 50 \n";
    srand(time(NULL));
    int correct = rand() % 20;
    int guessCount = 0;

    while(guessCount < guesses)
    {
        int guess;
        cout << "You get " << (guesses - guessCount) << " guesses...\n";
        cin >> guess;
        guessCount++;

        if(guess == correct)
        {
            return true;
        } 
        else if(guess < correct)
        {
            cout << "Guess is too low \n";
        } 
        else
        {
            cout << "Guess is too high \n";
        };

    }
    return false;
}
