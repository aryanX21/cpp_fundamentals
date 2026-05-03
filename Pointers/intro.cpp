/*
    Program: Introduction to Pointers

    Description:
    This program demonstrates basic concepts of pointers
    including address operator and dereference operator.

    & (Address-of Operator):
    It is used to get the address of a variable.
    Example: &x gives the memory address of x.

    * (Dereference Operator):
    It is used to access the value stored at a given address.
    Example: *ptr gives the value stored at the address ptr is pointing to.

    Pointers are useful for:
    - Accessing memory directly
    - Modifying variables using functions (pass by reference)
    - Efficient array handling
*/

#include<iostream>
using namespace std;

int main(){

    int x = 10;

    int *ptr = &x;

    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x: "<<&x<<endl;

    cout<<"Pointer value (address): "<<ptr<<endl;
    cout<<"Value at pointer (*ptr): "<<*ptr<<endl;

    return 0;
}