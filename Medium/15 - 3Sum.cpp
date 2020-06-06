/*
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]>0){
                    r--;
                }else if(nums[i]+nums[l]+nums[r]<0)
                    l++;
                else{
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    res.push_back(temp);
                    
                    while (l < r && nums[l] == temp[1]) l++;

                while (l < r && nums[r] == temp[2]) r--;
                }
            }
             while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
            i++;
        }
        return res;
    }
};
