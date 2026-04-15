#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "   Day 3: Control Flow (Branching)     " << endl;
    cout << "========================================" << endl << endl;

    // 1. If / Else If / Else Structure
    int score;
    cout << "Enter your score (0-100): ";
    cin >> score;

    cout << "1. Logical Branching Result: ";
    if (score >= 90) {
        cout << "Excellent! You got an A." << endl;
    } else if (score >= 80) {
        cout << "Great job! You got a B." << endl;
    } else if (score >= 70) {
        cout << "Good effort! You got a C." << endl;
    } else if (score >= 60) {
        cout << "You passed! You got a D." << endl;
    } else {
        cout << "Study harder next time. You got an F." << endl;
    }

    // 2. Logical Operators (&&, ||, !)
    cout << "\n2. Logical Operators Check:" << endl;
    if (score >= 0 && score <= 100) {
        cout << "   - Input is within valid range (0-100)." << endl;
    } else {
        cout << "   - WARNING: Input is out of typical range!" << endl;
    }

    bool isWeekend = true;
    bool hasHomework = false;
    if (isWeekend && !hasHomework) {
        cout << "   - It's the weekend and no homework! Time to code C++." << endl;
    }

    // 3. The Switch Statement (Best for discrete values)
    int dayCode;
    cout << "\nEnter a day number (1-7, where 1 is Monday): ";
    cin >> dayCode;

    cout << "3. Switch Result: Today is ";
    switch (dayCode) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "an invalid day!"; break;
    }
    cout << endl;

    // 4. Ternary Operator (Short-hand if/else)
    int number;
    cout << "\nEnter a number to check if it's even or odd: ";
    cin >> number;
    
    string result = (number % 2 == 0) ? "Even" : "Odd";
    cout << "4. Ternary Result: The number " << number << " is " << result << "." << endl;

    cout << "\n========================================" << endl;
    cout << "   Day 3 Complete! Keep practicing!   " << endl;
    cout << "========================================" << endl;

    return 0;
}
