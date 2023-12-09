/*

Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. 
The wildcard character '?' can be substituted by any single lower case English letter for 
matching. He has two strings X and Y of equal length, made up of lower case letters and the 
character '?'. He wants to know whether the strings X and Y can be matched or not.

Input
The first line of input contain an integer T denoting the number of test cases. 
Each test case consists of two lines, the first line contains the string X and the second 
contains the string Y.

Output
For each test case, output a single line with the word Yes if the strings can be matched, 
otherwise output No.

Constraints
1 ≤ T ≤ 50
Both X and Y have equal length and the length is between 1 and 10.
Both X and Y consist of lower case letters and the character '?'.
Sample 1:
Input
Output
2
s?or?
sco??
stor?
sco??
Yes
No
Explanation:
Test case 
1
1: One of the possible ways to match both the strings is 
score
score. This can be done by:

Replace 
1
�
�
1 
st
  and 
2
�
�
2 
nd
  
?
? of string 
�
X by characters 
c
c and 
e
e respectively.
Replace 
1
�
�
1 
st
  and 
2

2 
nd
  
?
? of string 
Y by characters 
r
r and 
e
e respectively.
Test case 
2
2: There exists no way to fill the 
?
? such that the strings become equal. Thus, the answer is No.

*/

//Please refer codechef for this question

#include <iostream>
using namespace std;
//T.C = O(X.length())
//S.C = O(1)

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	for(int i = 0; i<t;i++){
	    string X,Y;
	    cin >> X >> Y;
	    
	    int n = X.length();
	    bool is = true;
	    
	    for(int i = 0; i<n;i++){
	        bool areEqual = false;
	        if(X[i]==Y[i]){
	            i++;
	        }
	        if(X[i]=='?' || Y[i]=='?'){
	            areEqual = true;
	        }
	        else{
	            areEqual = (X[i] == Y[i]);
	        }
	        
	        if(!areEqual) is = false;
	    }
	    
	    if(is){
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	    
	}
	return 0;
}
