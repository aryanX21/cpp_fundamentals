#include<iostream>
using namespace std;

int sum(int a, int b){  // int a, int b are parameters
    int s = a + b;
    return s;
}

int min(int a, int b){
    if(a>b){
       return b;
    }
    else{
     return a;
    }
}
int main(){
    cout<<sum(12,22);
    cout<<endl;

    cout<<min(2,22)<<" is min";  //  2,22 are arguments or actual value of functions

return 0;

}