/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
*/
class Solution {
public:
    int strStr(string s1, string s2) {
        int n1=s1.length();
        int n2= s2.length();
        if(n1==0&&n2==0)
            return 0;
        for(int i=0;i<n1;i++){
            if(s1.substr(i,n2)==s2){
                return i;
            }
        }
        return -1;
    }
};
