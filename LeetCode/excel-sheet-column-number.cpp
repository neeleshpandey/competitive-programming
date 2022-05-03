/*
Given a string columnTitle that represents the column title as appear in an Excel sheet, return its corresponding column number.
*/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res(0), n(columnTitle.size());
        for(int i=0; i<n; i++){
        	res+=(columnTitle[n-i-1]-'A'+1)*pow(26,i);
        }
        return res;
    }
};