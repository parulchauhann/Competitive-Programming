// Problem statement
// Given an array ‘a’ of size ‘n’-1 with elements of range 1 to ‘n’. The array does not contain any duplicates. Your task is to find the missing number.



// For example:
// Input:
// 'a' = [1, 2, 4, 5], 'n' = 5

// Output :
// 3

// Explanation: 3 is the missing value in the range 1 to 5.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :
// 4 
// 1 2 3
// Sample Output 1:
// 4
// Explanation Of Sample Input 1:
// 4 is the missing value in the range 1 to 4.
// Sample Input 2:
// 8
// 1 2 3 5 6 7 8
// Sample Output 2:
// 4
// Explanation Of Sample Input 2:
// 4 is the missing value in the range 1 to 8.
// Expected time complexity:
// The expected time complexity is O(n).
// Constraints:
// 1 <= 'n' <= 10^6 
// 1 <= 'a'[i] <= 'n'
// Time Limit: 1 sec



// Brute Force Approach
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {
    for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;
}

int main()
{
    int N;
    cin >> N;
    vector<int> a(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> a[i];
    }
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}



// Optimal Approach
// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int>&a, int N) {
//     int sum = (N * (N + 1)) / 2;
//     int s2 = 0;
//     for (int i = 0; i < N - 1; i++) {
//         s2 += a[i];
//     }
//     int missingNum = sum - s2;
//     return missingNum;
// }

// int main() {
    // int N;
    // cin >> N;
    // vector<int> a(N - 1);
    // for (int i = 0; i < N - 1; i++) {
    //     cin >> a[i];
    // }
    // int ans = missingNumber(a, N);
    // cout << "The missing number is: " << ans << endl;
    // return 0;
// }