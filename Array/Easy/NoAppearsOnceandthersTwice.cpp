// Problem statement
// You are given a sorted array 'arr' of positive integers of size 'n'.
// It contains each number exactly twice except for one number, which occurs exactly once.
// Find the number that occurs exactly once.

// Example :
// Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.
// Output: 2
// Explanation: 1, 3, and 4 occur exactly twice. 2 occurs exactly once. Hence the answer is 2.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 5
// 1 1 2 2 3
// Sample Output 1:
// 3
// Explanation of sample output 1:
// {1, 2} each occurs twice, whereas 3 occurs only once.
// Hence the answer is 3.
// Sample Input 2:
// 5
// 8 8 9 9 10
// Sample Output 2:
// 10

// Expected time complexity :
// The expected time complexity is O(n), but try solving it in O(log n).

// Constraints:
// 1 <= 'n' <= 10^4
// 1 <= 'arr[i]' <= 10^9
// ‘n’ is always odd.
// Time Limit: 1 sec



// Brute Force Approach
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }
        if (cnt == 1) return num;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}



// Optimized Approach

// #include <bits/stdc++.h>
// using namespace std;

// int getSingleElement(vector<int> &arr) {
//     int n = arr.size();
//     int xorr = 0;
//     for (int i = 0; i < n; i++) {
//         xorr = xorr ^ arr[i];
//     }
//     return xorr;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int ans = getSingleElement(arr);
//     cout << "The single element is: " << ans << endl;
//     return 0;
// }