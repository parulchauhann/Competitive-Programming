// Brute Force Approach

#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& arr, int n){
    set <int> set;
    for(int i=0; i<n; i++){
        set.insert(arr[i]);
    }

    int k = set.size();
    int j=0;
    for(int x: set){
        arr[j++] = x;
    }
    return k;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k = removeDuplicates(arr, n);
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}



// Optimal Approach

// #include <bits/stdc++.h>

// using namespace std;

// int removeDuplicates(vector<int>& arr, int n){
//     int i=0;
//     for(int j=1; j<n; j++){
//         if(arr[i]!=arr[j]){
//             i++;
//             arr[i]=arr[j];
//         }
//     }
//     return i+1;
// }

// int main() {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int k = removeDuplicates(arr, n);
//     for(int i=0; i<k; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }