/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    	int n(nums.size());
    	if(n==1)	return nums[0];
        int num(nums[0]),c(1);
        for(int i=1; i<n; i++){
        	if(nums[i] == num)	c++;
        	else if(c==0)	num = nums[i];
        	else c--;
        }
        return num;
    }
};