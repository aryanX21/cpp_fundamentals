/*
    Program: File Reading in C++

    Description:
    This program demonstrates file handling
    using ifstream in C++.

    - File Handling:
      Used to store and retrieve data
      permanently using files.

    - ifstream:
      Input file stream class used to
      read data from files.

    - fin:
      Object of ifstream class used
      to access and read the file.

    In this program, data is read
    from a text file named data.txt
    and displayed on the console.
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){

    // Creating input file stream object

    ifstream fin("data.txt");

    string line;

    // Reading from file

    getline(fin, line);

    cout<<line<<endl;

    getline(fin, line);

    cout<<line<<endl;

    // Closing file

    fin.close();

    return 0;
}