/*
Given two strings string1 and string2, remove those characters from first string(string1) 
which are present in second string(string2). Both the strings are different and contain only 
lowercase characters.
NOTE: Size of  first string is always greater than the size of  second string
( |string1| > |string2|).
 

Example 1:

Input:
string1 = "computer"
string2 = "cat"
Output: "ompuer"
Explanation: After removing characters(c, a, t)
from string1 we get "ompuer".
Example 2:

Input:
string1 = "occurrence"
string2 = "car"
Output: "ouene"
Explanation: After removing characters
(c, a, r) from string1 we get "ouene".
 

Your Task:  
You dont need to read input or print anything. Complete the function removeChars() 
which takes string1 and string2 as input parameter and returns the result string after 
removing characters from string2  from string1.


Expected Time Complexity:O( |String1| + |String2| )
Expected Auxiliary Space: O(|String1|)

*/

//Brute force:
//T.C = O(Size of str1 * Size of str2);
//S.C = O(size of str1)

#include<bits/stdc++.h>
using namespace std;

string removeChars(string string1, string string2) {
        // code here
        for(int i=0;i<string2.size();i++){
            for(int j=0;j<string1.length();j++){
                if(string1[j]==string2[i])
                    string1[j]='0';
            }
        }
        string t="";
        for(int i=0;i<string1.length();i++){
            if(string1[i]!='0')
                t+=string1[i];
        }
        return t;
}


//Optimised approach
//T.C = O(size of str1 + size of str2)
//S.C = O(size of str1)

#include<bits/stdc++.h>
using namespace std;

string removeChars(string string1, string string2) {
        string result;
        int i, j, l1, l2;

        // Getting lengths of the input strings
        l1 = string1.length();
        l2 = string2.length();

        int hash[257];

        // Initializing hash array to 0
        for (i = 0; i < 257; i++) {
            hash[i] = 0;
        }

        // Counting occurrences of characters in string2 using hash array
        for (i = 0; i < l2; i++) {
            hash[string2[i]]++;
        }
       
        // Iterating over string1 to check if each character is present in string2
        for (i = 0; i < l1; i++) {
            // If character is not present in string2, adding it to the result string
            if (hash[string1[i]] == 0) {
                result = result + string1[i]; 
            }
        }
   
        // Returning the final result string
        return result;
}
