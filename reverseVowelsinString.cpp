/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both 
lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.


*/

#include<iostream>
#include<string>
using namespace std;

bool check(char c) {
    if(c =='a' || c=='e' || c=='i' || c=='o' || c=='u'||c =='A' || c=='E' || c=='I' || c=='O' || c=='U')    return 1;
    else return 0;
}

 string reverseVowels(string s) {
        int n = s.length();

        int i = 0, j = n-1;

        while(i<j){
            if(!check(s[i]) && check(s[j])){
                i++;
            }else if(check(s[i]) && !check(s[j])){
                j--;
            }else if(check(s[i]) && check(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }else{
                i++;
                j--;
            }
        }
        return s;
}