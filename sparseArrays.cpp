/*
There is a collection of input strings and a collection of query strings. 
For each query string, determine how many times it occurs in the list of input 
strings. Return an array of the results.

Example
strings = ['ab','ab','abc'] queries = ['ab','abc','bc']


There are 2  instances of "ab", 1  of ''abc" and  0 of "bc''. For each query, 
add an element to the return array,  result = [2,1,0].


*/


#include<bits/stdc++.h>
using namespace std;

//T.C = O(N) + O(N)
//S.C = O(N)

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    
    unordered_map<string,int> mp;
    vector<int> v;
    
    for(int i = 0; i<strings.size(); i++){
        mp[strings[i]]++;
    }
    
    for(int i = 0; i<queries.size(); i++){
        string str = queries[i];
        if(mp.find(str)!=mp.end()){
            v.push_back(mp[str]);
        }
        else{
            v.push_back(0);
        }
    }
    
    return v;
}