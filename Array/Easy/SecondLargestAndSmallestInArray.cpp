// Brute Force Approach

#include <bits/stdc++.h>

using namespace std;

void sortArr(vector<int> arr, int n){
    if(n==0 || n==1){
        cout<<-1<<" "<<-1;
    }
    sort(arr.begin(), arr.end());
    cout<<"Second Smallest Element "<<arr[1]<<endl;
    cout<<"Second Largest Element "<<arr[n-2]<<endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sortArr(arr, n);
   return 0; 
}




// Better Approach

// #include <bits/stdc++.h>

// using namespace std;

// void findElement(vector<int> arr, int n){
//     if(n==0 || n==1){
//         cout<<-1<<" "<<-1;
//     } else{
//     int small = INT_MAX;
//     int second_small = INT_MAX;
//     int large = INT_MIN;
//     int second_large = INT_MIN;
//     for(int i=0; i<n; i++){
//         small = min(small, arr[i]);
//         large = max(large, arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]<second_small && arr[i]!=small){
//             second_small=arr[i];
//         }
//         if(arr[i]>second_large && arr[i]!=large){
//             second_large=arr[i];
//         }
//     }
//     cout<<"Second smallest element "<<second_small<<endl;
//     cout<<"Second largest element "<<second_large<<endl;
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     findElement(arr, n);

//     return 0;
// }





//Optimal Approach

// #include <bits/stdc++.h>

// using namespace std;

// int secondSmallest(vector<int> arr, int n){
//     if(n<2){
//         cout<<-1<<endl;
//     }
//     int small = INT_MAX;
//     int second_small = INT_MAX;
//     for(int i=0; i<n; i++){
//         if(arr[i]<small){
//             second_small = small;
//             small = arr[i];
//         } else if(arr[i]<second_small && arr[i]!=small){
//             second_small = arr[i];
//         }
//     }
//     return second_small;
// }

// int secondLargest(vector<int> arr, int n){
//     if(n<2){
//         cout<<-1<<endl;
//     }
//     int large = INT_MIN;
//     int second_large = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>large){
//             second_large = large;
//             large = arr[i];
//         } else if(arr[i]>second_large && arr[i]!=large){
//             second_large = arr[i];
//         }
//     }
//     return second_large;
// }

// int main() {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<secondSmallest(arr, n)<<endl;
//     cout<<secondLargest(arr, n);

//     return 0;
// }