/*
Given a string S. For each index i(1<=i<=N-1), erase it if s[i] is equal to s[i-1] in 
the string.

Example 1:

Input:
S = aabb
Output:  ab 
Explanation: 'a' at 2nd position is
appearing 2nd time consecutively.
Similiar explanation for b at
4th position.

Example 2:

Input:
S = aabaa
Output:  aba
Explanation: 'a' at 2nd position is
appearing 2nd time consecutively.
'a' at fifth position is appearing
2nd time consecutively.

*/
//T.C = O(|S|)
//S.C = O(|S|)

#include<bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string S)
{
        // code here.
         string ans="";
        for(int i=1;i<S.size();i++){
             if(S[i]==S[i-1])continue;
             ans+=S[i-1];
        }
        ans+=S[S.size()-1];
        return ans;
}