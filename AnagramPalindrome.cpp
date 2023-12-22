/*
Given a string S, Check if characters of the given string can be rearranged to form 
a palindrome.
Note: You have to return 1 if it is possible to convert the given string into palindrome 
else return 0. 

Example 1:

Input:
S = "geeksogeeks"
Output: Yes
Explanation: The string can be converted
into a palindrome: geeksoskeeg

Example 2:

Input: 
S = "geeksforgeeks"
Output: No
Explanation: The given string can't be
converted into a palindrome.
Your Task:
You don't need to read input or print anything. Your task is to complete the function 
isPossible() which takes the string S as input and returns 1 if the string can be converted 
into a palindrome. Else, it returns 0.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(Distinct Characters).

*/

#include<bits/stdc++.h>
using namespace std;

int isPossible (string S)
{
    
    int freq[256] = {0};
    int countOdd = 0;
    
    int n = S.length();
    
    for(int i = 0; i<n; i++){
        freq[S[i]]++;
    }
    
    for(int i = 0; i<256; i++){
        if((freq[i]%2) == 1){
            countOdd++;
        }
    }
    
    if(countOdd>1){
        return 0;
    }
    
    return 1;
    
}


#include<bits/stdc++.h>
using namespace std;

int isPossible (string S)
{

    unordered_map<char,int>mp;
    for(int i=0;i<S.length();i++){
        mp[S[i]]++;
    }
    int cnt=0;
    for(auto i:mp){
        if(i.second%2)
            cnt++;
    }
    if(cnt>1)
        return 0;
    return 1;
    
}