// CSC 221 Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Project 3: Interest Earned
// Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded. 
// 
// Begin the program with the necessary libraries for math and I/O operations.
// Establish the main functions.
// Have user input for principal(your starting income), interest rate, and number of times compounded.
// Convert the interest rate to decimal form.
// Calculate the final amount using the formula: amount = principal * (1 + (rate / timesCompounded))^timesCompounded.
// Display the report with the necessary information.
// End the program with a return 0 statement.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double principal, rate, amount;
    int timesCompounded;

    // Get user input
    cout << "Enter the principal amount: $";
    cin >> principal;

    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> rate;

    cout << "Enter the number of times interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert rate to decimal form
    rate /= 100.0;

    // Calculate the final amount
    amount = principal * pow(1 + (rate / timesCompounded), timesCompounded);

    // Display the report
    cout << "\n------------------------------\n";
    cout << "Interest Rate:       " << fixed << setprecision(2) << rate * 100 << "%\n";
    cout << "Times Compounded:    " << timesCompounded << endl;
    cout << "Principal:           $" << fixed << setprecision(2) << principal << endl;
	cout << "Interest:            $" << fixed << setprecision(2) << (amount - principal) << endl;
    cout << "Amount in Savings:   $" << fixed << setprecision(2) << amount << endl;
    cout << "-------------------------------\n";

    return 0;
}
