/*
    Program: if Statement
    Description:
    Executes code only when 'if' condition is true.
*/


#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the number: ";
    cin>>num;

    if(num > 0){
        cout<<"ENTERED NUMBER IS POSITIVE";
    }

    return 0;  

}