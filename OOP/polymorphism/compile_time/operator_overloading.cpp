/*
    Program: Operator Overloading in C++

    Description:
    This program demonstrates operator
    overloading in Object Oriented Programming.

    - Operator Overloading:
      Giving special meaning to operators
      for user-defined data types using
      functions.

    In this program, the '+' operator is
    overloaded to add two complex numbers.
*/

#include<iostream>
using namespace std;

class Complex{

public:

    int real;
    int imag;

    Complex(int real, int imag){

        this->real = real;
        this->imag = imag;
    }

    Complex operator + (Complex &c){

        int r = real + c.real;
        int i = imag + c.imag;

        return Complex(r, i);
    }

    void display(){

        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){

    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}