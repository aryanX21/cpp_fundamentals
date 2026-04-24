/*
    Program: Introduction to Arrays
    Description:
    An array is a collection of elements of the same data type
    stored in contiguous memory locations.

    Syntax:
    data_type array_name[size];

    Example:
    int arr[5];

    This program takes 5 elements as input in an array
    and displays them using a loop.
*/

#include<iostream>
using namespace std;

int main(){

    int arr[5];

    cout<<"Enter elements of array: ";

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}