/*
Given an array of strings strs, group the anagrams together. 
You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters 
of a different word or phrase, typically using all the original 
letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]
 

Constraints:

1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.


*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
//Using sorting
//T.C = O(N)+O(KlogK)
//S.C = O(N)

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;

        for(int i = 0; i<n; i++){
            string temp = strs[i];

            sort(temp.begin(),temp.end());

            mp[temp].push_back(strs[i]);
        }
        for(auto it:mp){
            result.push_back(it.second);
        }
        return result;
}

//without sorting
//T.C = O(N*K)
//S.C = O(N)

 string generate(string temp){
        vector<int>v(26,0);

        for(auto&ch:temp){
            v[ch-'a']++;
        }

        string newword = "";
        for(int i = 0; i<26; i++){
            int freq = v[i];
            if(freq>0){
                newword +=string(freq, i+'a');
            }
        }
        return newword;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;

        for(int i = 0; i<n; i++){
            string temp = strs[i];

            string new_word = generate(temp);
            mp[new_word].push_back(temp);
        }
        for(auto it:mp){
            result.push_back(it.second);
        }
        return result;
}