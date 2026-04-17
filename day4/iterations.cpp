#include <iostream>

using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "       Day 4: Iterations (Loops)       " << endl;
    cout << "========================================" << endl << endl;

    // 1. While Loop (Condition-first)
    cout << "1. Counting with 'while' loop:" << endl;
    int count = 1;
    while (count <= 5) {
        cout << "   - Loading... " << count * 20 << "%" << endl;
        count++;
    }

    // 2. For Loop (Iterative)
    cout << "\n2. Multiplication Table with 'for' loop:" << endl;
    int num = 5;
    for (int i = 1; i <= 5; i++) {
        cout << "   - " << num << " x " << i << " = " << num * i << endl;
    }

    // 3. Do-While (Execution-first)
    cout << "\n3. Password Entry with 'do-while' loop:" << endl;
    int pin = 1234;
    int inputPin;
    int attempts = 0;
    do {
        cout << "   Enter PIN (Attempt " << attempts + 1 << "): ";
        // For demonstration, we'll just simulate the input logic
        inputPin = 1234; // Simulating correct entry
        attempts++;
    } while (inputPin != pin && attempts < 3);
    cout << "   - Access Granted!" << endl;

    // 4. Prime Number Challenge
    cout << "\n4. CHALLENGE: Prime Number Checker" << endl;
    int n;
    cout << "   Enter a number: ";
    cin >> n;

    bool isPrime = true;
    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "   - " << n << " is a Prime Number!" << endl;
    else
        cout << "   - " << n << " is NOT a Prime Number." << endl;

    cout << "\n========================================" << endl;
    cout << "   Day 4 Complete! Master the loops!  " << endl;
    cout << "========================================" << endl;

    return 0;
}
