// CSC 221 Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Project 1: Ingredient Adjuster
// A recipe calls for the following ingredients to make 48 cookies:
//  a. 1.5 cups of sugar
//  b. 1 cup of butter
//  c. 2.75 cups of flour
// Write a program that asks the user how many cookies they want to make and displays the required amount of ingredients.
// 
// Begin by defining the constant values for each ingredient needed to bake 48 cookies.
// Enter the number of cookies the user wants to make.
// Calculate the required amount for x ingredient using the formula: (x_per_48 / base_cookies) * num_cookies
// Display the required amount of each ingredient.
// End the program with a return 0 statement.

#include <iostream>
using namespace std;

int main() {
    // Given recipe ingredients for 48 cookies
    const double sugar_per_48 = 1.5;
    const double butter_per_48 = 1.0;
    const double flour_per_48 = 2.75;
    const int base_cookies = 48;

    // Ask user for the desired number of cookies
    int num_cookies;
    cout << "Enter the number of cookies you want to make: ";
    cin >> num_cookies;

    // Calculate required ingredients
    double sugar_needed = (sugar_per_48 / base_cookies) * num_cookies;
    double butter_needed = (butter_per_48 / base_cookies) * num_cookies;
    double flour_needed = (flour_per_48 / base_cookies) * num_cookies;

    // Display the results
    cout << "You will need:\n";
    cout << sugar_needed << " cups of sugar\n";
    cout << butter_needed << " cups of butter\n";
    cout << flour_needed << " cups of flour\n";

    return 0;
}
