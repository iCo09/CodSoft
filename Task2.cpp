//a random number generating game 
//task2

#include<bits/stdc++.h>
int main() {
    
    int secretNumber = rand() % 10 + 1;  // Generate a random number between 1 and 10
    int guess;
    int tries = 0;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I have selected a number between 1 and 10. Try to guess it!" << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << secretNumber << " in " << tries << " tries." << std::endl;
        }

    } while (guess != secretNumber);

    return 0;
}
