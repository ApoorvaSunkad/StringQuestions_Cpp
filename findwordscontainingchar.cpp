/*
You are given a 0-indexed array of strings words and a character x.

Return an array of indices representing the words that contain the character x.

Note that the returned array may be in any order.

 

Example 1:

Input: words = ["leet","code"], x = "e"
Output: [0,1]
Explanation: "e" occurs in both words: "leet", and "code". Hence, we return indices 0 and 1.
Example 2:

Input: words = ["abc","bcd","aaaa","cbc"], x = "a"
Output: [0,2]
Explanation: "a" occurs in "abc", and "aaaa". Hence, we return indices 0 and 2.
Example 3:

Input: words = ["abc","bcd","aaaa","cbc"], x = "z"
Output: []
Explanation: "z" does not occur in any of the words. Hence, we return an empty array.
 

*/
#include<bits/stdc++.h>
using namespace std;

//My solution:Using two nested loops
//T.C = O(N*M)
/*
The space complexity is O(n), where n is the number of words in the vector. 
This is because we are using a vector ans to store the indices of words that contain 
the character x. The size of this vector is directly proportional to the number of words 
that meet the condition.
*/

//S.C = O(N)

  vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        vector<string>::iterator it;

        for(it=words.begin(); it!=words.end(); ++it){
            string s = *it;

            bool found = false;
            for(int i = 0; i<s.length();i++){
                if(s[i]== x){
                    found = true;
                    break;
                }
            }
            if (found) {
              ans.push_back(distance(words.begin(), it));
           }
        }
        return ans;
}



//2nd approach

#include<bits/stdc++.h>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        for (int i = 0; i < words.size(); i++) {
            if (check(words[i], x)) result.push_back(i);
        }
        return result;
    }

    bool check(string& word, char x) {
        for (auto& c : word) {
            if (c == x) return true;
        }
        return false;
    }