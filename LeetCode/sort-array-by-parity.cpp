/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    	int len = nums.size();
        for(int i=0; i<len; i++){
        	if(nums[i]%2!=0){
        		len--;
        		int j=i;
        		int temp=nums[i];
        		while(j!=nums.size()-1){
        			nums[j] = nums[j+1];
        			j++;
        		}
        		nums[nums.size()-1]=temp;
                i--;
        	}
        }
        return nums;
    }
};