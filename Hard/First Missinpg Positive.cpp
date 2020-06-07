/*
Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

Input: [1,2,0]
Output: 3
Example 2:

Input: [3,4,-1,1]
Output: 2
Example 3:

Input: [7,8,9,11,12]
Output: 1
*/
class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
        int n = A.size();
        for(int i=0;i<n;i++)
        {
            if(A[i]<= 0 || A[i]>n+1)
                A[i]= n+2;
            
        }
        for(int a : A){
            int i =  a>0?a-1:-a-1;
            if(i>=0 && i<n)
            A[i]  = -abs(A[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]>0)
             return i+1;
            
        }
        return n+1;
    }
};
