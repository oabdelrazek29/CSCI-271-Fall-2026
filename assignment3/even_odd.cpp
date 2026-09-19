// Omar Abdelrazek - Assignment 3
// The assignment checklist requests this file but provides no separate problem statement.
#include <iostream> // Provides cin and cout for console input and output.
int main() { // Starts the program.
    int number; // Stores the integer to classify.
    std::cout << "Enter an integer: "; // Prompts for an integer.
    std::cin >> number; // Reads the integer entered by the user.
    if (number % 2 == 0) { // An integer is even when division by 2 leaves no remainder.
        std::cout << "That's Even.\n"; // Prints the even classification.
    } else { // All other integers have a nonzero remainder and are odd.
        std::cout << "That's Odd.\n"; // Prints the odd classification.
    } // Ends the parity decision.
    return 0; // Reports successful completion.
} // Ends the program.
