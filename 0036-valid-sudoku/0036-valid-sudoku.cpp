class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int n = board.size();
        int m = board[0].size();

        // row coloum 

        for( int i = 0; i < 9 ; i ++ ) {

            int dia = board[i][i];
            map< char , int > mp;

            for( int r = 0; r < 9; r ++) {
                char rowVal = board[i][r];
                mp[rowVal]++;
            }

            for( auto it : mp) {
                if( it.second > 1 && ( it.first != '.')) {
                    return false;
                }
            }


            mp.clear();
            for( int c = 0; c < 9; c ++) {
                char rowVal = board[c][i];
                mp[rowVal]++;
            }

            for( auto it : mp) {
                if( it.second > 1 && ( it.first != '.')) {
                    return false;
                }
            }

        }

        // d
        for( int j = 0; j < 9; j +=3 ) {
            
            for( int i = 0; i < 9; i+=3 ) {
                map< char , int > mp;
                int f1 = board[i][j];
                mp[f1]++;
                int s2 = board[i][j+1];
                mp[s2]++;
                int t3 = board[i][j+2];
                mp[t3]++;

                int f4 = board[i+1][j];
                mp[f4]++;
                int f5 = board[i+1][j+1];
                mp[f5]++;
                int s6 = board[i+1][j+2];
                mp[s6]++;

                int s7 = board[i+2][j];
                mp[s7]++;
                int e8 = board[i+2][j+1];
                mp[e8]++;
                int n9 = board[i+2][j+2];
                mp[n9]++;

                for( auto it : mp) {
                if( it.second > 1 && ( it.first != '.')) {
                    return false;
                }
            }
            }
        }


        return true;
    }
};