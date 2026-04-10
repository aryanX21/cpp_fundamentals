/*
    Program: Electricity Bill Calculator (Simple Version)
    Description:
    This program takes the number of electricity units consumed
    as input and calculates the total bill based on different rates.

    Different rates are applied depending on the range of units.

    Problem Statement:
    Write a program to calculate electricity bill using the following rates:
    - 0–100 units  → ₹5 per unit
    - 101–150 units → ₹7 per unit
    - 151–200 units → ₹8.5 per unit
    - Above 200 units → ₹10 per unit

    Note:
    This program uses a simple range-based approach (not slab system).
    Will update it later.
*/

#include<iostream>
using namespace std;

int main(){

    double unit,bill;

    cout<<"Enter your unit: ";
    cin>>unit;

    if(unit <= 100){
        bill = unit*5;
    }
    else if(unit <= 150){
        bill = unit*7;
    }
    else if(unit <= 200){
        bill = unit*8.5;
    }
    else{
        bill = unit * 10;
    }

    cout<<"Bill: "<<bill<<" Rs."<<endl;

    return 0;
}