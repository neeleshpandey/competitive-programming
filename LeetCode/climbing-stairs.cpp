/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3)  return n;
        int result = 0, rev1 = 1, rev2 = 2;
        for(int i = 3; i <= n; i++){
            result = rev1 + rev2;
            rev1 = rev2;
            rev2 = result;
        }
        return result;
    }
};