/*
You are given a string s of even length. Split this string into two halves of equal 
lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels 
('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains 
uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.

 

Example 1:

Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, 
they are alike.
Example 2:

Input: s = "textbook"
Output: false
Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, 
they are not alike.
Notice that the vowel o is counted twice.
 

Constraints:

2 <= s.length <= 1000
s.length is even.
s consists of uppercase and lowercase letters.

*/

//Brute force:My solution
//T.C = O(N)
//S.C = O(1)

#include<bits/stdc++.h>
using namespace std;

bool halvesAreAlike(string s) {
        int n = s.length();

        int m = (n/2)-1;
        
        int cntvowFirst = 0, cntvowSec = 0;

        for(int i = 0; i<=m; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                cntvowFirst++;
            }
        }


        for(int i = n/2; i<n; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                cntvowSec++;
            }
        }

        if(cntvowFirst == cntvowSec){
            return true;
        }

        return false;
}


//Two pointer technique

//T.C = O(N)
//S.C = O(1)

#include<bits/stdc++.h>
using namespace std;

bool halvesAreAlike(string s) {
        int start = 0;
        int end = s.length() - 1;
        int countLeft = 0, countRight = 0;

        while (start < end) {
           // Convert characters to lowercase individually
           if (tolower(s[start]) == 'a' || tolower(s[start]) == 'e' || tolower(s[start]) == 'i' ||
              tolower(s[start]) == 'o' || tolower(s[start]) == 'u') {
               countLeft++;
            }

            if (tolower(s[end]) == 'a' || tolower(s[end]) == 'e' || tolower(s[end]) == 'i' ||
                tolower(s[end]) == 'o' || tolower(s[end]) == 'u') {
                countRight++;
            }

            start++;
            end--;
        }

        return (countLeft == countRight);
}