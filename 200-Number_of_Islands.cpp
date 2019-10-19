class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<pair<int, int>> directions = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
        
        if (grid.size() == 0) {
            return 0;
        }
        if (grid[0].size() == 0) {
            return 0;
        }
        
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        int count = 0;
        stack<pair<int, int>> dfs;
        
        for (int y = 0; y < grid[0].size(); y++) {
            for (int x = 0; x < grid.size(); x++) {
                if (grid[x][y] == '1' && visited[x][y] == false) {
                    count++;
                    dfs.push(make_pair(x, y));
                    visited[x][y] = true;
                    while (!dfs.empty()) {
                        int currX = dfs.top().first;
                        int currY = dfs.top().second;
                        dfs.pop();
                        
                        for (int i = 0; i < 4; i++) {
                            int x2 = currX + directions[i].first;
                            int y2 = currY + directions[i].second;
                            if (x2 >= 0 && x2 < grid.size() && y2 >= 0 && y2 < grid[0].size() && visited[x2][y2] == false && grid[x2][y2] == '1') {
                                dfs.push(make_pair(x2, y2));
                                visited[x2][y2] = true;
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
