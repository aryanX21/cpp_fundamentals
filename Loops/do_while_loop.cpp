/*
    Program: Do-While Loop (Print 1 to n)
    Description:
    This program takes a number n as input from the user
    and prints numbers from 1 to n using a do-while loop.

    Syntax:
    do{
        // code to be executed
    }while(condition);

    Explanation:
    - The loop body executes first, then the condition is checked
    - This ensures that the loop runs at least once

    Flow:
    1. Loop body executes first
    2. Condition is checked
    3. If true → loop repeats
    4. If false → loop stops

    Note:
    Do-while loop is used when we want the code to run
    at least one time regardless of the condition.
*/

#include <iostream>
using namespace std;

int main(){

    int i = 1, n;

    cout << "Enter n: ";
    cin >> n;

    do{
        cout << i << " ";
        i++;
    }while(i <= n);

    return 0;
}