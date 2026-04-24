/*
    Program: Reverse an Array
    Description:
    This program reverses an array by swapping elements
    from both ends toward the center.
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n/2; i++){
        
        int temp = arr[i];
        arr[i] = arr[n - (i + 1)];
        arr[n - (i + 1)] = temp;
    }

    cout<<"New Array: "<<endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

    