/*
    Program: Even or Odd using Function
    Description:
    Takes a number as input and checks whether it is even or odd
    using a function.
*/

#include<iostream>
using namespace std;

void check(int x){
    if(x % 2 == 0){
        cout<<x<<" is Even"<<endl;
    }

    else{
        cout<<x<<" is Odd"<<endl;
    }
}

int main(){
    
    int n;

    cout<<"Enter n: ";
    cin>>n;

    check(n);

    return 0;
}