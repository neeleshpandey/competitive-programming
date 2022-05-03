/*
Given an array intervals where intervals[i] = [li, ri] represent the interval [li, ri), remove all intervals that are covered by another interval in the list.

The interval [a, b) is covered by the interval [c, d) if and only if c <= a and b <= d.

Return the number of remaining intervals.
*/

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int f,c;
        sort(intervals.begin(),intervals.end());
        res.push_back(intervals[0]);
        for(auto i : intervals){
        	f=0; c=0;
        	for(auto j : res){
                if(j[0]>=i[0] and j[1]<=i[1])	{res[c]=i;f=1; break;}
        		if(j[0]<=i[0] and j[1]>=i[1])	{f=1; break;}
                c++;
        	}
        	if(f == 0)	res.push_back(i);
        }
        return res.size();
    }
};