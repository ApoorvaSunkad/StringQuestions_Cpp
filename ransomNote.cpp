/*
Given two strings ransomNote and magazine, return true if ransomNote can be 
constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 

Constraints:

1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.

*/

#include<bits/stdc++.h>
using namespace std;

//T.C = O(N+M)
//S.C = O(1)

    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);

        for(int i = 0; i<ransomNote.length();i++){
            v1[ransomNote[i]-'a']++;
        }

        for(int i = 0; i<magazine.length();i++){
            v2[magazine[i]-'a']++;
        }

        for (int i = 0; i < 26; i++) {
        if (v1[i] > v2[i]) {
            return false;
        }
    }
    return true;
}