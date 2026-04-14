#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
    // 1. Primitive Data Types
    int age = 22;
    double salary = 45000.50;
    char grade = 'A';
    bool isStudent = true;
    string name = "John Doe"; // Technically a class, but essential for Day 2

    cout << "--- Basic Data Types ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl << endl;

    // 2. Memory Sizes (sizeof operator)
    cout << "--- Memory Sizes (Bytes) ---" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl << endl;

    // 3. Variable Scope Demonstration
    cout << "--- Variable Scope ---" << endl;
    {
        int localVariable = 100;
        cout << "Inside block: localVariable = " << localVariable << endl;
    }
    // cout << localVariable; // Error: localVariable is not in this scope

    int globalLike = 50; 
    if (true) {
        int inner = 20;
        cout << "Accessing outer variable from inner scope: " << globalLike << endl;
        cout << "Inner variable: " << inner << endl;
    }
    // cout << inner; // Error: inner is out of scope

    return 0;
}
