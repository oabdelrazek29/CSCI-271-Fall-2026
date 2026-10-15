// Omar Abdelrazek - Assignment 5
#include <iostream> // Provides input and output.
using namespace std; // Allows standard names without std::.
int main() { // Starts the program.
    const int SIZE = 10; // Sets the fixed array size.
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // Initializes the data.
    int target; // Holds the number to search for.
    int foundIndex = -1; // Means no match has been found yet.
    int count = 0; // Counts matches.
    cout << "Enter a number to search for: "; // Prompts the user.
    cin >> target; // Reads the target number.
    for (int i = 0; i < SIZE; i++) { // Searches every array element.
        if (data[i] == target) { // Checks whether this element matches.
            if (foundIndex == -1) foundIndex = i; // Saves only the first matching index.
            count++; // Counts this occurrence.
        } // Ends the match check.
    } // Ends the search loop.
    if (foundIndex != -1) { // Checks whether any match was found.
        cout << target << " first found at index " << foundIndex << '\n'; // Prints first index.
        cout << target << " appears " << count << " time(s)\n"; // Prints match count.
    } else { // Handles a missing target.
        cout << target << " was not found.\n"; // Reports no match.
    } // Ends the result condition.
    return 0; // Ends successfully.
} // Ends main.
