#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int n, int arr[]) {
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubbleSort(n, arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


//optimised code below:
// #include <bits/stdc++.h>

// using namespace std;

// void bubbleSort(int n, int arr[]){
//     for(int i=0; i<n; i++){
//         int flag = 0;
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//                 flag = 1;
//             }
//         }
//         if(flag == 0){
//             break;
//         }
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     bubbleSort(n, arr);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }