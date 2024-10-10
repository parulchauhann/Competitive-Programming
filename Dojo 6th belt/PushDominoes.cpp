// Push Dominoes
// There are n dominoes in a line, and we place each domino vertically upright. In the beginning, we simultaneously push some of the dominoes either to the left or to the right.
// After each second, each domino that is falling to the left pushes the adjacent domino on the left. Similarly, the dominoes falling to the right push their adjacent dominoes standing on the right.
// When a vertical domino has dominoes falling on it from both sides, it stays still due to the balance of the forces.
// For the purposes of this question, we will consider that a falling domino expends no additional force to a falling or already fallen domino.

// You are given a string dominoes representing the initial state where:
// dominoes[i] = 'L', if the ith domino has been pushed to the left,
// dominoes[i] = 'R', if the ith domino has been pushed to the right, and
// dominoes[i] = '.', if the ith domino has not been pushed.
// Return a string representing the final state.

// Example 1:
// Input: dominoes = "RR.L"
// Output: "RR.L"
// Explanation: The first domino expends no additional force on the second domino.

// Example 2:
// Input: dominoes = ".L.R...LR..L.."
// Output: "LL.RR.LLRRLL.."
 
// Constraints:
// n == dominoes.length
// 1 <= n <= 105
// dominoes[i] is either 'L', 'R', or '.'.


#include <bits/stdc++.h>

using namespace std;

void solve(string& dominoes, int i, int j){
    if(dominoes[i]=='.' && dominoes[j]=='L'){
        for(int k=i; k<j;k++){
            dominoes[k] = 'L';
        }
    } else if(dominoes[i]=='.' && dominoes[j]=='R'){

    } else if(dominoes[i]=='L' && dominoes[j]=='L'){
        for(int k=i+1; k<j; k++){
            dominoes[k]='L';
        }
    } else if (dominoes[i]=='L' && dominoes[j]=='R'){

    } else if (dominoes[i]=='R' && dominoes[j]=='L'){
        if(j-i-1>0){
            int dots = j-i-1;
            if(dots& 1){
                int mid = (i+j)>>1;
                for(int k=i+1; k<mid; k++){
                    dominoes[k] = 'R';
                }
                for(int k = mid+1; k<j; k++){
                    dominoes[k] = 'L';
                }
            } else {
                int mid = (i+j) >>1;
                for(int k = i+1; k<-mid; k++){
                    dominoes[k] = 'R';
                }
                for(int k = mid+1; k<j; k++){
                    dominoes[k] = 'L';
                }
            }
        }
    } else if(dominoes[i] == 'R' && dominoes[j]=='R'){
        for(int k = i+1; k<j; k++){
            dominoes[k] = 'R';
        }
    }
}

int main() {
    string dominoes;
    cin>>dominoes;
    int n= dominoes.size();
    int i=0, j=0;
    while(j<n){
        if(dominoes[j] == '.'){
            j++;
        } else{
            solve(dominoes, i, j);
            i = j;
            j++; 
        }
    }
    if(j==n && dominoes[i]=='R'){
        for(int k=i+1; k<n; k++){
            dominoes[k] = 'R';
        }
    }
    cout<<dominoes;

    return 0;
}