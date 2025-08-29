class Solution {
public:
    long long flowerGame(int n, int m) {
        
        int ans = 0;


        long long oddn = ( n + 1 ) / 2;
        long long evenn = n / 2;

        long long oddm = ( m + 1 ) / 2;
        long long evenm = m / 2;

        return oddn * evenm + evenn * oddm;

        for( int i = 1; i <= n; i++ ) {

          bool even = false;
          bool odd = false;

          if( i % 2 == 0 ) {
            even = true;
          } 
          else {
            odd = true;
          }
          for( int j = 1; j <= m ; j ++) {
               
               if(even) {
                if( j % 2 != 0 ) {
                  ans++;
                }
               }
               else {
                if( j % 2 == 0 ) {
                  ans++;
                }
               }
          }

        }
        return ans;
    }
};