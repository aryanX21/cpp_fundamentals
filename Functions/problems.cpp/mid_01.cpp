/*
    Program: Factorial using Function
    Description:
    Calculates factorial of a number using a function.
    Handles invalid input using return value.
*/

#include<iostream>
using namespace std;

int fact(int n){

    if(n < 0){
        return -1;
    }

    else{
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
     return fact;
    }
}

int main(){

    int num;

    cout<<"Enter number: ";
    cin>>num;

    int result = fact(num);

    if(result == -1){
        cout<<"Factorial not defined"<<endl;
    }
    else{
        cout<<num<<"! = "<<result<<endl;
    }

    return 0;    
}