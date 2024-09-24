// Sliding Window Maximum
// Hint
// You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.
// Return the max sliding window.

// Example 1:
// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7

// Example 2:
// Input: nums = [1], k = 1
// Output: [1]

// Constraints:
// 1 <= nums.length <= 105
// -104 <= nums[i] <= 104
// 1 <= k <= nums.length


#include <bits/stdc++.h>

using namespace std;

void maxSlidingWindow(vector<int>& arr, int k, int size){
    set<pair<int, int>> hs;
    for(int i=0; i<k ;i++){
        hs.insert({arr[i], i});
    }
    cout<<(--hs.end()) -> first << ' ';
    // gives an iterator to the last element (the maximum value in the set) 
    for(int i=0; i<size-k; i++){
        hs.erase({arr[i], i});
        hs.insert({arr[i+k], i+k});
        cout<<(--hs.end()) -> first << ' ';
    }
}

int main() {
    int size;
    cin>>size;
    vector<int> input(size);
    for(int i=0; i<size; i++){
        cin>>input[i];
    }
    int k;
    cin>>k;
    maxSlidingWindow(input, k ,size);

    return 0;
}