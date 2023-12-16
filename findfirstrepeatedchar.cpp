/*
Given a string S. The task is to find the first repeated character in it. 
We need to find the character that occurs more than once and whose index of second 
occurrence is smallest. S contains only lowercase letters.

 
Example 1:

Input: S="geeksforgeeks"
Output: e
Explanation: 'e' repeats at third position.
 

Example 2:

Input: S="hellogeeks"
Output: l
Explanation: 'l' repeats at fourth position.
 

Example 3:

Input: S="abc"
Output: -1
Explanation: There is no repeated character.

*/

#include<bits/stdc++.h>
using namespace std;
//T.C = O(N)
//S.C = O(1)

string firstRepChar(string s)
{
    //code here.
    
    int freq[26] = {0};
    string str;
    
    for(int i = 0; i<s.size();i++){
        freq[s[i]-'a']++;
        
        if(freq[s[i]-'a']>1){
           str=s[i];
           return str;
        }
    }
    
    return "-1";
}

//2nd solution

#include<bits/stdc++.h>
using namespace std;

//T.C = O(N)
//S.C = O(1) Independent from the size of input. It is always mapping characters to their 
//count, and the number of possible characters is limited (26 lowercase letters in this case). 
//Therefore, the space used by the unordered_map is constant.
string firstRepChar(string s){

unordered_map<char,int>m;
    string ans="";
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
        if(m[s[i]]==2){
            ans=s[i];
            return ans;
        }
    }
    return "-1";
}