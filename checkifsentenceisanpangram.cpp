/*
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence 
is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
 
*/

//T.C = O(N)
//S.C = O(1)

#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence) {
        vector<bool> v(26,0);

        for(int i = 0; i<sentence.length();i++){
            v[sentence[i]-'a'] = 1;
        }

        for(int i = 0; i<26;i++){
            if(v[i]==0){
                return 0;
            }
        }
        return 1;
}

//Please watch Rohit Negi's youtube channel "Coder army" for this question
//Video link: https://www.youtube.com/watch?v=BCHJ9YizW7w