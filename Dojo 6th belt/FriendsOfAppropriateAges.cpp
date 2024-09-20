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