class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == 1) {
                    ans++; // 1x1 square to count ho gaya

                    int len = 1; // ab bada square banana try karenge
                    while (i + len < n && j + len < m) {
                        bool fail = false;

                        // neeche wali row check karo
                        for (int col = j; col <= j + len; col++) {
                            if (matrix[i + len][col] == 0) {
                                fail = true;
                                break;
                            }
                        }

                        // right wali column check karo
                        for (int row = i; !fail && row <= i + len; row++) {
                            if (matrix[row][j + len] == 0) {
                                fail = true;
                                break;
                            }
                        }

                        if (fail) break; // agar kahin 0 mila to aur bada square nahi banega

                        ans++;  // ek valid (len+1)x(len+1) square mil gaya
                        len++;  // aur bada try karo
                    }
                }
            }
        }

        return ans;
    }
};