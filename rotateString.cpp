/*
Given two strings s and goal, return true if and only if s can become goal after some number 
of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false
 

Constraints:

1 <= s.length, goal.length <= 100
s and goal consist of lowercase English letters.


*/

#include<iostream>
#include<string>
using namespace std;
//bruet force
bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();

        if(m!=n){
            return false;
        }

        for(int cnt = 1; cnt<=n;cnt++){
            rotate(s.begin(),s.begin()+1,s.end());

            if(s==goal)return true;
        }
        return false;
    }

//optimised approach - conatenating the input string and checking if it has a substring equal to goal.

//T.C = O(N)
//S.C = O(N)

 bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();

        if(m!=n){
            return false;
        }

        string str = s+s;

        for(int i = 0; i<str.length();i++){
            if(str.find(goal)!=string::npos){
                return true;
            }
        }
        return false;
}