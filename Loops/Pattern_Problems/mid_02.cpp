/*
    Program: Number Palindrome Pyramid
    Description:
    Takes a number n as input and prints a centered pyramid
    with increasing and decreasing numbers using nested loops.
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for(int j = n-1; j>i; j--){
            cout<<" ";
        }

        for(int j = 1; j <= i+1; j++){
            cout<<j;
        }

        if(i != 0){
        for(int j = i; j > 0; j--){
            cout<<j;
        }}

        cout<<endl;
       
    }

}