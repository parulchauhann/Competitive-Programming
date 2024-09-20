#include <bits/stdc++.h>

using namespace std;

void numMoveStones(vector<int>& input){
    sort(input.begin(), input.end());
    int i=0;
    int n = input.size();
    int low = n;
    int high = max(input[n-1] - n+2 - input[1], input[n-2] - input[0] - n+2);
    for(int j=0; j<n; j++){
        while(input[j] - input[i] >= n){
            i++;
        }
        if((j-i+1) == n-1 && input[j] - input[i] == n-2){
            low = min(low,2);
        } else {
            low = min(low, n-(j-i+1));
        }        
    }
    cout<<low<<' '<<high;
}

int main() {
    int size;
    cin>>size;
    vector<int> input(size);
    for(int i=0; i<size; i++){
        cin>>input[i];
    }
    numMoveStones(input);

    return 0;
}