/*
    Program: Input and Output in C++
    Description:
    Demonstrates how to take input and display output using:
    - cin
    - cout
    - getline
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;
    int age;
    double height;

    cout<<"----ENTER INFROMATION----"<<endl;

    cout<<"Enter name: ";
    getline(cin, name);

    cout<<"Enter age: ";
    cin>>age;

    cout<<"Enter Height: ";
    cin>>height;

    cout<<endl;

    cout<<"----DISPLAYING INFORMATION----";

    cout<<endl;

    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<endl;

    return 0;

}