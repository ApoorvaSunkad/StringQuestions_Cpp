/*
For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate 
from left to right and replace the characters as follows:

00 is replaced with A
01 is replaced with T
10 is replaced with C
11 is replaced with G
Given a binary string 

S of length N (N is even), find the encoded sequence.

Input Format
First line will contain 

T, number of test cases. Then the test cases follow.
Each test case contains two lines of input.
First line contains a single integer 

N, the length of the sequence.
Second line contains binary string S of length N.

Output Format
For each test case, output in a single line the encoded sequence.

Note: Output is case-sensitive.

Sample 1:
Input
Output
4
2
00
4
0011
6
101010
4
1001
A
AG
CCC
CT

Explanation:

Test case 

1: Based on the rules 00 is replaced with A.

Test case 

2: Based on the rules 00 is replaced with A. Similarly, 11 is replaced with G. Thus, 
the encoded sequence is AG.

Test case 

3: The first two characters are 10 which is encoded as C. Similarly, the next two characters 
10 are encoded as C and the last two characters 10 are encoded as C. Thus,
the encoded string is CCC.

Test case 

4: The first two characters are 10 which is encoded as C. Similarly, 
the next two characters 01 are encoded as T. Thus, the encoded string is CT.

*/

#include <iostream>
using namespace std;
//T.C = O(N)
//S.C = O(N)

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i = 0; i<t;i++){
	    
	    int N;
	    cin >> N;
	    
	    string S;
	    cin >> S;
	    
	    string str;
	    
	    for(int i = 0; i<N;i+=2){
	        if(S[i] == '0' && S[i+1] == '0'){
	            str+='A';
	        }
	        if(S[i] == '0' && S[i+1] == '1'){
	            str+='T';
	        }
	        
	        if(S[i] == '1' && S[i+1] == '0'){
	            str+='C';
	        }
	        
	        if(S[i] == '1' && S[i+1] == '1'){
	            str+='G';
	        }
	    }
	    cout << str << endl;
	}
}
