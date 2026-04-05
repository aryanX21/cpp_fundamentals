/*
    Program: Relational Operators in C++
    Description:
    Demonstrates comparison between two values using user input.

    - ==  -> equal to
    - !=  -> not equal to
    - >   -> greater than
    - <   -> less than
    - >=  -> greater than or equal to
    - <=  -> less than or equal to

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

    cout << "\n--- Relational Operators ---\n" << endl;

    cout << boolalpha; 
    // boolalpha -> prints true/false instead of 1/0

    cout << "a == b : " << (a == b) << endl;
    // == checks if both values are equal

    cout << "a != b : " << (a != b) << endl;
    // != checks if values are not equal

    cout << "a > b  : " << (a > b) << endl;
    // > checks if a is greater than b

    cout << "a < b  : " << (a < b) << endl;
    // < checks if a is less than b

    cout << "a >= b : " << (a >= b) << endl;
    // >= checks if a is greater than or equal to b

    cout << "a <= b : " << (a <= b) << endl;
    // <= checks if a is less than or equal to b

    return 0;
}