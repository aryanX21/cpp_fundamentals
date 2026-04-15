/*
    Program: Number Increasing Triangle
    Description:
    Takes a number n as input and prints a triangle where
    each row contains the same number repeated i times.
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<i;
        }

        cout<<endl;
    }

    return 0;
}