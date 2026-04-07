/*
    Program: Switch Case (Days of Week)
    Description:
    This program takes a number (1-7) as input and displays
    the corresponding day of the week using switch-case.

    Switch-case is a control statement used to select one option 
    from multiple choices based on the value of a variable.

    Each case represents a possible value, and the matching case
    block is executed.

    The 'break' statement is used to stop execution after a case is matched.
*/

#include<iostream>
using namespace std;

int main(){

    int day;

    cout<<"Enter day (1-7): ";
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday\n";
            break;

        case 2:
            cout<<"Tuesday\n";
            break;

        case 3:
            cout<<"Wednesday\n";
            break;

        case 4:
            cout<<"Thursday\n";
            break;

        case 5:
            cout<<"Friday\n";
            break;

        case 6:
            cout<<"Saturday\n";
            break;

        case 7:
            cout<<"Sunday\n";
            break;

        default:
            cout<<"Invalid day\n";
    }

    return 0;
}