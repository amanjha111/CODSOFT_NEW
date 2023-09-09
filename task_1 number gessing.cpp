#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int randomNumber = std::rand() % 100 + 1;
    int guessing;
    int attempts = 0;
    std::cout << "Number gussing game G!\n";
    std::cout << "Pick a random number greater than 1 and less than 100.\n";
    do {
        std::cout << "Please Guess a number: ";
        std::cin >> guessing;
        attempts++;
        if (guessing > randomNumber) {
            std::cout << " Guessed number Too high! Please Try again.\n";
        } else if (guessing < randomNumber) {
            std::cout << "Guessed number Too low! Please Try again.\n";
        } else {
            std::cout << " You guessed the correct number " << randomNumber << " in " << attempts << " number of  attempts.\n";
        }
    } while (guessing != randomNumber);
    return 0;
}
