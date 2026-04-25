/*
    Program: Bubble Sort

    Description:
    Bubble Sort is a sorting technique in which adjacent
    elements are compared and swapped if they are in the
    wrong order.

    After every pass, the largest unsorted element moves
    to its correct position at the end of the array.

    This program sorts array elements in ascending order
    using nested loops and swapping.
*/\

#include<iostream>
using namespace std;

int main(){
    
    int n,temp;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];    
    
    cout<<"Enter elements of array:  ";

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
        if(arr[j] > arr[j+1]){
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }}


    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}