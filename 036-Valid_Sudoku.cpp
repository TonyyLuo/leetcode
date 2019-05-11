class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_set<char> rows[9];
        std::unordered_set<char> cols[9];
        std::unordered_set<char> box[9];
        
        for (int i=0; i<9; i++){
            for (int j=0; j<9; j++){
                int boxNum = (j/3) + (i/3)*3;
                
                if (board[i][j] != '.'){
                    if (rows[i].find(board[i][j]) != rows[i].end() || 
                        cols[j].find(board[i][j]) != cols[j].end() || 
                        box[boxNum].find(board[i][j]) != box[boxNum].end()){
                        return false;
                    }
                    else{
                        rows[i].insert(board[i][j]);
                        cols[j].insert(board[i][j]);
                        box[boxNum].insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};
