/*
    Program: Reverse Array using Pointers

    Description:
    This program reverses an array using pointer
    arithmetic by swapping elements from both ends
    and moving pointers toward the center.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of arr: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"\n\nOriginal arr: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    int *start = &arr[0];
    int *end = &arr[n - 1];

    for(int i = 0; i < n/2 ; i++){
        int temp;
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    cout<<"\n\nReversed arr: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return  0;

}