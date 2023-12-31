class Solution {
private:
    void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& visited) {
        int m = grid.size();
        int n = grid[0].size();
        visited[row][col] = 1;
        queue <pair<int, int>> q;
        q.push({row, col});
        int drow[] = {-1, 0, +1, 0};
        int dcol[] = {0, +1, 0, -1};
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && 
                    visited[nrow][ncol] == 0 && grid[nrow][ncol] == '1') {
                        visited[nrow][ncol] = 1;
                        q.push({nrow, ncol});
                }
            }
        }
    }  
    public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, 0));
        int cnt = 0;
        for (int i = 0; i < m; i++) {        
            for (int j = 0; j < n; j++) {
                if (visited[i][j] == 0 && grid[i][j] == '1') {
                    cnt++;
                    bfs(i, j, grid, visited);
                }
            }
        }
        return cnt;
    }
};