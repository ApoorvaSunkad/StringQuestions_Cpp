/*
You are given a string s consisting only of characters 'a' and 'b'​​​​.

You can delete any number of characters in s to make s balanced. 
s is balanced if there is no pair of indices (i,j) such that i < j 
and s[i] = 'b' and s[j]= 'a'.

Return the minimum number of deletions needed to make s balanced.

 

Example 1:

Input: s = "aababbab"
Output: 2
Explanation: You can either:
Delete the characters at 0-indexed positions 2 and 6 ("aababbab" -> "aaabbb"), or
Delete the characters at 0-indexed positions 3 and 6 ("aababbab" -> "aabbbb").
Example 2:

Input: s = "bbaaaaabb"
Output: 2
Explanation: The only solution is to delete the first two characters.
 

Constraints:

1 <= s.length <= 105
s[i] is 'a' or 'b'​​.


*/
#include<iostream>
#include<string>
#include<stack>
#include<math.h>
#include<vector>
using namespace std;

//Using stack
//T.C = O(N)
//S.C = O(N)
int minimumDeletions(string s) {
    stack<char> st;

    int n = s.length();
    int cnt = 0;

    for(int i = 0; i<n; i++){
        if(!st.empty() && s[i]=='a' && st.top()=='b'){
            st.pop();
            cnt++;
        }else{
            st.push(s[i]);
        }
    }
    return cnt;
}


//Using two vectors - right and left to store a and b count
//T.C = O(3N)
//S.C = O(2N)
int minimumDeletions(string s) {

        int n = s.length();
        int cnt = INT_MAX;

        vector<int> left_b(n,0);
        vector<int> right_a(n,0);

        int countb = 0;

        for(int i = 0; i<n; i++){
            left_b[i] = countb;
            if(s[i] == 'b'){
                countb++;
            }
        }
        int counta = 0;
        for(int i = n-1; i>=0; i--){
            right_a[i] = counta;
            if(s[i] == 'a'){
                counta++;
            }
        }
        for(int i = 0; i<n; i++){
            cnt = min(cnt, left_b[i]+right_a[i]);
        }
        return cnt;
}