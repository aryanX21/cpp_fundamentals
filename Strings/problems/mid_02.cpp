/*
    Program: Count Vowels in String

    Description:
    This program takes a string as input and counts
    the number of vowels (both uppercase and lowercase)
    present in the string.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;

    cout<<"Enter string: ";
    getline(cin,s);

    int n = s.length();
    
    int count = 0;

    for(int i = 0; i < n; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
           s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            count++;
        }
    }

    cout<<"No. of vowels: "<<count<<endl;

    return 0;
}