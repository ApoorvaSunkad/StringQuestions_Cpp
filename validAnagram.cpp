/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different 
word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? 
How would you adapt your solution to such a case?

*/

//Brute force:
//T.C = 2(nOlogn)
//S.C = O(1)

bool isAnagram(string s, string t) {

    if(s.size() != t.size()){
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare the sorted strings
    return t == s;
}

//T.C = O(S1)+O(S2)
//S.C = O(1)

bool isAnagram(string s, string t) {

    if(s.size() != t.size()){
        return false;
    }
    vector<int> v1(26);
    vector<int> v2(26);

    for(int i = 0; i<s.length();i++){
        v1[s[i]-'a']++;
    }

    for(int i = 0; i<t.length();i++){
        v2[t[i]-'a']++;
    }

    int j1 = 0, j2 = 0;
    while(j1<26 && j2<26){
        if(v1[j1]!=v2[j2]){
            return false;
        }
        j1++;
        j2++;
    }
    return true;
}