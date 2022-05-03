/*
You are given two strings s and t.

String t is generated by random shuffling string s and then add one more letter at a random position.

Return the letter that was added to t.
*/

class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans-=s[i];
            ans+=t[i];
        }
        ans+=t[s.size()];  
        return ans;
    }
};