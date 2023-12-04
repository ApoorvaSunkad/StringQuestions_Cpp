/*
Given a binary string S. The task is to count the number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

Example 1:

Input:
N = 4
S = 1111
Output: 6
Explanation: There are 6 substrings from
the given string. They are 11, 11, 11,
111, 111, 1111.
Example 2:

Input:
N = 5
S = 01101
Output: 3
Explanation: There 3 substrings from the
given string. They are 11, 101, 1101.
Your Task:
The task is to complete the function binarySubstring() which takes the length of binary 
string n and a binary string a as input parameter and counts the number of substrings starting
and ending with 1 and returns the count.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

*/

/*
Brute Force Approach
Intuition
The idea is to count all the substrings using two loops. The outer loop 
picks every 1 as a starting point and the inner loop searches for ending 1 
and increments the count whenever it finds 1.
*/

//T.C = O(N^2)
//S.C = O(1)

#include<bits/stdc++.h>
using namespace std;


long binarySubstring(int n, string a){
        
        // Your code here
        
        long count = 0;
        
        for(int i = 0; i<n;i++){
            if(a[i]=='1'){
                for(int j = i+1; j<n;j++){
                    if(a[j]=='1'){
                        count++;
                    }
                }
            }
        }
        return count;
        
        
}

//Optimised Approach

/*
The idea is that if the count of 1 in the string is x, then there will be (x*(x-1))/2 
possible subarrays.

Implementation
Count the number of 1 in the string using a loop and store that in the count 
variable.

return (count*(count-1))/2

Time complexity: O(N) for counting the number of 1 in the string by simply traversing the 
string.
Space complexity: O(1), As we are not using any extra space.

*/

#include<bits/stdc++.h>
using namespace std;

long binarySubstring(int n, string a){
        
        // Your code here
        long countOnes = 0;
        
        for(long i = 0; i<n;i++){
            if(a[i]=='1'){
                countOnes++;
            }
        }
        
        long ans = (countOnes*(countOnes-1))/2;
        
        return ans;
        
}