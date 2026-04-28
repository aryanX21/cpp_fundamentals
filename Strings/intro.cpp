/*
    Program: Introduction to Strings

    Description:
    This program demonstrates string declaration,
    initialization, input and output using getline().
    
    getline syntax -> getline(cin, string_variable);
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    string a = "My name is Aryan Prasad";

    cout<<"Enter string: ";
    getline(cin,str);

    cout<<str<<endl;
    cout<<a;

    return 0;
}