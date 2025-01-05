// Check if two Strings are anagrams of each other
// Problem Statement: Given two strings, check if two strings are anagrams of each other or not.
// Examples:
// Example 1:
// Input: CAT, ACT
// Output: true
// Explanation: Since the count of every letter of both strings are equal.
// Example 2:
// Input: RULES, LESRT 
// Output: false
// Explanation: Since the count of U and T  is not equal in both strings.


// optimal approach

#include <iostream>
#include <algorithm>
using namespace std;
bool CheckAnagrams(string str1, string str2)
{
  if (str1.length() != str2.length())
    return false;
 
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());
 
  for (int i = 0; i < str1.length(); i++)
  {
    if (str1[i] != str2[i])
      return false;
  }
  return true;
}
int main()
{
  string Str1 = "INTEGER";
  string Str2 = "TEGERNI";
  if(CheckAnagrams(Str1, Str2))
  cout << "True" << endl;
  else
  cout<<"False"<<endl;
  return 0;
}