// CSC 221 Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
