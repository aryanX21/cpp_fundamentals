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

## 37. Student Structure Program

Create structure containing:

* Name
* Roll Number
* Marks

Display all details.

---

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
