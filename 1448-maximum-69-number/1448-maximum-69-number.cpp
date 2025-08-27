class Solution {
public:
    int maximum69Number (int num) {
        
        vector< int > vg;
       
        while( num > 0 ) {
            int re = num % 10;
            vg.push_back(re);
            num = num /10;
        }

        reverse(vg.begin() , vg.end());

        int n = vg.size();

        for( int i = 0; i < n; i ++ ) {

            if( vg[i] == 6 ) {
                vg[i] = 9;
                break;
            }
        }

        int ans = 0;

        for( int i = 0; i < n; i ++ ) {
            
            ans = ans * 10 + vg[i];

        }
        return ans;


    }
};