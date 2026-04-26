/*
    Program: Factorial Using Recursion

    Description:
    This program calculates factorial of a number
    using recursion.

    Each function call multiplies n with factorial(n-1)
    until the base case is reached.
*/

#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

int main(){
    int n;

    cout<<"n: ";
    cin>>n;
    
    cout<<factorial(n);
    return 0;
}