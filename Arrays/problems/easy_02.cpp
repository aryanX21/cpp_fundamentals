/*
    Program: Largest Element in an Array
    Description:
    This program takes array elements as input
    and finds the largest element using a loop.
*/

#include<iostream>
using namespace std;

int main(){
    
    int arr[5];
    
    
    cout<<"Enter elements of array:  ";

    for(int i = 0; i<5 ; i++){
        cin>>arr[i];
    }
    
    int max = arr[0];
    
    for(int i = 1; i<5 ; i++){
       if(arr[i] > max) {
        max = arr[i];
       }
    }

    cout<<max;

    return 0;
}