/*
    Program: Prime Number Check
    Description:
    Takes a number as input and checks whether it is prime using a loop.
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    bool isprime = true;

    cout<<"Enter n: ";
    cin>>n;

    if(n <= 1){
        cout<<n<<" is not a prime number"<<endl;
    }
    else{
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                isprime = false;
                break;
            }
        }

        if(isprime == true){
            cout<<n<<" is a prime number"<<endl;
        }
        else{
            cout<<n<<" is not a prime number"<<endl;
        }
    }

    return 0;
}