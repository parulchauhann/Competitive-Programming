// Permutation Sequence
// Solved
// Hard
// Topics
// Companies
// The set [1, 2, 3, ..., n] contains a total of n! unique permutations.
// By listing and labeling all of the permutations in order, we get the following sequence for n = 3:
// "123"
// "132"
// "213"
// "231"
// "312"
// "321"
// Given n and k, return the kth permutation sequence.

// Example 1:
// Input: n = 3, k = 3
// Output: "213"

// Example 2:
// Input: n = 4, k = 9
// Output: "2314"

// Example 3:
// Input: n = 3, k = 1
// Output: "123"

// Constraints:
// 1 <= n <= 9
// 1 <= k <= n!


#include <bits/stdc++.h>

using namespace std;

string getPermutation(int n, int k){
    vector<int> v;
    int fact = 1;
    for(int i=1; i<n; i++){
        fact = fact *i;
        v.push_back(i);
    }
    v.push_back(n);
    k -=1;
    string s = "";
    while(true){
        s += to_string(v[k/fact]);
        v.erase(v.begin() + k/fact);
        if(v.size() == 0){
            break;
        }
        k = k%fact;
        fact = fact/v.size();
    }
    return s;
}


int main() {
    int n, k;
    cin>>n>>k;
    cout<<getPermutation(n, k);

    return 0;
}