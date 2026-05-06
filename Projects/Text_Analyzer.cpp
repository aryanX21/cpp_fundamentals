/*
    Project: Text Analyzer

    Description:
    This is a console-based mini project built using
    C++ fundamentals. The program analyzes a given
    text and performs multiple operations such as:

    - Finding string length
    - Counting vowels
    - Counting consonants
    - Reversing the string
    - Checking palindrome (case-insensitive)
    - Counting character frequency

    Concepts Used:
    - Strings
    - Arrays
    - Functions
    - Loops
    - Conditions
*/

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int length(string str){
    int l = 0;
    for(int i = 0; str[i]  != '\0'; i++){
        l++;
    }

    return l;
}

int vowels(string str){
    int len = 0,v = 0;
    len = length(str);
    for(int i = 0; i < len; i++){
        char ch = tolower(str[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            v++;
        }
    }
    return v;
}

int consonants(string str){
    int len = 0,c = 0;
    len = length(str);
    for(int i = 0; i < len; i++){
        char ch = tolower(str[i]);
        if(ch >= 'a' && ch <= 'z'){
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            c++;
        }}
    }
    return c;
}

string rev_str(string str){

    int l = length(str);

    for(int i = 0; i < l/2; i++){
        char temp;
        temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }
     
    return str;   
}

void palindrome(string str){

    for(int i = 0; str[i] != '\0'; i++){
        str[i] = tolower(str[i]);
    }

    if(str == rev_str(str)){
        cout<<"Entered Text is Palindrome"<<endl;
    }
    else{
        cout<<"Entered Text is not Palindrome"<<endl;
    }
}

void frequency(string str){

    int freq[26] = {0}, l = length(str);
    
    for(int i = 0; i < l; i++){
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <='z'){
            freq[ch - 'a']++; 
        }
    }

    for(int i = 0; i < 26 ; i++){
        if(freq[i] > 0){
            char ch = 'a' + i;
            cout<<ch<<" -> "<< freq[i]<<endl;
        }
    }  
}

int main(){
    
    string txt;

    cout<<"\nEnter the text: ";
    getline(cin,txt);

    cout<<"\nEntered Text: "<<txt<<endl;

    cout<<"\n---- Details ----\n"<<endl;

    int len;
    len = length(txt);

    cout<<"Length: "<<len<<endl;

    int vow;
    vow = vowels(txt);
    cout<<"Vowels: "<<vow<<endl;

    int conso;
    conso = consonants(txt);
    cout<<"Consonants: "<<conso<<endl;

    cout<<"Reversed: "<<rev_str(txt)<<endl;
    palindrome(txt);

    cout<<"Character Frequency: \n";
    frequency(txt);
    
    return 0;

}