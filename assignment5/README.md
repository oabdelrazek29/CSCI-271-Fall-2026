# Assignment 5 - One-Dimensional Arrays

Omar Abdelrazek | CSCI 271 | Fall 2026

For this assignment, I worked with one-dimensional arrays in C++. The three programs use loops to go through arrays, find values, and work with the data. I kept everything simple using fixed-size arrays and basic functions.

## Programs

### score_stats.cpp
This program asks the user to enter five test scores. It stores them in an array, then calculates the sum, average, highest score, and lowest score. It also prints all five scores.

### search_count.cpp
This program starts with an array of ten numbers and asks the user what number to search for. If the number is there, it prints the index of the first match and how many times it appears. If it isn't there, it says the number wasn't found.

### array_utils.cpp
This program uses three functions to work with an array of six numbers. One prints the numbers forward, another prints them backward, and the last counts how many numbers are greater than a limit entered by the user.

## Running the programs

Compile and run each file separately using a C++ compiler. For example:

```bash
g++ -std=c++11 score_stats.cpp -o score_stats
./score_stats
```

Replace `score_stats` with `search_count` or `array_utils` to run the other programs.

All three programs use regular arrays, for loops, and simple C++ concepts from Lesson 5.
