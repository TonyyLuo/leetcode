class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sizeX = grid[0].size();
        int sizeY = grid.size();
        int rows[sizeX] = {0};
        int cols[sizeY] = {0};
                 
        //initialize rows and cols with max value
        for (int i = 0; i < sizeY; i++){
            for (int j = 0; j < sizeX; j++){
                    rows[i] = std::max(grid[i][j], rows[i]);
                    cols[j] = std::max(grid[i][j], cols[j]);
            }
        }
        
        int out = 0;
        for (int i = 0; i < sizeY; i++){
            for (int j = 0; j < sizeX; j++){
                out += std::min(rows[i], cols[j]) - grid[i][j];
            }
        }
        return out;
    }
};
