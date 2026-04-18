/*
    Program: Butterfly Pattern
    Description:
    Takes a number n as input and prints a butterfly pattern
    using nested loops by combining upper and lower halves.
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    // Upper part
    for(int i = 1; i <= n; i++){

        // left stars
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }

        // spaces
        for(int j = 1; j <= 2*(n-i); j++){
            cout<<" ";
        }

        // right stars
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }

        cout<<endl;
    }

    // Lower part
    for(int i = n; i >= 1; i--){

        // left stars
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }

        // spaces
        for(int j = 1; j <= 2*(n-i); j++){
            cout<<" ";
        }

        // right stars
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}