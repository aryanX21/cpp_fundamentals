/*
    Program: Electricity Bill Calculator (Slab-Based Version)
    Description:
    This program takes the number of electricity units consumed
    as input and calculates the total bill using a slab-based system.

    In a slab system, different rates are applied to different portions
    of the total units, not the entire unit at once.

    Problem Statement:
    Write a program to calculate electricity bill using the following slabs:
    - First 100 units     → ₹5 per unit
    - Next 50 units       → ₹7 per unit (101–150)
    - Next 50 units       → ₹8.5 per unit (151–200)
    - Above 200 units     → ₹10 per unit

    The bill should be calculated by adding charges from each slab step by step.
*/

#include<iostream>
using namespace std;

int main(){

    double unit,bill,remunit;

    cout<<"Enter your unit: ";
    cin>>unit;

    if(unit <= 100){
        bill = unit*5;
    }
    else if(unit <= 150){
        remunit = unit - 100;
        bill = (remunit*7 + 5*100);
    }
    else if(unit <= 200){
        remunit = unit - 150;
        bill = (remunit*8.5 + 50*7 + 100*5);
    }    
    else{
        remunit = unit - 200;
        bill = (remunit*10 + 100*5 + 50*7 + 50*8.5);
    }

    cout<<"Bill: "<<bill<<" Rs."<<endl;

    return 0;
}