/*
    Program: Random Number Generation in C++

    Description:
    This program demonstrates random
    number generation in C++ using
    rand() and srand() functions.

    - seed value:
      Seed value is the initial value used by 
      the random number generator to produce 
      a sequence of random numbers.

    - rand():
      Generates random numbers.

    - srand():
      Sets the seed value for generating
      different random numbers each run.

    - time(0):
      Provides current time value used
      as seed for randomness.

    In this program, a random number
    between 1 and 100 is generated.
*/

#include<iostream>
#include<cstdlib>   
#include<ctime>     

using namespace std;

int main(){

    srand(time(0));  // Seed for random numbers

    int random_num = rand() % 100 + 1;  // Random number between 1 and 100

    cout<<"Random Number: "
        <<random_num<<endl;

    return 0;
}