# Section B — Loops

## 6. Sum of First N Numbers

Find sum:

[
1 + 2 + 3 + \cdots + n
]

```cpp id="25p5wb"
#include <iostream>
using namespace std;

int main() {
    
    int n,sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    
    cout<<"Sum of first n numbers: "<<sum<<endl;

    return 0;
}
```

---

## 7. Multiplication Table

Print multiplication table of a number till 10.

```cpp id="9n12na"
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i = 1; i <= 10; i++){
        cout<<n<<" X "<<i<<" = "<<n * i<<endl;
    }
    
    return 0;
}
```

---

## 8. Reverse a Number

Input:

```txt id="93d61w"
12345
```

Output:

```txt id="dj5lwn"
54321
```

```cpp id="y0vwr9"
#include <iostream>
using namespace std;

int main() {
    
    int n,rev = 0;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i = 0; n > 0; n = n/10){
        int rem = n % 10;
        rev = rev*10 + rem;
    }
    
    cout<<"Reverse number = "<<rev<<endl;
    
    return 0;
}
```

---

## 9. Factorial Using Loop

Find factorial of a number.

[
n! = n \times (n-1) \times (n-2) \cdots 1
]

```cpp id="n2rkjv"
#include <iostream>
using namespace std;

int main() {
    
    int n,fact = 1;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i = n; i > 0; i--){
        fact *= i;
    }
    
    cout<<n<<"! = "<<fact<<endl;
    
    return 0;
}
```

---

## 10. Prime Number Check

Check whether a number is prime or not.

```cpp id="m6fmp0"
#include <iostream>
using namespace std;

int main() {
    
    int n;
    bool isprime = true;
    cout<<"Enter n: ";
    cin>>n;
    
    if(n == 0){
        cout<<"0 is not a prime number"<<endl;
    }
    
    else if(n < 0){
        cout<<"Prime numbers are not defined for negative numbers"<<endl;
    }
    
    else if(n == 1){
        cout<<"1 is not a prime number"<<endl;
    }
    
    else{
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                 isprime = false;
            }
        }
    }
    
    if(isprime && n > 1){
        cout<<n<<" is a Prime number"<<endl;
    }
    else{
        cout<<n<<" is not a Prime number"<<endl;
    }
    
    return 0;
}
```

---

## 11. Fibonacci Series

Print first N Fibonacci numbers.

[
F_n = F_{n-1} + F_{n-2}
]

```cpp id="jlwm6u"
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    int a,b,c;
    
      a = 0;
      b = 1; 
      c = 1;
      
    for(int i = 0; i < n; i++){
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}
```

---

## 12. Count Digits

Count total digits in a number.

```cpp id="e7u9ck"
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    int count = 0;
     
    for(int i = 0; n > 0; n = n/10){
        count++;
    }
    
    cout<<"NO. of digits: "<<count<<endl;
    
    return 0;
}
```

---

## 13. Armstrong Number

Check whether a number is Armstrong or not.

Example:

[
153 = 1^3 + 5^3 + 3^3
]

```cpp id="j6ddyr"
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int temp = n;
    
    int count = 0;
    for(int i = 0; temp > 0; temp = temp/10){
        count++;
    }
   
    temp = n;
    
    int sum = 0;
    
    for(int i = 0; i < count; i++){
        
        int a = 1;
        int rem;
        rem = temp % 10;
        
        for(int i = 0; i < count; i++){
           a *= rem;
        }
        
        sum += a;
        
        temp = temp/10;
    }
    
    if(sum == n){
        cout<<n<<" is an Armstrong number"<<endl;
    }
    
    else{
        cout<<n<<" is not an Armstrong number"<<endl;
    }
    
   return 0;
}
```

---

## 14. Strong Number

Check whether a number is a Strong Number.

Example:

[
145 = 1! + 4! + 5!
]

```cpp id="ujhfgv"
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    int temp = n;
    
    int sum = 0;
    
    for(int i = 0; temp > 0; temp = temp/10){
        int fact = 1;
        int rem = temp % 10;
         for(int i = rem; i > 0; i--){
            fact *= i;
         }
         
         sum += fact;
    }
    
    if(sum == n){
        cout<<n<<" is a Strong number"<<endl;
    }
    else{
        cout<<n<<" is not a Strong number"<<endl;
    }
    
    return 0;
}
```

---

## 15. Palindrome Number

Check whether a number remains same after reverse.

```cpp id="cw62af"
#include <iostream>
using namespace std;

int main() {
    
    int n,rev = 0;
    cout<<"Enter n: ";
    cin>>n;
    
    int temp = n;
    
    for(int i = 0; n > 0; n = n/10){
        int rem = n % 10;
        rev = rev*10 + rem;
    }
    
    cout<<"Reverse number = "<<rev<<endl;
    
    if(rev == temp){
        cout<<temp<<" is a palindrome number"<<endl;
    }
    else{
        cout<<temp<<" is not a palindrome number"<<endl;
    }
    
    return 0;
}
```
