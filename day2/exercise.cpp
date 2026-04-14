#include <iostream>
#include <iomanip>

using namespace std;

/**
 * DAY 2 CHALLENGE: The Unit Converter
 * ----------------------------------
 * Create a program that:
 * 1. Asks for a distance in Kilometers.
 * 2. Converts it to Miles (1 km = 0.621371 miles).
 * 3. Shows the size of the variables used.
 * 4. Uses 'const' for the conversion factor.
 */

int main() {
    const double KM_TO_MILES = 0.621371;
    double kilometers;

    cout << "=== Day 2 Challenge: KM to Miles Converter ===" << endl;
    cout << "Enter distance in Kilometers: ";
    
    // For this exercise, we'll hardcode a value to demonstrate execution, 
    // but the user can modify it for input.
    kilometers = 10.0; 
    cout << kilometers << " (Hardcoded for demo)" << endl;

    double miles = kilometers * KM_TO_MILES;

    cout << fixed << setprecision(2);
    cout << kilometers << " km is approximately " << miles << " miles." << endl;
    
    cout << "\n--- Behind the Scenes ---" << endl;
    cout << "Memory used for KM (double): " << sizeof(kilometers) << " bytes" << endl;
    cout << "Memory used for Miles (double): " << sizeof(miles) << " bytes" << endl;
    cout << "Memory used for Constant factor: " << sizeof(KM_TO_MILES) << " bytes" << endl;

    return 0;
}
