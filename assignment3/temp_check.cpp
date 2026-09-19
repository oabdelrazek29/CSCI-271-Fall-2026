// Omar Abdelrazek - Assignment 3
#include <iostream> // Provides cin and cout for console input and output.
int main() { // Starts the program.
    int temperature; // Stores the Fahrenheit temperature as an integer.
    std::cout << "Enter the temperature (F): "; // Prompts for a temperature.
    std::cin >> temperature; // Reads the temperature entered by the user.
    if (temperature < 32) { // Temperatures below 32 degrees are freezing.
        std::cout << "That's Freezing.\n"; // Prints the freezing classification.
    } else if (temperature <= 59) { // The remaining temperatures through 59 are cold.
        std::cout << "That's Cold.\n"; // Prints the cold classification.
    } else if (temperature <= 75) { // The remaining temperatures through 75 are mild.
        std::cout << "That's Mild.\n"; // Prints the mild classification.
    } else { // The remaining temperatures are 76 degrees or above.
        std::cout << "That's Hot.\n"; // Prints the hot classification.
    } // Ends the classification chain.
    return 0; // Reports successful completion.
} // Ends the program.
