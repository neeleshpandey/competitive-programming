/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
    	string x(""),y("");
        for(char i : s){
        	if(i=='#'){
        		if(x!="")	x.pop_back();
        	}
        	else x.push_back(i);
        }
        for(char i : t){
        	if(i=='#'){
        		if(y!="")	y.pop_back();
        	}
        	else y.push_back(i);
        }
        return x==y;
    }
};