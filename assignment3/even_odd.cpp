// Omar Abdelrazek - Assignment 3

#include <iostream> // Provides cin and cout for console input and output.
using namespace std; // Allows cin and cout without the std prefix.
int main() { // Starts the program.
    int number; // Stores the integer to classify.
    cout << "Enter an integer: "; // Prompts for an integer.
    cin >> number; // Reads the integer entered by the user.
    if (number % 2 == 0) { // An integer is even when division by 2 leaves no remainder.
        cout << "That's Even.\n"; // Prints the even classification.
    } else { // All other integers have a nonzero remainder and are odd.
        cout << "That's Odd.\n"; // Prints the odd classification.
    } // Ends the parity decision.
    return 0; // Reports successful completion.
} // Ends the program.
