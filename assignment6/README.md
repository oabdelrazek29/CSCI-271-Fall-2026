# Assignment 6 - Arrays, Sorting, and Searching

Omar Abdelrazek | CSCI 271 | October 26, 2026

For this assignment, I worked on passing arrays to functions, bubble sort, and searching through arrays. Part A has the multiple-choice answers, and Part B has five code examples where I fixed the bugs.

## Files

- `answers.md` - My answers for the 10 multiple-choice questions in Part A.
- `assignment6.cpp` - All five corrected code questions from Part B in one file, with simple comments explaining the fixes.

## Part B

1. **Print array:** Fixed the function call by passing the array name without brackets.
2. **Show scores:** Prints each score plus 5 without changing the original array.
3. **Bubble sort:** Changed the comparison so the numbers sort from smallest to biggest.
4. **Linear search:** Moved `return -1` outside the loop so it checks the whole array.
5. **Binary search:** Changed the loop condition so it also checks the last remaining number.

## Run

```bash
g++ -std=c++11 -Wall -Wextra assignment6.cpp -o assignment6
./assignment6
```

## Expected output

```text
Question 1: 3 6 9 12
Question 2: 15 25 35 45
Question 3: 11 12 22 25 64
Question 4: 2
Question 5: 4
```
