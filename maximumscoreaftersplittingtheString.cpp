/*
Given a string s of zeros and ones, return the maximum score after splitting the string 
into two non-empty substrings (i.e. left substring and right substring).

The score after splitting a string is the number of zeros in the left substring plus 
the number of ones in the right substring.

 

Example 1:

Input: s = "011101"
Output: 5 
Explanation: 
All possible ways of splitting s into two non-empty substrings are:
left = "0" and right = "11101", score = 1 + 4 = 5 
left = "01" and right = "1101", score = 1 + 3 = 4 
left = "011" and right = "101", score = 1 + 2 = 3 
left = "0111" and right = "01", score = 1 + 1 = 2 
left = "01110" and right = "1", score = 2 + 1 = 3
Example 2:

Input: s = "00111"
Output: 5
Explanation: When left = "00" and right = "111", we get the maximum score = 2 + 3 = 5
Example 3:

Input: s = "1111"
Output: 3

*/

#include<bits/stdc++.h>
using namespace std;

//T.C = O(N^2)
//S.C = O(1)

int maxScore(string s) {
        int ans = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            int curr = 0;
            for (int j = 0; j <= i; j++) {
                if (s[j] == '0') {
                    curr++;
                }
            }
            
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] == '1') {
                    curr++;
                }
            }
            
            ans = max(ans, curr);
        }
        
        return ans;
}

//Optimised solution
//T.C = O(N)
//S.C = O(1)

/*
There are two possibilities for each index i:

If s[i] == '1': this 1 was in the right part, but it is now joining the left part. 
Thus, we lose 1 score since the right part is losing a 1. Decrement ones.

If s[i] == '0', this 0 was in the right part, but it is now joining the left part. 
Thus, we gain 1 score since the left part is gaining a 0. Increment zeros.
We update the answer with zeros + ones at each iteration if it is larger.

Algorithm

1. Initialize ones as the number of times 1 occurs in s.
2. Initialize zeros = 0 and the answer ans = 0.
3. Iterate i from 0 until s.length - 1:
4. If s[i] == '1', decrement ones.
5. Otherwise, increment zeros.
6. Update ans with zeros + ones if it is larger.
7. Return ans

*/
int maxScore(string s) {
        int ones = count(s.begin(), s.end(), '1');
        
        int ans = 0;
        int zeros = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '1') {
                ones--;
            } else {
                zeros++;
            }
            
            ans = max(ans, zeros + ones);
        }
        
        return ans;
}