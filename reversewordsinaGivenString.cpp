/*
Given a String S, reverse the string without reversing its individual words. 
Words are separated by dots.

Example 1:

Input:

S = i.like.this.program.very.much
Output: much.very.program.this.like.i

Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
Example 2:

Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr

Your Task:
You dont need to read input or print anything. Complete the function reverseWords() 
which takes string S as input parameter and returns a string containing the words 
in reversed order. Each word in the returning string should also be separated by '.' 


Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)


Constraints:
1 <= |S| <= 105

*/

//My solution
//T.C = O(2N)
//S.C = O(2N)

string reverseString(string str){
        int n = str.length();
        
        int start = 0, end = n-1;
        
        while(start<=end){
            swap(str[start],str[end]);
            start++;
            end--;
        }
        return str;
    }
    
string reverseWords(string S) { 
    // code here 
    int n = S.length();

    vector<string> v1;

    string ans = "";
    for (int i = 0; i < n; i++) {
        while (i < n && S[i] != '.') {
            ans.push_back(S[i]);
            i++;
        }
        reverseString(ans);
        v1.push_back(ans);
        ans = "";
    }

    string result = "";
    for (int i = v1.size() - 1; i >= 0; i--) {
        result += v1[i];
        if (i != 0) {
            result += ".";
        }
    }

    return result;
} 

//Using Stack

//T.C = O(N)
//S.C = O(N)

string reverseWords(string S) { 
    
    // code here 
    stack<string> s;
    
    int n = S.length();
    
    string ans="";
    string temp = "";
    
    for(int i = 0; i<n; i++){
        if(S[i]!='.'){
            temp+=S[i];
        }else{
            s.push(temp);
            temp = "";
        }
    }
    s.push(temp);
    
    while(!s.empty()){
        if(s.size()>1){
            ans = ans+s.top()+'.';
            s.pop();
        }
        else{
            ans+=s.top();
            s.pop();
        }
    }
    
    return ans;
} 