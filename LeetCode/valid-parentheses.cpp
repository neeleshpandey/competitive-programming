/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
*/

class Solution {
public:
    bool isValid(string s) {
    	stack<char> stk;
    	for(char i : s){
    		if(i == '(' or i == '[' or i == '{')
    			stk.push(i);
    		else if(stk.empty())	return false;
    		else if(i == ')'){
    			if(stk.top() == '(')	stk.pop();
    			else return false;
    		}
    		else if(i == ']'){
    			if(stk.top() == '[')	stk.pop();
    			else return false;
    		}
    		else if(i == '}'){
    			if(stk.top() == '{')	stk.pop();
    			else return false;
    		}
    		}
    	
    	if(stk.empty())	return true;
    	return false;
    }
};