/*
You are given an array of strings names, and an array heights that consists of distinct 
positive integers. Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.

 

Example 1:

Input: names = ["Mary","John","Emma"], heights = [180,165,170]
Output: ["Mary","Emma","John"]
Explanation: Mary is the tallest, followed by Emma and John.
Example 2:

Input: names = ["Alice","Bob","Bob"], heights = [155,185,150]
Output: ["Bob","Alice","Bob"]
Explanation: The first Bob is the tallest, followed by Alice and the second Bob.
 

Constraints:

n == names.length == heights.length
1 <= n <= 103
1 <= names[i].length <= 20
1 <= heights[i] <= 105
names[i] consists of lower and upper case English letters.
All the values of heights are distinct.


*/

//T.C = O(NLOGN)
//S.C = O(N)

#include<bits/stdc++.h>
using namespace std;

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> heightNamePairs;

    int m = heights.size();

    // Create pairs of heights and corresponding names
    for (int i = 0; i < m; i++) {
        heightNamePairs.push_back({heights[i], names[i]});
    }

    // Sort the pairs in descending order based on heights
    sort(heightNamePairs.rbegin(), heightNamePairs.rend());

    // Extract the sorted names from the sorted pairs
    vector<string> result;
    for (const auto& pair : heightNamePairs) {
        result.push_back(pair.second);
    }

    return result;

}