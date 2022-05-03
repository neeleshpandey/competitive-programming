/*
Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int c(0),maxlen(0);
        for(char i : s){
        	if(i == ' '){
        		if(c != 0){
        			maxlen = c;
        			c = 0;
        		}
        	}
        	else	c++;
        }
        if(c != 0)	return c;
        return maxlen;
    }
};