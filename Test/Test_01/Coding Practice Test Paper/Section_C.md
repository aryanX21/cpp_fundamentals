# Section C — Pattern Problems

## 16. Right Triangle Star Pattern

### Example

```txt
*
**
***
****
```

### Code

```cpp
#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < i + 1; j++){

            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}
```

---

## 17. Number Increasing Triangle

### Example

```txt
1
22
333
4444
```

### Code

```cpp
#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < i + 1; j++){

            cout<<i + 1;
        }

        cout<<endl;
    }

    return 0;
}
```

---

## 18. Reverse Number Triangle

### Example

```txt
1234
123
12
1
```

### Code

```cpp
#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for(int j = n; j > i; j--){

            cout<<n - j + 1;
        }

        cout<<endl;
    }

    return 0;
}
```

---

## 19. Number Palindrome Pyramid

### Example

```txt
    1
   121
  12321
 1234321
```

### Code

```cpp
#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for(int j = n; j > i; j--){

            cout<<" ";
        }

        for(int j = 0; j < i + 1; j++){

            cout<<j + 1;
        }

        if(i != 0){

            for(int j = i; j > 0; j--){

                cout<<j;
            }
        }

        cout<<endl;
    }

    return 0;
}
```

---

## 20. Hollow Pyramid Pattern

### Example

```txt
    *
   * *
  *   *
 *******
```

### Code

```cpp
#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for(int j = n; j > i; j--){

            cout<<" ";
        }

        for(int j = 1; j <= 2 * i + 1; j++){

            if(i != n - 1){

                if(j == 1 || j == 2 * i + 1){

                    cout<<"*";
                }

                else{

                    cout<<" ";
                }
            }

            else{

                cout<<"*";
            }
        }

        cout<<endl;
    }

    return 0;
}
```

---

## 21. Butterfly Pattern

### Example

```txt
*      *
**    **
***  ***
********
***  ***
**    **
*      *
```
