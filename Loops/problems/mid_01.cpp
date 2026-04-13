/*
    Program: Factorial of a Number
    Description:
    Takes a number as input and calculates its factorial using a for loop.
    Handles negative input.
*/

#include<iostream>
using namespace std;

int main(){

    int n, fact = 1;

    cout<<"Enter n: ";
    cin>>n;

    if(n < 0){
        cout<<"Factorial not defined for negative numbers"<<endl;
    }

    else{
       for(int i = 1; i <= n ; i++){
        fact *= i;
       }
       cout<<n<<"! = "<<fact<<endl;
    }

    return 0;
}