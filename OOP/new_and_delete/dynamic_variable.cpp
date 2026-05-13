/*
    Program: Dynamic Variable using new and delete

    Description:
    This program demonstrates dynamic memory
    allocation for a single variable using
    new and delete operators.

    - new Operator:
      Allocates memory dynamically in heap memory.

    - delete Operator:
      Frees dynamically allocated memory.

    The program creates a dynamic integer
    variable, stores a value using a pointer,
    displays the value, and then releases
    the allocated memory.
*/

#include<iostream>
using namespace std;

int main(){

    int* ptr = new int;  // Dynamic variable allocation
    *ptr = 100;

    cout<<"Value: "<<*ptr<<endl;

    delete ptr; // Releasing allocated memory

    cout<<"Memory released"<<endl;

    return 0;
}