// Omar Abdelrazek - CSCI 271 - Assignment 6
// Completed: October 26, 2026
#include <iostream> // Lets us print output.
using namespace std; // Lets us write cout without std::.

// ===== Question 1 =====
void printArray(const int arr[], int size) { // Receives the array and its size.
    for (int i = 0; i < size; i++) { // Goes through each number.
        cout << arr[i] << " "; // Prints the current number.
    }
}
void question1() {
    const int SIZE = 4; // Number of elements.
    int nums[SIZE] = {3, 6, 9, 12}; // Creates the array.
    printArray(nums, SIZE); // Passes the array name without brackets.
}

// ===== Question 2 =====
void showScores(const int arr[], int size) { // Reads scores without changing them.
    for (int i = 0; i < size; i++) { // Checks each score.
        cout << arr[i] + 5 << " "; // Prints five more, leaving the array unchanged.
    }
}

// ===== Question 3 =====
void bubbleSort(int arr[], int SIZE) { // Sorts the array in ascending order.
    for (int pass = 0; pass < SIZE - 1; pass++) { // Repeats the sorting passes.
        for (int i = 0; i < SIZE - 1 - pass; i++) { // Compares neighboring values.
            if (arr[i] > arr[i + 1]) { // Swaps when the left value is bigger.
                int temp = arr[i]; // Saves the left value.
                arr[i] = arr[i + 1]; // Moves the smaller value left.
                arr[i + 1] = temp; // Moves the saved value right.
            }
        }
    }
}

// ===== Question 4 =====
int linearSearch(const int arr[], int size, int target) { // Looks for a number.
    for (int i = 0; i < size; i++) { // Checks every element.
        if (arr[i] == target) { // Checks for a match.
            return i; // Returns the matching index.
        }
    }
    return -1; // Returns -1 only if no match was found.
}

// ===== Question 5 =====
int binarySearch(const int arr[], int size, int target) { // Searches a sorted array.
    int low = 0, high = size - 1; // Sets the search range.
    while (low <= high) { // Keeps checking even when one position remains.
        int mid = (low + high) / 2; // Finds the middle index.
        if (arr[mid] == target) return mid; // Returns the match.
        else if (arr[mid] < target) low = mid + 1; // Searches the right half.
        else high = mid - 1; // Searches the left half.
    }
    return -1; // No match was found.
}

int main() { // Runs the five corrected examples.
    cout << "Question 1: "; // Labels the first result.
    question1(); // Prints the array.
    cout << "\nQuestion 2: "; // Labels the second result.
    int scores[] = {10, 20, 30, 40}; // Example scores.
    showScores(scores, 4); // Prints each score plus five.
    cout << "\nQuestion 3: "; // Labels the third result.
    int numbers[] = {64, 25, 12, 22, 11}; // Unsorted numbers.
    bubbleSort(numbers, 5); // Sorts the numbers.
    for (int i = 0; i < 5; i++) cout << numbers[i] << " "; // Prints sorted numbers.
    cout << "\nQuestion 4: "; // Labels the fourth result.
    int values[] = {5, 8, 3, 9}; // Array to search.
    cout << linearSearch(values, 4, 3); // Prints the index of 3.
    cout << "\nQuestion 5: "; // Labels the fifth result.
    int sorted[] = {10, 20, 30, 40, 50}; // Sorted array.
    cout << binarySearch(sorted, 5, 50) << '\n'; // Prints the index of 50.
    return 0; // Ends the program.
}
