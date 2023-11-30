/*
Given a string str of lowercase alphabets. The task is to find the maximum occurring 
character in the string str. If more than one character occurs the maximum number of time
then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.

*/

//T.C = O(N)
//S.C = O(1)

//Concept explained by love babbar in his strings video
//video link: https://www.youtube.com/watch?v=Wdjr6uoZ0e0

#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
    {
        // Your code here
        int hash[26] = {0};
        
        for(int i = 0; i<str.length();i++){
            //lowercase
            
            int num = 0;
            if(str[i]>='a'&& str[i]<='z'){
                num = str[i] - 'a';
            }
            //uppercase
            else{
                num = str[i] - 'A';
            }
            hash[num]++;
        }
        
        int maxi = -1, ans = 0;
        
        for(int i = 0; i<26; i++){
            if(maxi < hash[i]){
                ans = i;
                maxi = hash[i];
            }
        }
        
        char finalAns = 'a'+ ans;
        return finalAns;
}

