class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check Rows
        for (int row = 0; row < 9; ++row)
        {
            // for ever new row i need to do the same check
            unordered_set<char> seen;
            for(int j = 0; j < 9; ++j)
            {
                if (board[row][j] == '.')
                {
                    continue;

                }else if (seen.count(board[row][j]))
                {
                    return false;
                }
                seen.insert(board[row][j]);
            }
        }
        // Check Column 
        for (int col = 0; col < 9; ++col)
        {
            unordered_set<char> seen;
            for(int i = 0; i < 9; ++i)
            {
                if (board[i][col] == '.')
                {
                    continue;
                    
                }else if (seen.count(board[i][col]))
                {
                    return false;
                }
                seen.insert(board[i][col]);
            }
        }
        // Check myTinySquares
        for (int square = 0; square < 9; square++) 
        {
            unordered_set<char> seen;
            for (int i = 0; i < 3; ++i) 
            {
                for (int j = 0; j < 3; ++j) 
                {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }

        return true;   
    }
};
