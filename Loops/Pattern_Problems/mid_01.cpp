/*
    Program: Reverse Number Triangle
    Description:
    Takes a number n as input and prints a triangle where
    each row starts from increasing numbers and ends at n.
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j <= n; j++){
            cout<<j;
        }

        cout<<endl;
    }

    return 0;
}