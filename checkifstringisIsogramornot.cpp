/*
Given a string S of lowercase alphabets, check if it is isogram or not. An Isogram is a
string in which no letter occurs more than once.

Example 1:

Input:
S = machine
Output: 1
Explanation: machine is an isogram
as no letter has appeared twice. Hence
we print 1.
Example 2:

Input:
S = geeks
Output: 0
Explanation: geeks is not an isogram
as 'e' appears twice. Hence we print 0.

*/

//Brute force approach:

/*
Brute Force Approach:

Intuition:
Sort the string and for every character check, 
if the current character is equal to the previous character or not. 
If it is equal then the string is not an isogram
*/

#include<bits/stdc++.h>
using namespace std;

//T.C = O(NLOGN)
//S.C = O(1)

bool isIsogram(string s)
    {
        //Your code here
        int len = s.length();
    	// Convert the string in lower case letters
    	for (int i = 0; i < len; i++)
        	s[i] = tolower(s[i]);
 
    	sort(s.begin(), s.end());
 
    	for (int i = 0; i < len-1; i++) {
        	if (s[i] == s[i + 1])
            	return false;
    	}
    	return true;
}

#include<bits/stdc++.h>
using namespace std;

//T.C = O(N)
//S.C = O(1)

bool isIsogram(string s){
        //Your code here
        vector<int> v(26,0);
        
        for(int i = 0; i<s.size();i++){
             v[s[i]-'a']++;
        }
        
        for(int i = 0; i<26;i++){
            if(v[i] > 1){
                return 0;
            }
        }
        return 1;
}

//Useful links to help you understand the concepts of this problem:

//https://www.geeksforgeeks.org/check-string-isogram-not/