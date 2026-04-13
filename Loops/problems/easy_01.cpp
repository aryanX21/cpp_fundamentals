/*
    Program: Sum of First N Numbers
    Description:
    Takes a number n as input and prints the sum of numbers from 1 to n using a for loop.
*/

#include<iostream>
using namespace std;

int main(){

    int n,sum = 0;

    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i<=n ; i++){
        sum += i;  // sum = sum + i
    }

    cout<<"sum of n terms: "<<sum<<endl;

    return 0;
}