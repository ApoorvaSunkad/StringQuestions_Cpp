/*
Given two strings a and b consisting of lowercase characters. 
The task is to check whether two given strings are an anagram of each other or not. 
An anagram of a string is another string that contains the same characters, only the order 
of characters can be different. For example, act and tac are an anagram of each other.

Note:-

If the strings are anagrams you have to return True or else return False

|s| represents the length of string s.


Example 1:

Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with
        same frequency. So, both are anagrams.
Example 2:

Input:a = allergy, b = allergic
Output: NO
Explanation: Characters in both the strings are 
        not same, so they are not anagrams.
Your Task:
You don't need to read input or print anything. Your task is to complete the function 
isAnagram() which takes the string a and string b as input parameter and check if the two 
strings are an anagram of each other. The function returns true if the strings are anagram 
else it returns false.

Expected Time Complexity:O(|a|+|b|).
Expected Auxiliary Space: O(Number of distinct characters).

*/

//Brute force solution:
//T.C = O(NLOGN)
//S.C = O(1)

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b)
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // Compare the sorted strings
        return a == b;
}

//T.C = O(length of a + length of b)
//S.C = O(min(length of a, length of b))

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b){
        
    unordered_map<char,int> m;
    
       for(int i = 0; i<a.length();i++){
            m[a[i]]++;
        }
    
        for (char c : b) {
            auto it = m.find(c);
            if (it == m.end() || it->second == 0) {
                return false;
            }
            it->second--;
        }

    return true;
}

bool isAnagram(char c[], char d[])
{
    //an array of size 26, to store count of characters.
    int a[26] = {0};
    
    //storing count of each character in first string.
    for(int i = 0; i < strlen(d); i++){
        a[c[i]-'a']++;
    }

    //decrementing the count of characters encountered in the second string.
    for(int i = 0; i < strlen(d); i++){
        a[d[i]-'a']--;
    }

    bool flag = true;
    
    //iterating over the array in which we stored the count initially 
    //to check if count at every index is equal to 0 or not.
    //count 0 indicates that number of characters in both strings are same.
    for(int i = 0;i<26;i++)
    {
        if(a[i] != 0){
            flag = false;
            break;
        }
    }
    //returning the result.
    return flag;
}