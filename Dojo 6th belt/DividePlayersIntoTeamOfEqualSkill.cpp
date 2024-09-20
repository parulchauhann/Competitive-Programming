// Ques. Divide Players Into Teams of Equal Skill

// Hint
// You are given a positive integer array skill of even length n where skill[i] denotes the skill of the ith player. Divide the players into n / 2 teams of size 2 such that the total skill of each team is equal.

// The chemistry of a team is equal to the product of the skills of the players on that team.

// Return the sum of the chemistry of all the teams, or return -1 if there is no way to divide the players into teams such that the total skill of each team is equal.

// Example 1:
// Input: skill = [3,2,5,1,3,4]
// Output: 22
// Explanation: 
// Divide the players into the following teams: (1, 5), (2, 4), (3, 3), where each team has a total skill of 6.
// The sum of the chemistry of all the teams is: 1 * 5 + 2 * 4 + 3 * 3 = 5 + 8 + 9 = 22.


#include <bits/stdc++.h>

using namespace std;

long long dividePlayers(vector<int>& skills, int size){
    long long ans = 0;
    if(skills.size() == 3){
        return skills[0]*skills[1];
    }
    sort(skills.begin(), skills.end());
    int i=size/2-1;
    int j=size/2;
    int sum = skills[i] + skills[j];

    while(i>=0 && j<size){
        int temp = skills[i] + skills[j];

        if(temp == sum){
            ans+= skills[i] * skills[j];
        } else {
            ans = 0;
            break;
        }
        i--;
        j++;
    }
    if(ans==0){
        return -1;
    }
    return ans;
}

int main() {
    int size;
    cin>>size;
    vector<int> skills(size);
    for(int i=0; i<size; i++){
        cin>>skills[i];
    }
    cout<<dividePlayers(skills, size);

    return 0;
}