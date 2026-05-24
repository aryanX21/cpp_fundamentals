# Section A — Basics, Operators & Conditionals

---

## 1. Number Type Checker

Write a program to check whether a number is:

* Positive
* Negative
* Zero

### Solution

```cpp
#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter a number: ";
    cin>>n;

    if(n > 0){
        cout<<"Number is Positive"<<endl;
    }

    else if(n < 0){
        cout<<"Number is Negative"<<endl;
    }

    else{
        cout<<"Entered Number is 0"<<endl;
    }

    return 0;
}
```

---

## 2. Divisibility Checker

Check whether a number is divisible by both 5 and 11.

### Solution

```cpp
#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter a number: ";
    cin>>n;

    if(n % 5 == 0 && n % 11 == 0){
        cout<<"Number is divisble by both 5 and 11"<<endl;
    }

    else if(n % 5 == 0){
        cout<<"Number is divisble by 5 but not divisible by 11"<<endl;
    }

    else if(n % 11 == 0){
        cout<<"Number is divisble by 11 but not divisible by 5"<<endl;
    }

    else{
        cout<<"Number is not divisble by both 5 and 11"<<endl;
    }

    return 0;
}
```

---

## 3. Largest Among Three Numbers

Take three integers as input and print the largest number using nested if-else.

### Solution

```cpp
#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    cout<<"Enter c: ";
    cin>>c;

    if(a > b && a > c){
        cout<<"Largest number is: "<<a<<endl;
    }

    else if(b > a && b > c){
        cout<<"Largest number is: "<<b<<endl;
    }

    else{
        cout<<"Largest number is: "<<c<<endl;
    }

    return 0;
}
```

---

## 4. Grade Calculator

Input marks and print grade:

* A (90+)
* B (75–89)
* C (50–74)
* Fail (<50)

### Solution

```cpp
#include<iostream>
using namespace std;

int main(){

    int m1,m2,m3;
    double per;

    cout<<"Enter marks of 3 subject: ";
    cin>>m1>>m2>>m3;

    per = (m1 + m2 + m3)/3.0;

    cout<<"Percentage: "<<per<<"%"<<endl;

    if(per >= 90){
        cout<<"Grade: A"<<endl;
    }

    else if(per >= 75){
        cout<<"Grade: B"<<endl;
    }

    else if(per >= 50){
        cout<<"Grade: C"<<endl;
    }

    else{
        cout<<"Fail"<<endl;
    }

    return 0;
}
```

---

## 5. Simple Calculator

Using switch case, perform:

* Addition
* Subtraction
* Multiplication
* Division

### Solution

```cpp
#include<iostream>
using namespace std;

int main(){

    double num1,num2;
    char ch;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    cout<<"Enter operation: ";
    cin>>ch;

    switch(ch){

    case '+':
        cout<<"Sum = "<<num1 + num2<<endl;
        break;

    case '-':
        cout<<"Difference = "<<num1 - num2<<endl;
        break;

    case '*':
        cout<<"Product = "<<num1 * num2<<endl;
        break;

    case '/':
        cout<<"Quotient = "<<num1 / num2<<endl;
        break;
    }

    return 0;
}
```
