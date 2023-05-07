#include <iostream>
#include <cstdlib>

using namespace std;

bool playGame(int guesses)
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

int main() 
{
    cout << "Do you want to play a game? (Y/n): ";
    string response;
    cin >> response;
    // cout << "You entered: " << response << endl;

    if(response[0] == 'y')
    {
        cout << "Let's play a game, then... \n";
        cout << "1: Easy \n";
        cout << "2: Medium \n";
        cout << "3: Hard \n";
        cout << "Select a difficulty: ";
        int difficulty;
        cin >> difficulty; 
        // cout << "You chose difficulty: " << difficulty << endl;
        int gameResult;

        switch(difficulty)
        {
            case 1:
            gameResult = playGame(10);
            break;
            case 2:
            gameResult = playGame(5);
            break;
            case 3:
            gameResult = playGame(3);
            break;
            case 4:
            gameResult = playGame(1);
            break;
        };

        if(gameResult)
        {
            cout << "Congradulations, you won!";
        } 
        else 
        {
            cout << "Sorry, try again next time!";
        };

    }
    else if(response[0] == 'n')
    {
        cout << "We will not play a game then, goodbye.";
    } 
    else 
    {
        cout << "Please input a valid value next time, goodbye.";
    };

    return 0;
}


