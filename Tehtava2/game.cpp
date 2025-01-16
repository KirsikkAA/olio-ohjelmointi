#include "game.h"

Game::Game(int mn) {
    maxNumber = mn;
   cout << "GAME CONTRUCTOR: MAXNUMBER IS " << maxNumber << endl;    //debug
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl; //debug
}

void Game::printGameResult()
{
    cout << "GAME PRINTGAMERESULT" << endl; //debug

    cout << "The right answer was " << randomNumber << endl;
    cout << "Guesses: "<< numOfGuesses << endl;
}

void Game::play()
{
    cout << "GAME PLAY" << endl; //debug
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;

    // cout << randomNumber << endl; //näyttää oikean luvun
    cout << "Numbers are between 1 - " << maxNumber << endl;

    do {
        cout << "Guess a number" << endl;
        cin >> playerGuess;

        if (playerGuess > randomNumber){
            cout << "The right number is smaller" << endl;
        }

        if (playerGuess < randomNumber){
            cout << "The right number is higher" << endl;
        }

        if (playerGuess == randomNumber){
            cout << "You got right answer!" << endl;
        }
        numOfGuesses ++;
    } while (playerGuess != randomNumber);
    printGameResult();
}
