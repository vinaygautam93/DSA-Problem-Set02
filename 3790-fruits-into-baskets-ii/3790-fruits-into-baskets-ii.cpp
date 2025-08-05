class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
        int vxt =0;
        int n = fruits.size();
        map < int , int > mp;
        string s = "";
        vector<bool> used(n, false);
        
        for( auto it : baskets) {
            s +=to_string(it);
        } 
        
        int ans = 0;
        for( int i = 0 ; i < n ; i ++ ) {
            
            int fr = fruits[i];
            
            bool flag = true;
            for( int j = 0 ; j < n ; j ++ ) {
                if( !used[j] && fr <= baskets[j] ) {
                    s[j] = '#';
                    flag = false;
                    used[j] = true; 
                    break;
                }
            }
            if( flag ) {
                ans++;
            }
            
        }
        return ans;
        
    }
};