// Omar Abdelrazek - Assignment 5
#include <iostream> // Provides input and output.
using namespace std; // Allows cout and cin without std::.
int main() { // Starts the program.
    const int SIZE = 5; // Sets the fixed array size.
    int scores[SIZE]; // Stores five test scores.
    for (int i = 0; i < SIZE; i++) { // Visits each score position.
        cout << "Enter score " << i + 1 << ": "; // Prompts for a score.
        cin >> scores[i]; // Reads the score into the array.
    } // Ends the input loop.
    int sum = 0; // Starts the total at zero.
    int highest = scores[0]; // Initializes maximum to the first score.
    int lowest = scores[0]; // Initializes minimum to the first score.
    for (int i = 0; i < SIZE; i++) { // Checks every score.
        sum += scores[i]; // Adds the current score to the total.
        if (scores[i] > highest) highest = scores[i]; // Updates the maximum.
        if (scores[i] < lowest) lowest = scores[i]; // Updates the minimum.
    } // Ends the statistics loop.
    double average = static_cast<double>(sum) / SIZE; // Preserves decimal precision.
    cout << "Scores:"; // Prints the scores label.
    for (int i = 0; i < SIZE; i++) cout << " " << scores[i]; // Prints scores on one line.
    cout << "\nSum: " << sum << "\nAverage: " << average; // Prints sum and average.
    cout << "\nHighest: " << highest << "\nLowest: " << lowest << '\n'; // Prints extremes.
    return 0; // Ends successfully.
} // Ends main.
