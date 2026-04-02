/*
    Program: Input and Output in C++
    Description:
    This program shows how to take input from the user and display output.

    - cin      -> used to take input from the user
    
    - cout     -> used to print/output something on the screen
    
    - getline  -> used to take full line input (including spaces)
      syntax   -> getline(cin, string_name);
      
    - endl     -> used to move to the next line
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
