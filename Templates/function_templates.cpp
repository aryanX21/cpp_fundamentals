/*
    Program: Function Template in C++

    Description:
    This program demonstrates the use
    of function templates in C++.

    - Function Template:
      A generic function that works
      with different data types using
      a single function definition.

    - Use of Function Templates:
      Reduces code duplication and
      improves code reusability.

    In this program, the maximum()
    template function returns the
    greater value for different
    data types.
*/

#include<iostream>
using namespace std;

template <typename T>  // Function Template

T maximum(T a, T b){

    if(a > b){
        return a;
    }

    return b;
}

int main(){

    cout<<"Maximum Integer: "
        <<maximum(10, 20)<<endl;

    cout<<"Maximum Double: "
        <<maximum(45.67, 23.11)<<endl;

    cout<<"Maximum Character: "
        <<maximum('A', 'Z')<<endl;

    return 0;
}