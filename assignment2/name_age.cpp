// CSCI 271 - Assignment 2 Mini Lab
#include <iostream> // Provides cout for output and cin for input.
#include <string>   // Provides the string data type.

using namespace std; // Lets the program use standard-library names without std::.

int main() { // Program execution begins in main.
    string name; // Stores the user's name.
    int age; // Stores the user's age as a whole number.

    cout << "Enter your name: "; // Prompts the user to enter a name.
    getline(cin, name); // Reads the complete name, including spaces.

    cout << "Enter your age: "; // Prompts the user to enter an age.
    cin >> age; // Reads the age from the keyboard.

    cout << "Hello, I am " << name << "! I am " << age << " year(s) old.\n"; // Prints a greeting using both values.

    return 0; // Reports that the program finished successfully.
}
