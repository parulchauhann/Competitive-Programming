// Find the repeating and missing numbers
// Problem Statement: You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.
// Examples
// Example 1:
// Input Format
// :  array[] = {3,1,2,5,3}
// Result
// : {3,4)
// Explanation
// : A = 3 , B = 4 
// Since 3 is appearing twice and 4 is missing

// Example 2:
// Input Format
// : array[] = {3,1,2,5,4,6,7,5}
// Result
// : {5,8)
// Explanation
// : A = 5 , B = 8 
// Since 5 is appearing twice and 8 is missing


//Optimal Approach

#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    long long n = a.size();
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }

    long long val1 = S - SN;
    long long val2 = S2 - S2N;

    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}

