// Merge Overlapping Sub-intervals
// Problem Statement: Given an array of intervals, merge all the overlapping intervals and return an array of non-overlapping intervals.
// Examples
// Example 1:
// Example 1:
// Input:
//  intervals=[[1,3],[2,6],[8,10],[15,18]]
// Output:
//  [[1,6],[8,10],[15,18]]
// Explanation:
//  Since intervals [1,3] and [2,6] are overlapping we can merge them to form [1,6]
//  intervals.

// Example 2:
// Input:
//  [[1,4],[4,5]]
// Output:
//  [[1,5]]
// Explanation:
//  Since intervals [1,4] and [4,5] are overlapping we can merge them to form [1,5].


// optimal Approach




#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
    int n = arr.size(); 

    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        if (ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        }
        else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingIntervals(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}

