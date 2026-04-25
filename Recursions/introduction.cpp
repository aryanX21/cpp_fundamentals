/*
    Program: Introduction to Recursion

    Description:
    Recursion is a process in which a function calls itself
    until a stopping condition (base case) is reached.

    Syntax:

    return_type function_name(parameters){
        
        // Base Case
        if(condition)
            return;

        // Recursive Call
        function_name(smaller_problem);
    }

    In this program, the function prints numbers from n to 1
    using recursion.
*/

#include<iostream>
using namespace std;


void print(int n){
    if(n == 0) return;  // will run till n==0 
    cout<<n<<" ";
    print( n - 1);
}

int main(){

    print(10);

    return 0;

}