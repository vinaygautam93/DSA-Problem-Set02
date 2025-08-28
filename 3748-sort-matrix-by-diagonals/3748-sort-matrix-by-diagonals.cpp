class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();

        // top-right diagonals (ascending)
        for (int i = 1; i < n; i++) {
            int idx = 0;
            vector<int> temp;
            // collect diagonal
            for (int r = 0, c = i; r < n && c < n; r++, c++) {
                temp.push_back(grid[r][c]);
            }
            sort(temp.begin(), temp.end());
            // put back
            for (int r = 0, c = i; r < n && c < n; r++, c++) {
                grid[r][c] = temp[idx++];
            }
        }

        // bottom-left diagonals (descending, including main)
        for (int i = 0; i < n; i++) {
            int idx = 0;
            vector<int> temp;
            // collect diagonal
            for (int r = i, c = 0; r < n && c < n; r++, c++) {
                temp.push_back(grid[r][c]);
            }
            sort(temp.begin(), temp.end(), greater<int>());
            // put back
            for (int r = i, c = 0; r < n && c < n; r++, c++) {
                grid[r][c] = temp[idx++];
            }
        }

        return grid;
    }
};
