/*
    Program: Strong Number using Functions
    
    Description:
    Strong number is a special number where the sum of the factorials
    of its digits is equal to the original number.

    This program calculates the sum of factorial of digits and checks
    whether the number is strong or not.
*/

#include<iostream>
using namespace std;

int fact(int n){
    
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
     return fact;
    
}

int strong(int n){

    int sum = 0;

    for(;n > 0; n = n/10){
        int digit = n % 10;        
        sum += fact(digit);
    }

    return sum;
}

bool isstrong(int str, int org){  // org = original number
    if(org == str){               // str = strong number
        return true;
    }
    else{ 
        return false;
    }
}

int main(){

    int num;
    cout<<"Enter number: ";
    cin>>num;

    bool result = isstrong(strong(num), num);
    
    if(result == true){
        cout<<num<<" is a strong number"<<endl;
    }
    else{
        cout<<num<<" is not a strong number"<<endl;
    }

    return 0;
}