// Given an arrar 'nums' of distinct integers, write a program to print all the possible permutations in lexicographically increasing order.
// Input: 3 //n 
// 1 2 3 //nums
// Output: 
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1

#include <bits/stdc++.h>

using namespace std;

void backtrack(vector<int>& nums, vector<int>& permutation, vector<bool>& used, vector<vector<int>>& result){
    if(permutation.size() == nums.size()){
        result.push_back(permutation);
        return;
    }

    for(int i=0; i<nums.size(); i++){
        if(!used[i]){
            used[i] = true;
            permutation.push_back(nums[i]);

            backtrack(nums, permutation, used, result);
            
            permutation.pop_back();
            used[i] = false;
        }
    }
}

vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>> result;
    vector<int> permutation;
    vector<bool> used(nums.size(), false);

    sort(nums.begin(), nums.end());

    backtrack(nums, permutation, used, result);
    return result;
}

void printResult(const vector<vector<int>>& result){
    for(const auto& perm: result){
        for(int num: perm){
            cout<<num<<' ';
        }
        cout<<endl;
    }
}

int main() {
    int size;
    cin>>size;
    vector<int> nums(size);
    for(int i=0; i<size; i++){
        cin>>nums[i];
    }
    vector<vector<int>> result = permute(nums);

    printResult(result);

    return 0;
}