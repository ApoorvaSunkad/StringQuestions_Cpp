/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
 
*/

//Brute force:

//T.C = O(N)
//S.C = O(N)

#include<bits/stdc++.h>
using namespace std;

string defangIPaddr(string address) {
        int index = 0;

        string ans = "";

        while(index<address.size()){
            if(address[index]=='.'){
                ans+="[.]";
            }
            else{
                ans+=address[index];
            }
            index++;
        }
        return ans;
}