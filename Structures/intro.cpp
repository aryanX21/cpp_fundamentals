/*
    Program: Structure with User Input

    Description:
    This program demonstrates structure usage by
    taking input from user and displaying student details.
*/

#include<iostream>
using namespace std;

struct Student{
    int roll;
    string name;
    float marks;
};

int main(){

    Student s;

    cout<<"Enter roll: ";
    cin>>s.roll;

    cout<<"Enter name: ";
    cin.ignore();
    getline(cin,s.name);

    cout<<"Enter marks: ";
    cin>>s.marks;

    cout<<"\nStudent Details:\n";
    cout<<"Roll: "<<s.roll<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Marks: "<<s.marks<<endl;

    return 0;
}