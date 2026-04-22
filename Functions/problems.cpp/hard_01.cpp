/*
    Program: Permutation and Combination using Functions
    Description:
    Calculates nPr and nCr using factorial function.
    Input validation is handled in nPr and nCr functions
    to ensure valid computation.
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

int nPr(int n, int r){
    if(n < 0 || r < 0 || r > n){
        return -1;
    }
    else{
    return fact(n)/fact(n - r);
    }
}

int nCr(int n, int r){
    if(n < 0 || r < 0 || r > n){
        return -1;
    }
    else{
    return fact(n)/(fact (r) * fact(n - r));
    }
}

int main(){

    int n,r;

    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter r: ";
    cin>>r;

    int P = nPr(n,r);
    int C = nCr(n,r);

    if(P == -1){
        cout<<"Invalid input"<<endl;
    }

    else{
    cout<<"nPr: "<<P<<endl;    
    cout<<"nCr: "<<C<<endl;
    }

    return 0;

}