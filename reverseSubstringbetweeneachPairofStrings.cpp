/*
You are given a string s that consists of lower case English letters and 
brackets.

Reverse the strings in each pair of matching parentheses, starting from 
the innermost one.

Your result should not contain any brackets.

 

Example 1:

Input: s = "(abcd)"
Output: "dcba"
Example 2:

Input: s = "(u(love)i)"
Output: "iloveu"
Explanation: The substring "love" is reversed first, then the whole string is reversed.
Example 3:

Input: s = "(ed(et(oc))el)"
Output: "leetcode"
Explanation: First, we reverse the substring "oc", then "etco", and 
finally, the whole string.
 

Constraints:

1 <= s.length <= 2000
s only contains lower case English characters and parentheses.
It is guaranteed that all parentheses are balanced.


*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//T.C = O(N^2)
//S.C = O(N)

string reverseParentheses(string s) {
    
        string result = "";

        stack<int> lastSkipLength;

        for(char &ch:s){
            if(ch == '('){
                lastSkipLength.push(result.length());
            }else if(ch == ')'){
                int len = lastSkipLength.top();
                lastSkipLength.pop();
                reverse(result.begin()+len, result.end());
            }else{
                result.push_back(ch);
            }
        }
        return result;
    }