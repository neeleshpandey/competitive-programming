/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

// Method 1:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int start = 0, end = len-1,mid;
        if(target<=nums[0])	return 0;
        while(start<=end){
        	mid = (start+end)/2;
        	if(target == nums[mid])	return mid;
        	else if(target < nums[mid])	end = mid-1;
        	else start = mid+1;
        } 
    return end+1;
    }
};

// Method 2:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};