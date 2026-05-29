# Section D — Functions

## 22. Square and Cube Using Functions

Create functions:

* square()
* cube()

### Solution

```cpp
#include <iostream>
using namespace std;

void square(double num){
    cout << num << "^" << "2" << " = " << num * num << endl;
}

void cube(double num){
    cout << num << "^" << "3" << " = " << num * num * num << endl;
}

int main() {

    double n;
    cout<<"Enter number: ";
    cin>>n;
    
    square(n);
    cube(n);
    
    return 0;
}
```

---

## 23. Even/Odd Using Function

Create a function returning:

* Even
* Odd

### Solution

```cpp
#include <iostream>
using namespace std;

void check(int n){
    if(n % 2 == 0){
        cout<<n<<" is an even number"<<endl;
    }
    else{
        cout<<n<<" is an odd number"<<endl;
    }
}

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    check(n);
    
    return 0;
}
```

---

## 24. Prime Number Using Function

Write a separate function:

```cpp
bool isPrime(int n)
```

### Solution

```cpp
#include <iostream>
using namespace std;

bool isprime(int n){
    if(n <= 1){
        return false;
    }
    else{
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
        
        return true;
    }
}

int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    bool prime = isprime(n);
    
    if(prime){
        cout<<n<<" is a Prime number"<<endl;
    }
    else{
        cout<<n<<" is not a Prime number"<<endl;
    }
    
    return 0;
}
```

---

## 25. Permutation and Combination

Create functions for:

Permutation:

[
^nP_r = \frac{n!}{(n-r)!}
]

Combination:

[
^nC_r = \frac{n!}{r!(n-r)!}
]

### Solution

```cpp
#include <iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = n; i > 0; i--){
        factorial = factorial * i; 
    }
    return factorial;
}

void Permutation(int n, int r){
    
    int nPr;
    
    nPr = fact(n)/fact(n-r);
    cout<<"nPr = "<<nPr<<endl;
}

void Combination(int n, int r){
    
    int nCr;
    
    nCr = fact(n)/(fact(r) * fact(n-r));
    cout<<"nCr = "<<nCr<<endl;
}

int main(){
    
    int n,r;
    
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<"Enter r: ";
    cin>>r;
    
    Permutation(n,r);
    Combination(n,r);
    
    return 0;
}
```
