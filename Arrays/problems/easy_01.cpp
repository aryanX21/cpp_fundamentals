/*
    Program: Sum of Array Elements
    Description:
    This program takes elements of an array as input
    and calculates the sum of all elements using a loop.
*/

#include<iostream>
using namespace std;

int main(){

    int arr[5],sum = 0;

    cout<<"Enter elements of array: ";

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout<<"Sum of elements of array: "<<sum<<endl;

    return 0;
}

