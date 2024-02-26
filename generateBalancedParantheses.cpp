/*
Given n pairs of parentheses, write a function to generate all combinations of 
well-formed parentheses.

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
 

Constraints:

1 <= n <= 8

*/


//Using recursion and backtracking
//T.C = O(2^N * N)
//S.C = 

class Solution {
    void Parenthesis(int n, int left, int right, vector<string>&ans, string &temp){
        //base case
        if(left+right == 2*n){
            ans.push_back(temp);
            return;
        }

        //Add left parantheses
        if(left<n){
            temp.push_back('(');
            Parenthesis(n,left+1,right,ans,temp);
            temp.pop_back();
        }
        //Add left parantheses
        if(right<left){
            temp.push_back(')');
            Parenthesis(n,left,right+1,ans,temp);
            temp.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        Parenthesis(n,0,0,ans,temp);
        return ans;
    }
};