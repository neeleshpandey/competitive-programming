/*
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    	unordered_set<int> s;
    	int c = 0;
    	for(vector<char> i : board){
        	c = 0;
        	s.clear();
        	for(char j : i){
        		if(j == '.')	continue;
        		s.insert(j-'0');
        		c++;
        	}
        	if(s.size() != c)	return false;
        }

        for (int i = 0; i < 9; ++i){
        	c = 0;
        	s.clear();
        	for (int j = 0; j < 9; ++j){
        		if(board[j][i] == '.')	continue;
        		s.insert(board[j][i]-'0');
        		c++;
        	}
        	if(s.size() != c)	return false;
        }

        for(int i = 0; i < 3 ; i++){

        	c = 0;
        	s.clear();
        	for(int j = 0; j < 3; j++){
        		for(int k = 0; k < 3; k++){
					if(board[j+3*i][k] == '.')	continue;
	        		s.insert(board[j+3*i][k]-'0');
	        		c++;
	        	}
        	}
        	if(s.size() != c)	return false;

        	c = 0;
        	s.clear();
        	for(int j = 0; j < 3; j++){
        		for(int k = 3; k < 6; k++){
					if(board[j+3*i][k] == '.')	continue;
	        		s.insert(board[j+3*i][k]-'0');
	        		c++;
	        	}
        	}
        	if(s.size() != c)	return false;

        	c = 0;
        	s.clear();
        	for(int j = 0; j < 3; j++){
        		for(int k = 6; k < 9; k++){
					if(board[j+3*i][k] == '.')	continue;
	        		s.insert(board[j+3*i][k]-'0');
	        		c++;
	        	}
        	}
        	if(s.size() != c)	return false;
        }
        return true;
    }
};