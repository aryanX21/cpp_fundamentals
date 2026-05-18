/*
    Program: Class Template in C++

    Description:
    This program demonstrates the use
    of class templates in C++.

    - Class Template:
      A generic class that works with
      different data types using a
      single class definition.

    - Use of Class Templates:
      Reduces code duplication and
      improves code reusability.

    In this program, the Demo class
    contains a template function that
    returns the greater value for
    different data types.
*/

#include<iostream>
using namespace std;

template <class T>

class Demo{

public:
  
    T maximum(T a, T b){

        if(a > b){
            return a;
        }

        return b;
    }
};

int main(){

    Demo<int> d1;

    cout<<"Maximum Integer: "<<d1.maximum(10,20)<<endl;

    Demo<double> d2;

    cout<<"Maximum Double: "<<d2.maximum(34.3323,75.44243)<<endl;

    Demo<char> d3;

    cout<<"Maximum Character: "<<d3.maximum('A','Z')<<endl;

    return 0;
}