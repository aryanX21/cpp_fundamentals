/*
    Program: Multiplication Table
    Description:
    Takes a number as input and prints its multiplication table from 1 to 10 using a for loop.
*/

#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i<=10 ; i++){
        cout<<n<<" X "<<i<<" = "<< n * i <<endl;
    }

    return 0;
}