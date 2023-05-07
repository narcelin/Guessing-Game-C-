#include <iostream>
#include <cstdlib>
#include "./guessingGame.cpp/guessingGame.cpp"

using namespace std;

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
            gameResult = guessingGame(10);
            break;
            case 2:
            gameResult = guessingGame(5);
            break;
            case 3:
            gameResult = guessingGame(3);
            break;
            case 4:
            gameResult = guessingGame(1);
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


