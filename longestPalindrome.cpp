/*
Given a string s which consists of lowercase or uppercase letters, return the length of the
longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.

*/

//T.C = O(N)
//S.C = O(1)

#include<bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {
        int count = 0;

        vector<int> lower(26,0);
        vector<int> upper(26,0);

        //frequency updated
        for(int i = 0; i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                lower[s[i]-'a']++;
            }
            else{
                upper[s[i]-'A']++;
            }
        }
        bool odd = 0;

        for(int i = 0; i<26;i++){
            //lower
            if(lower[i]%2 == 0){
                count+=lower[i];
            }
            else{
                count+=lower[i]-1;
                odd = 1;
            }

            //upper
            if(upper[i]%2 == 0){
                count+=upper[i];
            }
            else{
                count+=upper[i]-1;
                odd = 1;
            }
        }
        return count+odd;
}