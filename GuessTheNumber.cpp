#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // random number generator
    int randomNumber = rand() % 100 + 1;  // 1 to 100
    int guess;
    int attempts = 0;

    cout << "🎮 Welcome to Number Guessing Game!\n";
    cout << "Guess a number between 1 and 100:\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too High! Try again.\n";
            break;
        }
        else if (guess < randomNumber) {
            cout << "Too Low! Try again.\n";
            break;
        }
        else {
            cout << "🎉 Congratulations! You guessed it in "
                 << attempts << " attempts.\n";
                 break;
        }

    } while (guess != randomNumber);

    return 0;
}