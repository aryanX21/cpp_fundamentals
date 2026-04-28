/*
    Program: String Length Without Built-in Function

    Description:
    This program finds the length of a string
    manually using a loop.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    int length = 0;
    for(int i = 0; str[i] != '\0'; i++){
        length++;
    }

    cout<<"Length of string:  "<<length<<endl;

    return 0;
}