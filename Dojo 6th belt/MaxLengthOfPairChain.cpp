// Maximum Length of Pair Chain
// You are given an array of n pairs pairs where pairs[i] = [lefti, righti] and lefti < righti.

// A pair p2 = [c, d] follows a pair p1 = [a, b] if b < c. A chain of pairs can be formed in this fashion.

// Return the length longest chain which can be formed.

// You do not need to use up all the given intervals. You can select pairs in any order.

// Example 1:
// Input: pairs = [[1,2],[2,3],[3,4]]
// Output: 2
// Explanation: The longest chain is [1,2] -> [3,4].

// Example 2:
// Input: pairs = [[1,2],[7,8],[4,5]]
// Output: 3
// Explanation: The longest chain is [1,2] -> [4,5] -> [7,8].
 

// Constraints:
// n == pairs.length
// 1 <= n <= 1000
// -1000 <= lefti < righti <= 1000


#include <bits/stdc++.h>

using namespace std;

int longestChain(vector<vector<int>>& input, int size){
    sort(input.begin(), input.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });

    int maxLength = 1;
    int end = input[0][1];
    for(int i=1; i<size; i++){
        if(input[i][0] > end){
            maxLength++;
            end = input[i][1];
        }
    }
    return maxLength;
}

int main() {
    int size;
    cin>>size;
    vector<vector<int>> input(size);
    for(int i=0; i<size; i++){
        vector<int> temp(2);
        for(int j=0; j<2; j++){
            cin>>temp[j];
        }
        input[i] = temp;
    }
    cout<<longestChain(input, size)<<endl;
    cout<<20;
    
    return 0;
}