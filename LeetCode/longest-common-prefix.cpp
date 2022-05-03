/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
    	string res = "";
    	for (int i = 0; i < strs[0].size(); ++i){
    		for (int j = 1; j < strs.size(); ++j){
    			if(strs[0][i] != strs[j][i])
    				return res;
    		}
    		res.push_back(strs[0][i]);
    	}
    	return res;
    }
};