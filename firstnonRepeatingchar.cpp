/*
Given a string S consisting of lowercase Latin Letters. 
Return the first non-repeating character in S. If there is no non-repeating character, 
return '$'.

Example 1:

Input:
S = hello
Output: h
Explanation: In the given string, the
first character which is non-repeating
is h, as it appears first and there is
no other 'h' in the string.
Example 2:

Input:
S = zxvczbtxyzvy
Output: c
Explanation: In the given string, 'c' is
the character which is non-repeating. 
*/

//Time Complexity: O(N)
//Space Complexity: O(N)

#include<bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S){
       //Your code here
       unordered_map<char,int> mp;
       
       for(int i = 0; i < S.size(); i++){
           mp[S[i]]++;
       }
       
       for(int i=0;i<S.size();i++){
           if(mp[S[i]] == 1){
               return S[i];
           }
       }
       return '$';
       
}


//T.C = O(N)
//S.C = O(1)

#include<bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S)
    {
        int h[26]={0};
    	    
        //using hash table to store count of each character.
        for(int i = 0;i<S.length();i++){
            h[S[i]-'a']++;
        }
        bool flag = false;
        
        //iterating over the string.
        for(int i = 0;i<S.length();i++)
        {
            //if count of current character is 1, we return it. 
            if(h[S[i]-'a'] == 1){
                flag=true;
                return S[i];
            }
        }
        return '$';
    }