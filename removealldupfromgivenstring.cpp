/*
Given a string Str which may contains lowercase and uppercase chracters. 
The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be same as in the original string.

Example 1:

Input:
Str = geeksforgeeks
Output: geksfor
Explanation: After removing duplicate
characters such as e, k, g, s, we have
string as "geksfor".
Example 2:

Input:
Str = HappyNewYear
Output: HapyNewYr
Explanation: After removing duplicate
characters such as p, e, a, we have
string as "HapyNewYr".
Your Task:
Complete the function removeDuplicates() which takes a string str, as input parameters 
and returns a string denoting the answer. You don't have to print answer or take inputs.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

*/

#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string str) {
	    // code here
	    
	    string s = "";
	    int n = str.length();
	    
	    
	    set<char>st;
	    
	    vector<char> uniqueChars; // Use a vector to maintain order

        for (int i = 0; i < n; i++) {
           if (st.find(str[i]) == st.end()) {
              st.insert(str[i]);
              uniqueChars.push_back(str[i]);
            }
        }
	    
	    for(auto it = uniqueChars.begin(); it != uniqueChars.end(); ++it){
	        s+=(*it);
	    }
	    
	    return s;
}