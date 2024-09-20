// Brute Force Approach

#include <bits/stdc++.h>

using namespace std;

void leftRotateArray(vector<int> arr, int n){
    int temp[n];
    for(int i=1; i<n; i++){
        temp[i-1] = arr[i];
    }
    temp[n-1] = arr[0];
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    leftRotateArray(arr, n);

    return 0;
}


// Optimal Approach

// #include <bits/stdc++.h>

// using namespace std;

// void leftRotateArray(vector<int> arr, int n){
//     for(int i=0; i<n; i++){
//         arr[i] = arr[i+1];
//     }
//     arr[n-1] = arr[0];
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     leftRotateArray(arr, n);

//     return 0;
// }