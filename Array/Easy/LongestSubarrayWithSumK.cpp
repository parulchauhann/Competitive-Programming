// Problem statement
// You are given an array 'a' of size 'n' and an integer 'k'.
// Find the length of the longest subarray of 'a' whose sum is equal to 'k'.

// Example :
// Input: ‘n’ = 7 ‘k’ = 3
// ‘a’ = [1, 2, 3, 1, 1, 1, 1]
// Output: 3
// Explanation: Subarrays whose sum = ‘3’ are:
// [1, 2], [3], [1, 1, 1] and [1, 1, 1]
// Here, the length of the longest subarray is 3, which is our final answer.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 7 3
// 1 2 3 1 1 1 1
// Sample Output 1 :
// 3
// Explanation Of Sample Input 1 :
// Subarrays whose sum = ‘3’ are:
// [1, 2], [3], [1, 1, 1] and [1, 1, 1]
// Here, the length of the longest subarray is 3, which is our final answer.
// Sample Input 2 :
// 4 2
// 1 2 1 3
// Sample Output 2 :
// 1
// Sample Input 3 :
// 5 2
// 2 2 4 1 2 
// Sample Output 3 :
// 1
// Expected time complexity :
// The expected time complexity is O(n).

// Constraints :
// 1 <= 'n' <= 5 * 10 ^ 6
// 1 <= 'k' <= 10^18
// 0 <= 'a[i]' <= 10 ^ 9

// Time Limit: 1-second



// Brute Force Approach



#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); 

    int len = 0;
    for (int i = 0; i < n; i++) { 
        for (int j = i; j < n; j++) { 
            long long s = 0;
            for (int K = i; K <= j; K++) {
                s += a[K];
            }

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{
    int n;
    cin >> n;
    long long k;
    cin >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}


// Optimzed Approach
// #include <bits/stdc++.h>
// using namespace std;

// int getLongestSubarray(vector<int>& a, long long k) {
//     int n = a.size(); 

//     int len = 0;
//     for (int i = 0; i < n; i++) { 
//         long long s = 0;
//         for (int j = i; j < n; j++) {
//             s += a[j];

//             if (s == k)
//                 len = max(len, j - i + 1);
//         }
//     }
//     return len;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     long long k;
//     cin >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int len = getLongestSubarray(a, k);
//     cout << "The length of the longest subarray is: " << len << "\n";
//     return 0;
// }