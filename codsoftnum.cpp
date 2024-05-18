#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout<<"_______________________________________\n";
    cout << "I have selected a secret number between 1 and 100." << endl;
    cout<<"Guess it !...\n";
    cout<<"\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess == secretNumber) {
            cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts << " attempts." << endl;
            break;
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try a higher number.\n" << endl;
        } else {
            cout << "Too high! Try a lower number.\n" << endl;
        }
    }

    return 0;
}

