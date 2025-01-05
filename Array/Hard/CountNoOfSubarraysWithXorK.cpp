// Count the number of subarrays with given xor K
// Problem Statement: Given an array of integers A and an integer B. Find the total number of subarrays having bitwise XOR of all elements equal to k.
// Pre-requisite: Find the number of subarrays with the sum K

// Examples
// Example 1:
// Input Format:
//  A = [4, 2, 2, 6, 4] , k = 6
// Result:
//  4
// Explanation:
//  The subarrays having XOR of their elements as 6 are  [4, 2], [4, 2, 2, 6, 4], [2, 2, 6], [6]

// Example 2:
// Input Format:
//  A = [5, 6, 7, 8, 9], k = 5
// Result:
//  2
// Explanation:
//  The subarrays having XOR of their elements as 5 are [5] and [5, 6, 7, 8, 9]


//Optimal Approach




#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int> a, int k) {
    int n = a.size(); 
    int xr = 0;
    map<int, int> mpp; 
    mpp[xr]++;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i];

        int x = xr ^ k;
        cnt += mpp[x];

        mpp[xr]++;
    }
    return cnt;
}

int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
}

