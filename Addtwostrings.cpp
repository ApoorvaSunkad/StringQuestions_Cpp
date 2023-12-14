/*
Given two non-negative integers, num1 and num2 represented as string, return the sum of 
num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers 
(such as BigInteger). You must also not convert the inputs to integers directly.

 
Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"

*/

//Rohit negi bhaiya's solution very beautifully explained in his video:
//Video link: https://www.youtube.com/watch?v=iw9CK0ssgDU

//T.C = O(N)
//S.C = O(max(Len of num1, Len of num2))

#include<bits/stdc++.h>
using namespace std;

string add(string num1, string num2){
    string ans ="";
    int index1 = num1.size()-1;
    int index2 = num2.size()-1;

    int sum, carry = 0;

    while(index2>=0){
        sum = (num1[index1]-'0')+(num2[index2]-'0')+carry;
        carry = sum/10;
        char ch = '0'+sum%10;
        ans+=ch;
        index1--,index2--;
    }

    //if we still have numbers left in string 1
    while(index1>=0){
        sum = num1[index1]-'0'+carry;
        carry = sum/10;
        char ch = '0'+sum%10;
        ans+=ch;
        index1--;
    }

    //whenver we add last number if it has carry then this line adds the remaining carry to ans
    if(carry){
        ans+='1';
    }

    reverse(ans.begin(),ans.end());
    return ans;
}
public:
    string addStrings(string num1, string num2) {
        //if size of num2 is greater than num1 than:

        if(num2.size()>num1.size()){
            return add(num2,num1);
        }
        //else num1 will obviously be greater
        else{
            return add(num1,num2);
        }
}