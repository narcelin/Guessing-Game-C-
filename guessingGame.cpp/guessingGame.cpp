#include "guessingGame.h"

#include <iostream>
#include <cstdlib>

using namespace std;

bool guessingGame(int guesses)
{
    cout << "Playing Guessing game \n";
    srand(time(NULL));
    int correct = rand() % 20;
    cout << correct << endl;

    for(int guessCount = 1; guessCount <= guesses; guessCount++){
        int guess;
        cout << "You get " << (guesses - guessCount) << " guesses...\n";
        cin >> guess;

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
