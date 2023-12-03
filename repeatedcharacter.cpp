/*
Given a string consisting of lowercase english alphabets. Find the repeated character
present first in the string.

Example 1:

Input:
S = "geeksforgeeks"
Output: g
Explanation: g, e, k and s are the repeating
characters. Out of these, g occurs first. 
Example 2:

Input: 
S = "abcde"
Output: -1
Explanation: No repeating character present.

*/

#include<bits/stdc++.h>
using namespace std;
//T.C = O(N^2)
//S.C = O(1)

char firstRep (string s)
{
        for(int i = 0; i < s.length(); i++)
            for(int j = 1 + i; j <= s.length(); j++)
                if(s[i] == s[j])
                    return s[i];
        return '#';
}

//Better solution:

char firstRep (string s)
{
        // stores the frequency of all the characters
        int hash[26] = {0};
    
        for (int i = 0; i < s.length (); ++i)
            hash[s[i] - 'a']++;
    
        // we traverse the string from start and return the 
        // first character with frequency greater than 1.
        for (int i = 0; i < s.length (); ++i)
        {
            if (hash[s[i] - 'a'] > 1) return s[i];
        }
    
        // if we reach here, it means that no character repeats
        return '#';
}
    