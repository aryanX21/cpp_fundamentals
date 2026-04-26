/*
    Program: Power Using Recursion

    Description:
    This program calculates n raised to power p
    using recursion.
*/

#include<iostream>
using namespace std;

int power(int n,int p){
    if(p == 0) return 1;
    return n * power(n,p-1);

}

int main(){
    
    int n,p;

    cout<<"Enter number: ";
    cin>>n;

    cout<<"Enter power: ";
    cin>>p;
    
    cout<<n<<"^"<<p<<" is: "<<power(n,p);
    
    return 0;
    
}
