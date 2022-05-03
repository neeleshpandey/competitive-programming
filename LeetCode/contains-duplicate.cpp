/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

// Method I:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i : nums){
            s.insert(i);
        }
        return s.size()!=nums.size();
    }
};

// Method II:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size(), num = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] == num)  return  true;
            num = nums[i];
        }
        return false;
    }
};