/*
    Program: Palindrome String Using Reverse

    Description:
    This program reverses a string manually and
    checks whether it is a palindrome or not.
*/

#include<iostream>
#include<string>
using namespace std;

int length(string str){
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    return len;
}

string reverseStr(string str){
    int l = length(str);

    for(int i = 0; i < l/2; i++){
        char temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }

    return str;
}

int main(){
    
    string str;

    cout<<"Enter string: ";
    getline(cin,str);

    string rev_str = reverseStr(str);

    cout<<"Reversed string: "<<rev_str<<endl;

    if(str == rev_str){
        cout<<"Entered string is Palindrome";
    }
    else{
        cout<<"Entered string is not Palindrome";
    }

    return 0; 
}