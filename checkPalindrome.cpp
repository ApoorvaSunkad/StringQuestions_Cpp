#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char name[],int n){
    int start = 0, end = n-1;

    while(start<=end){
        if(name[start]==name[end]){
            return true;
        }
        start++;
        end--;
    }
    return false;
}
int getLength(char name[]){
    int count = 0;

    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout << "Enter your name " << endl;
    cin>> name;

    cout << "Your name is " << name << endl;
    //cout << "Length of the string is "<< getLength(name);
    int n = getLength(name);

    cout << "is palindrome " << checkPalindrome(name,n) << endl;

    return 0;
}