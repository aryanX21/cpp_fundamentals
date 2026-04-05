/*
    Program: Logical Operators in C++
    Description:
    Demonstrates logical operations using user input.

    - &&  -> AND (true if both conditions are true) and (false if even one condition is false)
    - ||  -> OR  (true if at least one condition is true) and (false if only both conditions are false)
    - !   -> NOT (reverses the result)

    boolalpha is used to display boolean values in a readable format.
    It prints boolean values as true/false instead of 1/0.
*/

#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "\n--- Logical Operators ---\n" << endl;

    cout << boolalpha;
    // prints true/false instead of 1/0

    cout << "(a > 5 && b > 5) : " << (a > 5 && b > 5) << endl;
    // AND -> both conditions must be true

    cout << "(a > 5 || b > 5) : " << (a > 5 || b > 5) << endl;
    // OR -> at least one condition must be true

    cout << "!(a > b)         : " << !(a > b) << endl;
    // NOT -> reverses true to false and false to true

    return 0;
}