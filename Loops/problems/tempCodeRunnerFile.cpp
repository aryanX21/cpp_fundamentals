#include<iostream>
using namespace std;

int main(){

    int n, fact = 1;

    cout<<"Enter n: ";
    cin>>n;

    if(n < 0){
        cout<<"Factorial not defined for negative numbers";
    }

    else{
       for(int i = 1; i <= n ; i++){
        fact *= i;
       }
    }

    cout<<n<<"! = "<<fact<<endl;

    return 0;
}