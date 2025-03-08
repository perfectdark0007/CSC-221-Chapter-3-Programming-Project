// CSC 221 Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Project 2: Math Tutor
// Write a program to generate a simple addition problem and check the user's answer.
// 
// Begin seeding the random number generator with the current time to ensure different results each time.
// Generate two random numbers between 1 and 100.
// Have user enter their answer to the addition problem.
// Solve the addition problem.
// Display if correct or incorrect along with correct answer.
// End the program with a return 0 statement.

#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate two random numbers between 1 and 100
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;
    int userAnswer;

    // Display the math problem
    cout << "Solve the following addition problem:\n";
    cout << "  " << num1 << "\n";
    cout << "+ " << num2 << "\n";
    cout << "--------" << endl;

    // Prompt the user to enter their answer
    cout << "Enter your answer: ";
    cin >> userAnswer;

    // Pause and wait for the user to press Enter
    cout << "\nPress Enter to check the correct answer...";
    cin.ignore();  // Ignore any leftover newline character
    cin.get();     // Wait for user to press Enter

    // Display the correct answer
    cout << "\nThe correct answer is: " << (num1 + num2) << endl;

    // Check if the student's answer was correct
    if (userAnswer == num1 + num2) {
        cout << "Correct!\n";
    }
    else {
        cout << "Oops! Practice makes perfect.\n";
    }

    return 0;
}
