/*

Given a alphanumeric string S, extract maximum numeric value from S.

Example 1:

Input:
S = 100klh564abc365bg
Output: 564
Explanation: Maximum numeric value 
among 100, 564 and 365 is 564.
Example 2:

Input:
S = abcdefg
Output: -1
Explanation: Return -1 if no numeric 
value is present. 

Your Task:  
You dont need to read input or print anything. Complete the function extractMaximum() 
which takes the string S as input parameters and returns the maximum numeric value. 
If it is not present in S, return -1.


Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(1)

*/

#include<bits/stdc++.h>
using namespace std;

int extractMaximum(string S) 
    { 
        
    	int sum=0;
        int maxi=INT_MIN;
        int i=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]>=48 && S[i]<=57)
            {
                int num=S[i]-'0';
                sum=sum*10+num;
                maxi=max(sum,maxi);
            }
            else
            {
                sum=0;
            }
        }
        if(maxi==INT_MIN)
        {
            return -1;
        }
        return maxi;

} 