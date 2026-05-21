/*
    Program: File Writing in C++

    Description:
    This program demonstrates file handling
    using ofstream in C++.

    - File Handling:
      Used to store and retrieve data
      permanently using files.

    - ofstream:
      Used to create and write data
      into a file.

    - fout:
      Object of ofstream class used
      to access and write into the file.

    In this program, data is written
    into a text file named data.txt.
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){  

    ofstream fout("data.txt"); // Creating file object

    // Writing into file

    fout<<"Hello World"<<endl;
    fout<<"File Handling in C++";

    

    fout.close(); // Closing file

    cout<<"Data written successfully"<<endl;

    return 0;
}