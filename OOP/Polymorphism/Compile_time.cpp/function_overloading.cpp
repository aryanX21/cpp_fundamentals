/*
    Program: Function Overloading in C++

    Description:
    This program demonstrates function
    overloading in Object Oriented Programming.

    - Polymorphism:
      Ability of the same function or object
      to behave differently in different situations.

    - Compile-time Polymorphism:
      Type of polymorphism where the function
      call is decided by the compiler during
      compilation.

    - Function Overloading:
      Multiple functions having the same name
      but different parameters.
  
    The compiler decides which function
    to call based on the number and type
    of arguments.
*/

#include<iostream>
using namespace std;

void add(int a, int b){
    cout<<a + b<<endl;
}

void add(int a, int b, int c){
    cout<<a + b + c<<endl;
}

void add(double a, double b){
    cout<<a + b<<endl;
}

int main(){
    
    add(34,56);
    add(67.4434,454.5433);
    add(3,4,5);

    return 0;
}
