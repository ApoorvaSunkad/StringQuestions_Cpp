// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &v){
    sort(v.begin(),v.end());
    
    string s1 = v[0];
    string s2 = v[v.size()-1];
    int i = 0, j = 0;
    
    string ans = "";
    
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++,j++;
        }
        else{
            break;
        }
    }
    
    return ans;
    
}
int main() {
   
    int n;
    cout << "Enter the no. of strings?";
    cin>>n;
    
    cout << "Enter the strings: ";
    vector<string> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    
    cout << "longest common prefix is: " << longestCommonPrefix(v) << endl;
    
}