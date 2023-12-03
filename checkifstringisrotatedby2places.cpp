/*
Given two strings a and b. The task is to find if the string 'b' can be obtained by 
rotating (in any direction) string 'a' by exactly 2 places.

Example 1:

Input:
a = amazon
b = azonam
Output: 
1
Explanation: 
amazon can be rotated anti-clockwise by two places, which will make it as azonam.
Example 2:

Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 
0
Explanation: 
If we rotate geeksforgeeks by two place in any direction, we won't get geeksgeeksfor.

*/

#include<bits/stdc++.h>
using namespace std;

private:
    void rotateclockWise(string &s,int rotate){
        int p = 1;
        while(p<=rotate){
            char first = s[s.size()-1];
            
            for(int i = s.size()-2;i>=0;i--){
                s[i+1] = s[i];
            }
            s[0] = first;
            p++;
        }
    }
    
    private:
    void rotateanticlockWise(string &s,int rotate){
        int p = 1;
        
        while(p<=rotate){
            char last = s[0];
            
            for(int i = 1; i<=s.size();i++){
                s[i-1]=s[i];
            }
            s[s.size()-1]=last;
            p++;
        }
    }
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int rotate = 2;
        int len1 = str1.size();
        int len2 = str2.size();
        
        if(len1!=len2){
            return 0;
        }
        
        string clockWise, anticlockWise;
        
        clockWise = str1;
        
        rotateclockWise(clockWise,rotate);
        
        if(clockWise == str2){
            return 1;
        }
        
        anticlockWise = str1;
        
        rotateanticlockWise(anticlockWise,rotate);
        
        if(anticlockWise == str2){
            return 1;
        }
        
        return 0;
}