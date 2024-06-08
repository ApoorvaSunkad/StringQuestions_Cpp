/*
Given an encoded string, return its decoded string.

The encoding rule is: k[encoded_string], where the encoded_string inside 
the square brackets is being repeated exactly k times. Note that k is 
guaranteed to be a positive integer.

You may assume that the input string is always valid; there are no extra 
white spaces, square brackets are well-formed, etc. Furthermore, you may 
assume that the original data does not contain any digits and that digits 
are only for those repeat numbers, k. For example, there will not be input 
like 3a or 2[4].

The test cases are generated so that the length of the output will never 
exceed 105.

 

Example 1:

Input: s = "3[a]2[bc]"
Output: "aaabcbc"
Example 2:

Input: s = "3[a2[c]]"
Output: "accaccacc"
Example 3:

Input: s = "2[abc]3[cd]ef"
Output: "abcabccdcdcdef"
 

Constraints:

1 <= s.length <= 30
s consists of lowercase English letters, digits, and square brackets '[]'.
s is guaranteed to be a valid input.
All the integers in s are in the range [1, 300].

*/


// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

string decodedString(string s){
    string result = "";
    for(int i = 0; i<s.length();i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            //extract str from result
            string str = "";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }
            reverse(str.begin(),str.end());
            
            result.pop_back();
            
            string num = "";
            while(!result.empty() && (result.back()>='0'&& result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }
            
            reverse(num.begin(),num.end());
            
            int number = stoi(num);
            
            while(number){
                result+=str;
                number--;
            }
        }
    }
    return result;
}
int main() {
   
    string str;
    cin>>str;
    
    cout << decodedString(str) << endl;
    
}