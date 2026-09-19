# Assignment 3 — Decision Making and Control Flow

Omar Abdelrazek · CSCI 271 · Fall 2026

## Files

- `temp_check.cpp`: Classifies an integer Fahrenheit temperature as Freezing, Cold, Mild, or Hot.
- `eligibility.cpp`: Grants a discount at age 60 or above, or at age 18 or above with membership.
- `even_odd.cpp`: Classifies an integer as even or odd. The assignment's final checklist requests this file, although its body contains no corresponding problem statement.
- `Assignment_3_Answers.docx`: Multiple-choice answers and temperature flowchart.
- `code_output.png`: Screenshot of actual console runs.

## Build and run

Run from this directory. Each source is a separate program with its own `main` function.

```sh
mkdir -p build
clang++ -std=c++17 -Wall -Wextra -pedantic temp_check.cpp -o build/temp_check
clang++ -std=c++17 -Wall -Wextra -pedantic eligibility.cpp -o build/eligibility
clang++ -std=c++17 -Wall -Wextra -pedantic even_odd.cpp -o build/even_odd
./build/temp_check
./build/eligibility
./build/even_odd
```

On this Mac, if the compiler cannot find `iostream`, add the following compiler option:

```sh
-isystem /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1
```

## Requirements and assumptions

Every nonblank code line has an explanatory comment. The instruction “Comment out every line of the code” is interpreted as commenting on each line, since literally disabling all code would contradict the requirement that every program compile and run.

The programs expect valid integer input; membership is entered as 0 or 1, as specified. They do not validate other input. The temperature conditions run from top to bottom and stop after the first matching branch. Parentheses make the two discount routes explicit. Modulo works for zero and negative integers as well as positive integers.

## Flowchart

AI created a visual demonstration of the program through the flowchart.
