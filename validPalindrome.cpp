/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase 
letters and removing all non-alphanumeric characters, it reads the same forward and backward.
Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 
*/

#include<bits/stdc++.h>
using namespace std;

private:
bool valid (char ch){
    if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}
private:
char toLowerCase(char ch){
    if((ch>='a'&& ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}
private:
bool checkPalindrome(string S){
    int start = 0, end = S.length()-1;

    while(start<=end){
        if(S[start]!=S[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
public:
    bool isPalindrome(string s) {
        //remove invalid characters or special characters
        string str = "";

        for(int i = 0; i<s.length();i++){
            if(valid(s[i])){
                str.push_back(s[i]);
            }
        }

        //convert all letters in str string to lowercase
        for(int j = 0; j<str.length();j++){
            str[j] = toLowerCase(str[j]);
        }

        //check palindrome
        return checkPalindrome(str);

}