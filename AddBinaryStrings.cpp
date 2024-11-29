/*
Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
Note: The input strings may contain leading zeros but the output string should not have any leading zeros.

Input: s1 = "1101", s2 = "111"
Output: 10100
Explanation:
 1101
+ 111
10100
Input: s1 = "00100", s2 = "010"
Output: 110
Explanation: 
  100
+  10
  110
Constraints:
1 ≤s1.size(), s2.size()≤ 106

*/

#include<iostream>
#include<string>
using namespace std;

string addBinary(string& s1, string& s2) {
        // your code here
        int n1 = s1.length();
        int n2 = s2.length();
        
        int i = 0, carry = 0;
        string ans = "";
        
        while(i<n1 || i<n2 || carry !=0){
            int x = 0;
            if(i<n1 && s1[n1-i-1]=='1'){
                x=1;
            }
            int y= 0;
            if(i<n2 && s2[n2-i-1]=='1'){
                y=1;
            }
            ans = to_string((x+y+carry)%2)+ans;
            carry = (x+y+carry)/2;
            i+=1;
        }
            // Remove leading zeros
        int start = 0;
        while (start < ans.length() && ans[start] == '0') {
            start++;
        }
        
        // If all are zeros, return a single '0'
        if (start == ans.length()) {
            return "0";
        }
    
        return ans.substr(start);
}