/*
Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
 */
 class Solution {
public:
    int lengthOfLongestSubstring(string str) {
    int n = str.size(); 
    int res = 0; // result 
    vector<int> lastIndex(256, -1); 
  
    int i = 0; 
   
    for (int j = 0; j < n; j++) { 
        i = max(i, lastIndex[str[j]] + 1); 

        res = max(res, j - i + 1); 
        lastIndex[str[j]] = j; 
    } 
    return res;
    }
};
