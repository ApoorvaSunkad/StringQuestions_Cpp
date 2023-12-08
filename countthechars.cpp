/*
Given a string S. Count the characters that have ‘N’ number of occurrences. 
If a character appears consecutively it is counted as 1 occurrence.

Example 1:

Input:
S = "abc", N = 1
Output: 3
Explanation: 'a', 'b' and 'c' all have 
1 occurrence.

â€‹Example 2:

Input: 
S = "geeksforgeeks", N = 2
Output: 4
Explanation: 'g', 'e', 'k' and 's' have
2 occurrences.

Your Task:
You don't need to read input or print anything. Your task is to complete the function 
getCount() which takes the string S and an integer N as inputs and returns the count of the 
characters that have exactly N occurrences in the string. Note that the consecutive occurrences
of a character have to be counted as 1.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

*/
#include<bits/stdc++.h>
using namespace std;
//T.C = O(Sizeofstring)
//S.C = O(1)

int getCount (string S, int N)
        {
            //code here.
            int count = 0;
            int n = S.length();
            
            map<char,int> mp;
            
            for(int i = 0; i<n;i++){
                if(S[i] != S[i-1]){
                   mp[S[i]]++;
                }
            }
            
            for(auto it:mp){
                if(it.second == N){
                    count++;
                }
            }
            return count;
}