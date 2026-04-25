/*
 Program: Second Largest Element
 Description:
 Finds the second largest element in an array
 using two traversals without sorting.
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

    int max2 = INT16_MIN;

    for(int i = 1; i<5 ; i++){
        if(arr[i] != max){
            if(arr[i] > max2) {
              max2 = arr[i];
            }
        }
    }

    cout<<"Second maximum element: "<<max2<<endl;

    return 0;
}