/*
Given a string s, find the length of the longest substring without repeating characters.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0)    return 0;
        vector<int> cnt(300,0);
        cnt[s[0]]++;
        int res = 1;
        int i = 0,j = 0;
        while(j!=n-1){
        	if(cnt[s[j+1]]==0){
        		j++;
        		cnt[s[j]] = 1;
        		res = max(res,j-i+1);
        	}
        	else{
        		cnt[s[i]]--;
        		i++;
        	}
        }
        return res;
    }
};