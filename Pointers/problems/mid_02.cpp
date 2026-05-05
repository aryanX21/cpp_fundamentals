/*
    Program: Modify Array using Pointer

    Description:
    This program demonstrates how array elements can be
    accessed and modified using pointer arithmetic.

    Note - ptr + i   // address of i th element of array
           *(ptr+i)  // value of i th element of array
*/

#include<iostream>
using namespace std;

int main(){

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout<<"Original array:\n";
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n\nAfter modifying using pointer:\n";
    for(int i = 0; i < 5; i++){
        *(ptr + i) = *(ptr + i) * 2;
        cout<<*(ptr + i)<<" ";
    }

    return 0;
}