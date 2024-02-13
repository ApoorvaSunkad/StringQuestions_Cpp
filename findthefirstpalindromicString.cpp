/*
Given an array of strings words, return the first palindromic string in the 
array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.

 

Example 1:

Input: words = ["abc","car","ada","racecar","cool"]
Output: "ada"
Explanation: The first string that is palindromic is "ada".
Note that "racecar" is also palindromic, but it is not the first.
Example 2:

Input: words = ["notapalindrome","racecar"]
Output: "racecar"
Explanation: The first and only string that is palindromic is "racecar".
Example 3:

Input: words = ["def","ghi"]
Output: ""
Explanation: There are no palindromic strings, so the empty string is returned.
 

Constraints:

1 <= words.length <= 100
1 <= words[i].length <= 100
words[i] consists only of lowercase English letters.


*/

//With using extra space
//T.C = O(N*M)
//S.C = O(N)

bool isPalindrome(string str){
    int n = str.length();

    int start = 0, end = n-1;

    while(start<=end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
public:
string firstPalindrome(vector<string>& words) {
    int n = words.size();
    string ans = "";

    for(int i = 0; i<n; i++){
        string str = words[i];
        bool checkPalin = isPalindrome(str);

        if(checkPalin == true){
            ans = str;
            break;
        }
    }

    return ans;
}

//With using extra space and also using reverse function

string firstPalindrome(vector<string>& words) {
    int n = words.size();
    string ans = "";

    for(int i = 0; i<n; i++){
        string str = words[i];
        string test = str;
        reverse(test.begin(),test.end());
        if(test == str){
            ans = str;
        }

    }

    return ans;
}

//without using extra space
//T.C = O(N*M)
//S.C = O(1)

bool isPalindrome(string str){
    int n = str.length();

    int start = 0, end = n-1;

    while(start<=end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
public:
    string firstPalindrome(vector<string>& words) {
         int n = words.size();
        //string ans = "";

        for(int i = 0; i<n; i++){
            string str = words[i];
            bool checkPalin = isPalindrome(str);

            if(checkPalin == true){
                return str;
                //break;
            }
        }

        return "";
    }
