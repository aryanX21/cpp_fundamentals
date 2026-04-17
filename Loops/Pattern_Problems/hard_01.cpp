/*
    Program: Hollow Pyramid Pattern
    Description:
    Takes a number n as input and prints a hollow pyramid pattern
    using nested loops and conditional statements.
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n-i; j++){
            cout<<" ";
        }

        for(int j = 1; j <= 2*i-1; j++){
            if(j == 1 || j == 2*i-1 || i == n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}