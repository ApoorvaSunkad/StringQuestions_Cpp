/*
Given a string str containing alphanumeric characters. The task is to calculate the sum 
of all the numbers present in the string.

Example 1:

Input:
str = 1abc23
Output: 24
Explanation: 1 and 23 are numbers in the
string which is added to get the sum as
24.
Example 2:

Input:
str = geeks4geeks
Output: 4
Explanation: 4 is the only number, so the
sum is 4.

*/

#include<bits/stdc++.h>
using namespace std;

//T.C = O(N)
//S.C = O(1)

int findSum(string str)
    {
    	
    	// Your code here
    	int res=0,num=0;
        for(int i=0;i<str.size();i++)
        {
            while(str[i]>='0'&& str[i]<='9')
            {
                res=res*10+str[i]-'0';
                i++;
            }  
            num += res;
            res=0;
        }
        return num;
}