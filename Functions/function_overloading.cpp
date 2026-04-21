/*
    Program: Function Overloading
    Description:
    Demonstrates function overloading by defining multiple functions
    with the same name but different parameters.
*/

#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

double add(double a, double b){
    return a + b;
}

int main(){

    cout<<"Sum of 2 integers: "<<add(34,54)<<endl;

    cout<<"Sum of 3 integers: "<<add(90,54,898)<<endl;

    cout<<"Sum of 2 doubles: "<<add(34.534,54.343)<<endl;

    return 0;

}