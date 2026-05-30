# Section E — Arrays

## 26. Largest Element in Array

Find largest element from array.

### Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of array: "; 
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int max = arr[0];
    
    for(int i  = 0; i < n; i++){
        if(arr[i] > max ){
            max = arr[i];
        }  
    }
    
    cout<<"Largest element: "<<max<<endl;
    
    return 0;
}
```

---

## 27. Reverse an Array

Reverse array without using extra array.

### Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of array: "; 
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    cout<<"Before reversing: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    for(int i  = 0; i < n/2; i++){
            int temp;
            temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - i - 1] = temp;
    }
    
    cout<<"After reversing: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
```

---

## 28. Linear Search

Search an element and print its index.

### Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of array: "; 
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int num;
    
    cout<<"Enter element to search: ";
    cin>>num;
    
    bool found;
    
    for(int i = 0; i < n; i++){
        if(num == arr[i]){
            cout<<"Index: "<<i<<endl;
            found = true;
        }
    }

    if(!found){
        cout<<"Given element is not in array"<<endl;
    }
    
    return 0;
}
```

---

## 29. Second Largest Element

Find second largest element in array.

### Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of array: "; 
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int max = arr[0];
    
    for(int i  = 0; i < n; i++){
        if(arr[i] > max ){
            max = arr[i];
        }  
    }
    
    int min = arr[0];
    for(int i  = 0; i < n; i++){
        if(arr[i] < min ){
            min = arr[i];
        }  
    }
    
    int max2 = min;
    for(int i = 0; i < n; i++){
        if(arr[i] != max){
            if(arr[i] > max2){
                max2 = arr[i];
            }
        }
    }
    
    cout<<"2nd Largest Element: "<<max2<<endl;
    
    return 0;
}
```

---

## 30. Bubble Sort

Sort array using Bubble Sort.

### Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    
    int n,temp;
    cout<<"Enter size of the array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of array: "; 
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
           if(arr[j] > arr[j+1]){
              temp = arr[j+1];
              arr[j+1] = arr[j];
              arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
```
