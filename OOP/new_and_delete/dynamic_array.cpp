/*
    Program: Dynamic Array using new and delete

    Description:
    This program demonstrates dynamic memory
    allocation using new and delete operators.

    The program creates a dynamic array,
    stores values in it, displays the values,
    and then releases the allocated memory.

    Accessing memory after delete leads
    to undefined behavior.
*/

#include<iostream>
using namespace std;

int main(){

    int* arr;
    arr = new int[3]; // dynamic array

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    delete[] arr;

    cout<<"Memory released"<<endl; // Accessing deleted memory leads to undefined behavior

    return 0;
}