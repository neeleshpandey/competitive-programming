/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int f = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(i==j){continue;}
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                    f=1;
                    break;
                }
            }
            if(f==1){break;}
        }
        return res;
    }
};