/*
    Program: Reverse a Number
    Description:
    Takes a number as input and reverses it using digit extraction with a loop.
*/

#include<iostream>
using namespace std;

int main(){
    int n,rev = 0;
    cout<<"Enter n: ";
    cin>>n;


    for(; n>0 ; n = n/10){
        int rem = n % 10;
        rev = rev*10 + rem;        
    }

    cout<<"Reverse number: "<<rev<<endl;    

    return 0;
}