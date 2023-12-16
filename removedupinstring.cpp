/*
Given a string without spaces, the task is to remove duplicates from it.

Note: The original order of characters must be kept the same. 

Example 1:

Input: S = "zvvo"
Output: "zvo"
Explanation: Only keep the first
occurrence
Example 2:

Input: S = "gfg"
Output: gf
Explanation: Only keep the first
occurrence

*/

#include<bits/stdc++.h>
using namespace std;

string removeDups(string S) 
	{
	    // Your code goes here
	    string ans = "";
	    unordered_set<char> str;
	    
	    for(int i = 0; i<S.length();i++){
	        str.insert(S[i]);
	    }
	    
	    for (auto it = str.begin(); it != str.end(); it++){
            ans.push_back(*it);
	    }
	    
	    reverse(ans.begin(),ans.end());
	    
	    return ans;
	}
//This solution doesn't work when all the characters present in the string are unique. 
//As we reverse the ans the output changes


//seocnd solution

#include<bits/stdc++.h>
using namespace std;

string removeDups(string S) {

    unordered_map<char,int>mp;
    string ans="";
    for(int i=0;i<S.length();i++){
        mp[S[i]]++;

        if(mp[S[i]]==1){
            ans=ans+S[i];
        }
    }
    return ans;
}


//Refer GFG article for this video

//Article link: https://www.geeksforgeeks.org/remove-duplicates-from-a-given-string/

