/*
Given a string S, the task is to change the complete string to Uppercase or 
Lowercase depending upon the case for the first character.

Example 1:

Input:
S = "abCD"
Output: abcd
Explanation: The first letter (a) is 
lowercase. Hence, the complete string
is made lowercase.

â€‹Example 2:

Input: 
S = "Abcd"
Output: ABCD
Explanation: The first letter (A) is
uppercase. Hence, the complete string
is made uppercase.

Your Task:
You don't need to read input or print anything. Your task is to complete the function 
modify() which takes the string S as input and returns the resultant string with stated 
modifications.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1) for C++ and O(|S|) for output in Java/Python.

*/

#include<bits/stdc++.h>
using namespace std;

//T.C = O(Length of the string)
//S.C = O(1) as we are modifying the input and not taking any extra space.
string modify (string s)
    {
        // check if the string has to be made lowercase of uppercase
    	bool upper;
    	if (s[0] >= 'A' and s[0] <= 'Z')
    		upper = true;
    	else
    		upper = false;
    
    	for (int i = 1; i < s.length (); ++i)
    	{
    		if (upper)
    		{
    		    // converting to uppercase
    			if (s[i] >= 'a' and s[i] <= 'z')
    				s[i] = s[i] - 'a' + 'A';
    		}
    		else
    		{
    		    // converting to lowercase
    			if (s[i] >= 'A' and s[i] <= 'Z')
    				s[i] = s[i] - 'A' + 'a';
    		}
    	}
    	return s;
}

//Using inbuilt functions

#include<bits/stdc++.h>
using namespace std;

//T.C = O(Length of the string)
//S.C = O(1) as we are modifying the input and not taking any extra space.

string modify (string s)
    {
        string str;
        int n = s.length();
        
        if(islower(s[0])){
           for(int i = 0; i<n;i++){
                str.push_back(tolower(s[i]));
           }
        }
        else if(isupper(s[0])){
            for(int i = 0; i<n;i++){
                str.push_back(toupper(s[i]));
           }
        }
        
        return str;
        
}