/*
    Program: Count Frequency of Alphabets

    Description:
    This program takes a string as input and counts
    how many times each alphabet (a–z) appears in it.
    It treats uppercase and lowercase letters as the same
    and ignores non-alphabet characters.
*/

#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin,s);

    int freq[26] = {0};  

    for(int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);   

        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            char ch = 'a' + i;
            cout << ch << " -> " << freq[i] << endl;
        }
    }

    return 0;
}