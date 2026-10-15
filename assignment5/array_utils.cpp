// Omar Abdelrazek - Assignment 5
#include <iostream> // Provides input and output.
using namespace std; // Allows standard names without std::.
void printForward(const int arr[], int size) { // Prints an array from first to last.
    for (int i = 0; i < size; i++) cout << (i == 0 ? "" : " ") << arr[i]; // Prints each value.
    cout << '\n'; // Ends the output line.
} // Ends printForward.
void printReverse(const int arr[], int size) { // Prints an array from last to first.
    for (int i = size - 1; i >= 0; i--) cout << (i == size - 1 ? "" : " ") << arr[i]; // Prints backward.
    cout << '\n'; // Ends the output line.
} // Ends printReverse.
int countAbove(const int arr[], int size, int limit) { // Counts values greater than a limit.
    int count = 0; // Starts the count at zero.
    for (int i = 0; i < size; i++) { // Visits each array element.
        if (arr[i] > limit) count++; // Counts values strictly above the limit.
    } // Ends the counting loop.
    return count; // Gives the count back to main.
} // Ends countAbove.
int main() { // Starts the program.
    const int SIZE = 6; // Sets the fixed array size.
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Initializes the array.
    int limit; // Stores the user's limit.
    cout << "Forward: "; // Labels the forward output.
    printForward(values, SIZE); // Prints in original order.
    cout << "Reverse: "; // Labels the reverse output.
    printReverse(values, SIZE); // Prints in reverse order.
    cout << "Count values above: "; // Asks for the limit.
    cin >> limit; // Reads the limit.
    cout << "Count: " << countAbove(values, SIZE, limit) << '\n'; // Prints the result.
    return 0; // Ends successfully.
} // Ends main.
