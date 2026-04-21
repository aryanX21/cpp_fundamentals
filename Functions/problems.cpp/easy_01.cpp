/*
    Program: Square and Cube using Functions
    Description:
    Takes a number as input and calculates its square and cube
    using separate functions.
*/

#include<iostream>
using namespace std;

int square(int n){
    return n*n;
}

int cube(int n){
    return n*n*n;
}

int main(){

    int n;

    cout<<"Enter number: ";
    cin>>n;

    cout<<"Square of "<<n<<" is: "<<square(n)<<endl;
    cout<<"Cube of "<<n<<" is: "<<cube(n)<<endl;

    return 0;

}