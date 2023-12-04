/*
Given a string consisting of lowercase letters, arrange all its letters in ascending order. 

Example 1:

Input:
S = "edcab"
Output: "abcde"
Explanation: characters are in ascending
order in "abcde".
Example 2:

Input:
S = "xzy"
Output: "xyz"
Explanation: characters are in ascending
order in "xyz".

*/

//Brute force
//T.C = O(NLOGN)
//S.C = O(1)

#include<bits/stdc++.h>
using namespace std;

string sort(string s){
    sort(s.begin(), s.end()); //Using sort function to sort the characters of the string
    return s; //Returning the sorted string
}

//better solution

//T.C = O(2N)
//S.C = O(N)
#include<bits/stdc++.h>
using namespace std;
string sort(string s){
    //complete the function here
    vector<int> alpha(26,0);
    string str = "";
    
    for(int i = 0; i<s.size();i++){
        alpha[s[i]-'a']++;
    }
    
    for(int i = 0; i<26;i++){
        char ch = 'a'+i;
        while(alpha[i]){
            str+=ch;
            alpha[i]--;
        }
    }
    return str;
}
