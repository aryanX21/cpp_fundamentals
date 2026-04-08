/*
    Program: Nested if-else Statement
    Description:
    This program demonstrates nested if-else statements.

    A number is taken as input from the user.
    First, it checks whether the number is positive, negative, or zero.

    Inside each condition, it checks whether the number is even or odd.

    Nested if-else means using if-else inside another if-else block.
*/

#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num > 0) {
        cout << "Number is Positive" << endl;

        if (num % 2 == 0) {
            cout << "Number is Even" << endl;
        } else {
            cout << "Number is Odd" << endl;
        }
    }
    else if (num < 0) {
        cout << "Number is Negative" << endl;

        if (num % 2 == 0) {
            cout << "Number is Even" << endl;
        } else {
            cout << "Number is Odd" << endl;
        }
    }
    else {
        cout << "Number is Zero" << endl;
    }

    return 0;
}