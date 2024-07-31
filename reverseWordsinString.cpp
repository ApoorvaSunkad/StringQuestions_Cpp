/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. 
The returned string should only have a single space separating the words. Do not include any 
extra spaces.

 

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the 
reversed string.
 

Constraints:

1 <= s.length <= 104
s contains English letters (upper-case and lower-case), digits, and spaces ' '.
There is at least one word in s.
 

Follow-up: If the string data type is mutable in your language, can you solve it 
in-place with O(1) extra space?


*/

#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;

//Using stack
//T.C = O(N)
//S.C = O(N)

string reverseWords(string s) {
    int n = s.length();

    string res = "";
    string word = "";

    stack<string> st;

    for(int i = 0; i<n; i++){
        if(s[i] != ' '){
            word+=s[i];
        }
        else{
            if(!word.empty()){
                st.push(word);
                word = "";
            }
        }
    }
    // Push the last word if there is one
    if (!word.empty()) {
        st.push(word);
    }

    // Pop words from the stack and build the result string
    while (!st.empty()) {
        res += st.top();
        st.pop();
        if (!st.empty()) {
            res += " ";
        }
    }

    return res;
}

//Using stringstream
//T.C = O(N)
//S.C = O(N)

string reverseWords(string s) {
    int n = s.length();

    string res = "";
    string token = "";

    stringstream ss(s);
    while(ss>>token){
        res = token+" "+res;
    }
    if (!res.empty() && res[res.length() - 1] == ' ') {
        res.pop_back();
    }

    return res.substr(0,n);
}


//Using 2 pointers

//T.C = O(N)
//S.C = O(1)

string reverseWords(string s) {
        int n = s.length();

        reverse(s.begin(),s.end());

        int i = 0, r = 0, l = 0;

        while(i<n){
            while(i < n && s[i] != ' '){
                s[r++] = s[i++];
            }
            if(l<r){
                reverse(s.begin()+l, s.begin()+r);

                s[r] = ' ';
                r++;

                l = r;
            }
            i++;
        }
        s = s.substr(0,r-1);
        return s;
    }