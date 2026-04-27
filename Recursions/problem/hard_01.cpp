/*
    Program: Fibonacci Using Recursion

    Description:
    This program finds the nth Fibonacci term
    using recursion.
*/

#include<iostream>
using namespace std;

int fibo(int n){
  if( n <= 1) return n;
      return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cout<<"n: ";
    cin>>n;

    cout<<fibo(n);
}