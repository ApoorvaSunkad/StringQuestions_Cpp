/*
Given a string s, find the length of the longest 
substring without repeating characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

*/

#include<bits/stdc++.h>
using namespace std;

//Using sliding window technique
//T.C = O(N)
//S.C = O(1)

    int lengthOfLongestSubstring(string s) {
        vector<bool> count(256,0);

        int first = 0, second = 0, len = 0;

        int n = s.length();

        while(second<n){
            while(count[s[second]]){
                count[s[first]] = 0;
                first++;
            }
            count[s[second]] = 1;
            len = max(len,(second-first+1));
            second++;
        }
        return len;
}

//Watch rohit negi's video for this
//Link: https://www.youtube.com/watch?v=swBjx46TSP4


//Using unordered map

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_map<char, int> charMap;
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            if (charMap.count(s[right]) == 0 || charMap[s[right]] < left) {
                charMap[s[right]] = right;
                maxLength = max(maxLength, right - left + 1);
            } else {
                left = charMap[s[right]] + 1;
                charMap[s[right]] = right;
            }
        }
        
        return maxLength;
}

//T.C = O(N)
//S.C = O(N)