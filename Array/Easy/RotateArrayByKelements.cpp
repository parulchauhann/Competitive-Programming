// Approach: Using a temp array
// 1. rotate the element to the right

#include <bits/stdc++.h>

using namespace std;

void RotateArray(int n, vector<int>& arr, int k){
    if(n==0){
        return;
    }

    k = k%n;
    if(k>n){
        return;
    }
    vector<int> temp(k);
    for(int i=n-k; i<n; i++){
        temp[i-n+k] = arr[i];
    }
    
    for(int i=n-k-1; i>=0; i--){
        arr[i+k] = arr[i];
    }

    for(int i=0; i<k; i++){
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    RotateArray(n, arr, k);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


// 2. rotate the elements to the left

// #include <bits/stdc++.h>

// using namespace std;

// void rotateArray(int n, vector<int>& arr, int k){
//     if(n==0){
//         return;
//     }

//     k = k%n;
//     if(k==0){
//         return;
//     }
    
//     vector<int> temp(k);
//     for(int i=0; i<k; i++){
//         temp[i] = arr[i];
//     }

//     for(int i=k; i<n; i++){
//         arr[i-k] = arr[i];
//     }

//     for(int i=0; i<k; i++){
//         arr[n-k+i] = temp[i];
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;

//     rotateArray(n, arr, k);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }