/*
Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.

Return the shortest such subarray and output its length.
*/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v;
        int start(0), end(0), f(1);
        for(int i=0; i<nums.size(); i++)	v.push_back(nums[i]);
        sort(v.begin(),v.end());
        for(int i=0; i<nums.size(); i++){
        	if(nums[i]!=v[i]){
        		if(f)	start = i;
        		else end = i+1;
        		f=0;
        	}
        }
        return end-start;
    }
};