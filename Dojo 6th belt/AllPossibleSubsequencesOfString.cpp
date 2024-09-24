// Power Set: print all the possible subsequences of the string
// Given a string write a program to find all the possible subsequences of the string. Please, print it in lexigraphically increasing order.
// Input: abc
// Output a ab abc ac b bc c


#include <bits/stdc++.h>

using namespace std;

void solve(int i, string input, string& temp, vector<string>& result){
    if(i == input.length()){
        if(!temp.empty()){
            result.push_back(temp);
        }
        return;
    }
    temp += input[i];
    solve(i+1, input, temp, result);
    temp.pop_back();
    solve(i+1, input, temp, result);
}

int main() {
    string input;
    cin>>input;
    string temp="";
    vector<string> result;
    solve(0, input, temp, result);
    sort(result.begin(), result.end()); //to print in lexicographical order
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}