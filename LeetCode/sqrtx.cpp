/*
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
*/

class Solution {
public:
    int mySqrt(int x) {
    	if(x==0)	return 0;
    	if(x==1)	return 1;
        double t;  
	double sqrtroot=x/2;  
	do{  
		t=sqrtroot;  
		sqrtroot=(t+(x/t))/2;  
	} while((t-sqrtroot)!= 0);  
	return sqrtroot;   
    }
};
