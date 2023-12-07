/*
Given a string S, the task is to create a string with the first letter of every word in
the string.
 

Example 1:

Input: 
S = "geeks for geeks"
Output: gfg

Example 2:

Input: 
S = "bad is good"
Output: big

Your Task:
You don't need to read input or print anything. Your task is to complete the function 
firstAlphabet() which takes string S as input parameter and returns a string that contains
the first letter of every word in S.


Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)

*/

#include<bits/stdc++.h>
using namespace std;

//This is my code:
//T.C = O(N)
//S.C = O(N)

string firstAlphabet(string S){
        string str = "";
        int n = S.length();
        str.push_back(S[0]);
        for(int i = 1; i<n;i++){
            if(S[i] ==' '){
                str.push_back(S[i+1]);
            }
        }
        return str;
}


//Improvised code

#include<bits/stdc++.h>
using namespace std;

string firstAlphabet(string S)
    {
        //initializing the result string.
        string res ="";

        //appending the first character of the string to the result, if it is not a space.
        if(S[0]!=' ')
            res+=S[0];

        //iterating over the characters of the string.
        for(int i = 0;i<S.size();i++)
        {
         //checking if the current character is a space and the next character is not a space.
            //If true, then appending the next character to the result.
            if(i!=S.length() - 1 && S[i]==' ' && S[i + 1]!=' ')
                res+=S[i + 1];
        }

        //returning the result string.
        return res; 
}