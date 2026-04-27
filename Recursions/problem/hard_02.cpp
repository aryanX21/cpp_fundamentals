/*
    Program: Palindrome Check Using Recursion

    Description:
    This program reverses a number using recursion
    and checks whether it is palindrome or not.
*/

#include<iostream>
using namespace std;

int reverse(int n, int rev){
    if(n == 0) return rev;
    int rem  = n % 10;
    rev = rev*10 + rem;
    return  reverse(n / 10, rev);
}

bool palindrome(int org,int rev){
    if(rev == org) return true;
    else return false;
}

int main(){
    int n;
    bool ispalindrome;

    cout<<"Enter n: ";
    cin>>n;
 
    ispalindrome = palindrome(n,reverse(n,0));

    if(ispalindrome){
        cout<<n<<" is a palindrome"<<endl;
    }
    else{
        cout<<n<<" is not a palindrome"<<endl;
    }
     
    return 0;

}