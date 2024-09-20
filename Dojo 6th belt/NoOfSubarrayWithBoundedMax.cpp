// Ques. Number of Subarrays with Bounded Maximum
// Given an integer array nums and two integers left and right, return the number of contiguous non-empty subarrays such that the value of the maximum array element in that subarray is in the range [left, right].

// The test cases are generated so that the answer will fit in a 32-bit integer.

// Example 1:
// Input: nums = [2,1,4,3], left = 2, right = 3
// Output: 3
// Explanation: There are three subarrays that meet the requirements: [2], [2, 1], [3].

// Example 2:
// Input: nums = [2,9,2,5,6], left = 2, right = 8
// Output: 7
 
// Constraints:
// 1 <= nums.length <= 105
// 0 <= nums[i] <= 109
// 0 <= left <= right <= 109


#include <bits/stdc++.h>

using namespace std;

int numOfSubarray(vector<int>& arr, int& size, int& left, int& right){
    int result = 0;
    int tempLeft = -1;
    int tempRight = -1;
    for(int i=0; i<size; i++){
        if(arr[i]>right){
            tempLeft = i;
        }
        if(arr[i]>=left){
            tempRight=i;
        }
        result += tempRight - tempLeft;
    }
    return result;
}

int main() {
    int size, left, right;
    cin>>size>>left>>right;
    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<numOfSubarray(arr, size, left, right);

    return 0;
}