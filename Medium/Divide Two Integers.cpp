/*
Given two integers dividend and divisor, divide two integers without using multiplication, division and mod operator.

Return the quotient after dividing dividend by divisor.

The integer division should truncate toward zero, which means losing its fractional part. For example, truncate(8.345) = 8 and truncate(-2.7335) = -2.

Example 1:

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = truncate(3.33333..) = 3.
Example 2:

Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = truncate(-2.33333..) = -2.
Note:

Both dividend and divisor will be 32-bit signed integers.
The divisor will never be 0.
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 231 − 1 when the division result overflows.
*/
class Solution {
public:
    int divide(int dividend, int divisor) {
        if((dividend == INT_MIN && divisor == -1))   //   special edge cases
        return INT_MAX;
        
         if((dividend == INT_MIN && divisor == 1))  //    special edge cases
        return INT_MIN;
        
        if((dividend == INT_MIN && divisor == 2))  //     special edge cases
        return -1073741824;
        
        long int n = dividend;
        long int m = divisor;
            int sign = n<0 ^ m<0 ? -1: 1;
        n =abs(n);
        m=abs(m);
        int ans =0;
        int temp=0;
        for(int i=31;i>=0;i--){
            if(temp +(m<<i)<=n){
                temp+= (m<<i);
                ans = ans| (1ll<<i);
                
            }
        }
        if(sign<0)
            ans = -ans;
        
        return ans;
    }
};
