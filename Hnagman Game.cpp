#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to display the current state of the word
void displayWord(const string &word, const vector<bool> &guessed) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (guessed[i])
            cout << word[i] << " "; // Display guessed letters
        else
            cout << "_ "; // Hide unguessed letters
    }
    cout << "\n";
}

int main() {
    string word = "SWEATER"; // The secret word 
    vector<bool> guessed(word.length(), false); // Keep track of guessed letters
    int lives = 3; // Number of attempts

    cout << "Welcome to Hangman!\n";
    cout << "Guess the word letter by letter.\nYou have " << lives << " lives.\n\n";

    while (lives > 0) {
        displayWord(word, guessed);

        // Input user guess
        cout << "\nEnter a letter: ";
        char guess;
        cin >> guess;

        bool correct = false;

        // Check guessed letter against the word
        for (size_t i = 0; i < word.length(); ++i) {
            if (toupper(guess) == word[i]) { 
                guessed[i] = true;
                correct = true;
            }
        }

        if (!correct) {
            lives--;
            cout << "Incorrect! You lost a life. Remaining lives: " << lives << "\n";
        } else {
            cout << "Good guess!\n";
        }

        // Check if the entire word is guessed
        bool won = true;
        for (bool b : guessed) {
            if (!b) won = false;
        }

        if (won) {
            cout << "\nCongratulations! You guessed the word: " << word << "\n";
            return 0;
        }
    }

    cout << "\nGame over! You ran out of lives. The word was: " << word << "\n";
    return 0;
}