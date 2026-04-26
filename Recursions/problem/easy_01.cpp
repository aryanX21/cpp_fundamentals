/*
    Program: Print Numbers Using Recursion

    Description:
    This program prints numbers from a starting value
    to an ending value using recursion.

    It uses a base case to stop recursion and a
    recursive call to print the next number.
*/

#include<iostream>
using namespace std;


void print(int n, int a){
    if(n > a) return;  
    cout<<n<<" ";
    print( n + 1, a);
}

int main(){

    int n,a;
    
    cout<<"Enter starting number: ";
    cin>>n;

    cout<<"Enter last number: ";
    cin>>a;

    print(n,a);

    return 0;

}