/*
Given two strings s1 and s2. Modify both the strings such that all the common characters of 
s1 and s2 are to be removed and the uncommon characters of s1 and s2 are to be concatenated.
Note: If all characters are removed print -1.

Example 1:

Input:
s1 = aacdb
s2 = gafd
Output: cbgf
Explanation: The common characters of s1
and s2 are: a, d. The uncommon characters
of s1 and s2 are c, b, g and f. Thus the
modified string with uncommon characters
concatenated is cbgf.
Example 2:

Input:
s1 = abcs
s2 = cxzca
Output: bsxz
Explanation: The common characters of s1
and s2 are: a,c. The uncommon characters
of s1 and s2 are b,s,x and z. Thus the
modified string with uncommon characters
concatenated is bsxz.

*/

// Time Complexity: O(N), where N represents the size of longest string in these two.
// Auxiliary Space: O(max(M, N)), where M and N represents the size of the given two strings.

#include<bits/stdc++.h>
using namespace std;

string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string str = "";
        
        int n1 = s1.size();
        int n2 = s2.size();
        
        map<char,int> mp;
        
        for(int i = 0; i<n2;i++){
            mp[s2[i]]++;
        }
        
        for(int i = 0; i<n1;i++){
            if(mp.find(s1[i])==mp.end()){
               str=str+s1[i];
           }
        }
        
        map<char,int>m;
        
        for(int i = 0; i<n1;i++){
            m[s1[i]]++;
        }
        
        for(int i = 0; i<n2;i++){
            if(m.find(s2[i])==m.end()){
               str=str+s2[i];
           }
        }
        
           
        if(str.length() == 0) {
            return "-1";
        }
        
        return str;
        
}