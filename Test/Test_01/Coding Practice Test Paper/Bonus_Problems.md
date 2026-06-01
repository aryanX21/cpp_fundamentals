# Bonus Challenge Problems (Optional)


## 31. Palindrome String

Check whether string is palindrome.

---

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    
    cout<<"Enter string: ";
    getline(cin,str);
    
    int length = 0;
    for(int i = 0; str[i] > '\0'; i++){
        str[i] = tolower(str[i]);
        length++;
    }
    
    string org = str;
    
    for(int i = 0; i < length/2; i++){
        char temp;
        temp = str[i];
        str[i] = str[length - i -1];
        str[length - i - 1] = temp;
    }
    
    if(org == str){
        cout<<"String is pallindrome"<<endl;
    }
    else{
        cout<<"String is not pallindrome"<<endl;
    }
   
    return 0;
}


## 32. Swap Using Pointers

Swap two variables using pointers.

---

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    
    int* ptr1 = &a;
    int* ptr2 = &b;
    
    cout<<"Befor swap: "<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl; 
    
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
     cout<<"After swap: "<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    
    return 0;
}

## 33. Factorial Using Recursion

Implement recursive factorial function.

---
#include <iostream>
using namespace std;

int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fact(n-1);
}

int main() {
    
    int n;
    
    cout<<"Enter n: ";
    cin>>n;
    
    int facto = fact(n);
    
    cout<<n<<"! = "<<facto<<endl;
    
    return 0;
}

## 34. Power Using Recursion

Implement:

[
x^n = x \times x^{n-1}
]

---

#include <iostream>
using namespace std;

int power(int n, int p){
    if(p == 1){
        return n;
    }
    else if(p == 0){
        return 1;
    }
    return n * power(n,p - 1);
}

int main() {
    
    int n,p;
    
    cout<<"Enter number: ";
    cin>>n;
    
    cout<<"Enter power: ";
    cin>>p;
    
    int result = power(n,p);
    
    cout<<n<<"^"<<p<<" = "<<result<<endl;
    
    return 0;
}

## 35. Reverse Array Using Pointers

Reverse complete array using pointer arithmetic.

---
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    cout<<"Original array: "<<endl;
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    int *start = &arr[0];
    int *end = &arr[n - 1];
    
    for(int i = 0; i < n/2; i++){
        int temp;
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    cout<<"Reversed array: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

## 36. Dynamic Array Using new

Create dynamic array using:

```cpp
new
```

and free memory using:

```cpp
delete[]
```

---

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int *arr;
    arr = new int[n];
    
    cout<<"Enter elements of array: ";
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    cout<<endl;
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    delete[] arr;
    
    cout<<"\nMemory released"<<endl;
    
    return 0;
}

## 37. Student Structure Program

Create structure containing:

* Name
* Roll Number
* Marks

Display all details.

---

#include<iostream>
#include<string>
using namespace std;

struct Student{
    string name;
    int roll_no,m1,m2,m3,total;
    double per;
};

int main(){
    
    Student s;
    
    cout<<"Enter name: ";
    getline(cin,s.name);
    
    cout<<"Enter roll number: ";
    cin>>s.roll_no;
    
    cout<<"Enter marks of 3 subject: ";
    cin>>s.m1>>s.m2>>s.m3;
    
    s.total = s.m1 + s.m2 + s.m3;
    
    if(s.total > 300){
        cout<<"Entered marks should not be >100"<<endl;
        return 0;
    }
    
    else{
        s.per = s.total/3.0;
    }
    
    cout<<"\n\n -----  DISPLAYING INFORMATION  -----\n\n"<<endl<<endl;
    
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll number: "<<s.roll_no<<endl;
    cout<<"Marks of Subject 1: "<<s.m1<<endl;
    cout<<"Marks of Subject 2: "<<s.m2<<endl;
    cout<<"Marks of Subject 3: "<<s.m3<<endl;
    cout<<"Total marks: "<<s.total<<endl;
    cout<<"Percentage: "<<s.per<<"%"<<endl;
    
    return 0;
}

## 38. OOP Mini Program

Create a class:

```cpp
Student
```

Include:

* Constructor
* Destructor
* Member function
* Object creation
