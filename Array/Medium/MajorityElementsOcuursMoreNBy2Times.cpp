// Problem statement
// You are given an array 'a' of 'n' integers.
// A majority element in the array ‘a’ is an element that appears more than 'n' / 2 times.
// Find the majority element of the array.
// It is guaranteed that the array 'a' always has a majority element.
// Example:
// Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]
// Output: 1
// Explanation: The frequency of ‘1’ is 5, which is greater than 9 / 2.
// Hence ‘1’ is the majority element.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 9
// 2 2 1 3 1 1 3 1 1
// Sample Output 1:
// 1
// Explanation Of Sample Input 1:
// Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]
// Output: 1
// Explanation: The frequency of ‘1’ is 5, which is greater than 9 / 2.
// Hence ‘1’ is the majority element.
// Sample Input 2:
// 1
// 4
// Sample Output 2:
// 4
// Sample Input 3:
// 5
// -53 75 56 56 56 
// Sample Output 3:
// 56
// Expected time complexity :
// The expected time complexity is O(n).
// Constraints :
// 1 <= 'n' <= 10000
// 0 <= 'arr[i]' <= 10^9

// Time limit: 1 second


// Brute Force Approach




#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] == v[i]) {
                cnt++;
            }
        }
        if (cnt > (n / 2))
            return v[i];
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}


// Optimal Approach
// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v) {

//     int n = v.size();
//     int cnt = 0;
//     int el;
//     for (int i = 0; i < n; i++) {
//         if (cnt == 0) {
//             cnt = 1;
//             el = v[i];
//         }
//         else if (el == v[i]) cnt++;
//         else cnt--;
//     }
//     int cnt1 = 0;
//     for (int i = 0; i < n; i++) {
//         if (v[i] == el) cnt1++;
//     }

//     if (cnt1 > (n / 2)) return el;
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }