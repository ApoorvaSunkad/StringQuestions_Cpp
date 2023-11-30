#include<bits/stdc++.h>
using namespace std;

void reverseString(char name[],int n){
    int start = 0, end = n-1;

    while(start<=end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
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

    reverseString(name,n);
    cout << "Your name is " << name;

    return 0;
}