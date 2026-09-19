// Omar Abdelrazek - Assignment 3
#include <iostream> // Provides cin and cout for console input and output.
int main() { // Starts the program.
    int age; // Stores the person's age.
    int isMember; // Stores 1 for a member or 0 for a nonmember.
    std::cout << "Enter your age: "; // Prompts for the person's age.
    std::cin >> age; // Reads the age entered by the user.
    std::cout << "Are you a member? (1 = yes, 0 = no): "; // Explains the membership choices.
    std::cin >> isMember; // Reads the membership choice.
    if ((age >= 60) || (age >= 18 && isMember == 1)) { // Qualifies seniors or adult members.
        std::cout << "You qualify for the discount.\n"; // Reports eligibility.
    } else { // Handles people who meet neither eligibility rule.
        std::cout << "You do not qualify for the discount.\n"; // Reports ineligibility.
    } // Ends the eligibility decision.
    return 0; // Reports successful completion.
} // Ends the program.
