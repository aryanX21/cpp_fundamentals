/*
    Program: Prime Number Check using Function
    Description:
    Takes a number as input and checks whether it is prime
    using a function and optimized loop.
*/

#include<iostream>
using namespace std;

bool prime(int n){
    if(n <= 1){
        return false;
    }
    
    for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;            
    }


int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;

    bool isprime = prime(num);

    if(isprime == false){
        cout<<num<<" is not a prime number"<<endl;
    }

    else{
        cout<<num<<" is a prime number"<<endl;
    }

    return 0;
}