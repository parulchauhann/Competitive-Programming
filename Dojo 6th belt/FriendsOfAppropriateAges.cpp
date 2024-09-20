// Friends Of Appropriate Ages
// There are n persons on a social media website. You are given an integer array ages where ages[i] is the age of the ith person.
// A Person x will not send a friend request to a person y (x != y) if any of the following conditions is true:

// age[y] <= 0.5 * age[x] + 7
// age[y] > age[x]
// age[y] > 100 && age[x] < 100
// Otherwise, x will send a friend request to y.

// Note that if x sends a request to y, y will not necessarily send a request to x. Also, a person will not send a friend request to themself.

// Return the total number of friend requests made.

// Example 1:
// Input: ages = [16,16]
// Output: 2
// Explanation: 2 people friend request each other.

// Example 2:
// Input: ages = [16,17,18]
// Output: 2
// Explanation: Friend requests are made 17 -> 16, 18 -> 17.

// Example 3:
// Input: ages = [20,30,100,110,120]
// Output: 3
// Explanation: Friend requests are made 110 -> 100, 120 -> 110, 120 -> 100.

// Constraints:
// n == ages.length
// 1 <= n <= 2 * 104
// 1 <= ages[i] <= 120


#include <bits/stdc++.h>

using namespace std;

int numOfFriendRequest(vector<int>& ages){
    vector<int> count(121, 0);
    for(int age:ages){
        count[age]++;
    }
    vector<int> prefixSum(121, 0);
    for(int i=1; i<=120; i++){
        prefixSum[i] = prefixSum[i-1] + count[i];
    }

    int ans = 0;
    for(int x =15; x<=120; x++){
        if(count[x] == 0){
            continue;
        }
        int minAge = 0.5*x+7;
        int validCount = prefixSum[x] - prefixSum[minAge];
        ans+=count[x] * (validCount - 1);
    }
    return ans;
}

int main() {
    int size;
    cin>>size;
    vector<int> ages(size);
    for(int i=0; i<size; i++){
        cin>>ages[i];
    }
    cout<<numOfFriendRequest(ages);

    return 0;
}