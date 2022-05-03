/*
You are given a string s representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:

'A': Absent.
'L': Late.
'P': Present.
The student is eligible for an attendance award if they meet both of the following criteria:

The student was absent ('A') for strictly fewer than 2 days total.
The student was never late ('L') for 3 or more consecutive days.
Return true if the student is eligible for an attendance award, or false otherwise.
*/

class Solution {
public:
    bool checkRecord(string s) {
        int L = 0;
        int A = 0;
        for(char c : s){
        	if(c == 'A'){
        		A++;
        		L = 0;
        	}
        	else if(c == 'L')	L++;
            else if(c == 'P')	L = 0;
        	if(L == 3 || A == 2)	return false;
        }
        return true;
    }
};