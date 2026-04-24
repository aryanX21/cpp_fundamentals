/*
    Program: Linear Search
    Description:
    Searches an element in an array using linear search.
    If found, displays its index and exits the program;
    otherwise prints element not found.
*/

#include<iostream>
using namespace std;

int main(){

    int n,element;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout<<"Enter element to search: ";
    cin>>element;

    for(int i = 0; i < n; i++){
        
        if(arr[i] == element){
            cout<<"Element found at index: "<<i<<endl;
            return 0;  // this will end the program right here if the element found
        }
    }
    
    cout<<"Element not found"<<endl;     

    return 0;
}