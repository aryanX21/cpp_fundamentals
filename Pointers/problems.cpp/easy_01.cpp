/*
    Program: Modify Variable using Pointer

    Description:
    This program demonstrates how a pointer stores the
    address of a variable and can modify its value using
    the dereference operator. It also shows that the
    memory address remains unchanged.
*/

#include<iostream>
using namespace std;

int main(){

    int x = 10;

    int *ptr = &x;

    cout<<"Value of x before changing: "<<x<<endl;
    cout<<"Address of x: "<<ptr<<endl;

    *ptr = 20;

    cout<<"Value of x after changing: "<<x<<endl;
    cout<<"Address of x: "<<ptr<<endl;

    return 0;
}