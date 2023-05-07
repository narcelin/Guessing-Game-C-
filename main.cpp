#include <iostream>

using namespace std;

bool testFunction(int guesses){
    cout << "Playing Game ...\n";
    int correct = 42;
    cout << "Guess a number...\n";
    cout << "You get " << guesses << "guesses...\n";
    return true;
}

int main() {
    testFunction();
    cout << "Do you want to play a game? (Y/n): ";
    string response;
    cin >> response;
    cout << "You entered: " << response << endl;

    if(response[0] == 'y'){
        cout << "Let's play a game, then... \n";
        cout << "What difficulty? (easy/medium/hard): ";
        string difficulty;
        cin >> difficulty; 
        cout << "You chose difficulty: " << difficulty << endl;
        if(difficulty == "easy"){
            cout << "ezpz lemon squeezy\n";
        } else if (difficulty == "medium"){
            cout << "Average\n";
        } else if (difficulty == "hard"){
            cout << "Whoah, we got a bit of a badass here uh?\n";
        } else {
            cout <<"Sorry I did not uderstand, goodbye";
        }

    } else if(response[0] == 'n'){
        cout << "We will not play a game then, goodbye.";
    } else {
        cout << "Please input a valid value next time, goodbye.";
    };

    return 0;
}


