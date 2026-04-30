/*
    Program: Reverse a String

    Description:
    This program reverses a string manually
    by calculating its length and swapping
    characters from both ends.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    int l = 0;
    for(int i = 0; str[i] != '\0'; i++){
        l++;
    }

    //cout<<"Length of string:  "<<length<<endl;

    for(int i = 0; i < l/2; i++){
        char temp;
        temp = str[i];
        str[i] = str[l - (i + 1)];
        str[l - (i + 1)] = temp;
    }

    cout<<"Reversed string: "<<str<<endl;

    return 0; 
}