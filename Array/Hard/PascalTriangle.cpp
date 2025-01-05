// Pascal's Triangle
// Problem Statement: This problem has 3 variations. They are stated below:
// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.
// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.
// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.
// In Pascal’s triangle, each number is the sum of the two numbers directly above it as shown in the figure below:

// Examples
// Example 1:
// Input Format:
//  N = 5, r = 5, c = 3
// Result:
//  6 (for variation 1)
// 1 4 6 4 1 (for variation 2)
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1    (for variation 3)
// Explanation:
//  There are 5 rows in the output matrix. Each row is formed using the logic of Pascal’s triangle.

// Example 2:
// Input Format:
//  N = 1, r = 1, c = 1
// Result:
//  1 (for variation 1)
//     1 (for variation 2)
//     1  (for variation 3)
// Explanation:
//  The output matrix has only 1 row.


// Variation 1


#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;

    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

int main()
{
    int r = 5; 
    int c = 3; 
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: "
            << element << "n";
    return 0;
}
        
        

// Variation 2


// #include <bits/stdc++.h>
// using namespace std;

// int nCr(int n, int r) {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++) {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// void pascalTriangle(int n) {
//     // printing the entire row n:
//     for (int c = 1; c <= n; c++) {
//         cout << nCr(n - 1, c - 1) << " ";
//     }
//     cout << "n";
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }


// Variation 3


// #include <bits/stdc++.h>
// using namespace std;

// int nCr(int n, int r) {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++) {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return (int)(res);
// }

// vector<vector<int>> pascalTriangle(int n) {
//     vector<vector<int>> ans;

//     //Store the entire pascal's triangle:
//     for (int row = 1; row <= n; row++) {
//         vector<int> tempLst; // temporary list
//         for (int col = 1; col <= row; col++) {
//             tempLst.push_back(nCr(row - 1, col - 1));
//         }
//         ans.push_back(tempLst);
//     }
//     return ans;
// }

// int main()
// {
//     int n = 5;
//     vector<vector<int>> ans = pascalTriangle(n);
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }
