// Brute Force Approach

#include <bits/stdc++.h>

using namespace std;

int checkArraySort(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result = checkArraySort(arr, n);
    if(result){
        cout<<"True";
    } else{
        cout<<"False";
    }

    return 0;
}



// Optimal Approach

// #include <bits/stdc++.h>

// using namespace std;

// int checkArraySort(vector<int> arr, int n){
//     for(int i=0; i<n; i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     int result = checkArraySort(arr, n);
//     if(result){
//         cout<<"True";
//     } else {
//         cout<<"False";
//     }

//     return 0;
// }