#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int numberToGuess = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "-------- Welcome to the Number Guessing Game! --------\n\n";
    std::cout << "I've picked a number between 1 and 100. Can you guess it?\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < 1 || guess > 100) {
            std::cout << "Please enter a number between 1 and 100.\n";
        } else if (guess < numberToGuess) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > numberToGuess) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "\nCongratulations! That's the right number.\n";
            std::cout << "------ You guessed it in " << attempts << " tries ------\n";
        }
    } while (guess != numberToGuess);

    return 0;
}

