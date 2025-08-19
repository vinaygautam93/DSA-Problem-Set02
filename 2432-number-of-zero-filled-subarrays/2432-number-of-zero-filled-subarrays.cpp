class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long ans = 0;

        int n = nums.size();
        
        long long con = 0;
        
        bool flag1 = false;
        bool flag2 = false;
        
        long long vt = 0;

        for( int i = 0; i < n; i ++ ) {
           
           if( nums[i] == 0 ) {
               flag1 = true;
               flag2 = false;
           }
           else {
               flag2 = true;
               flag1 = false;
               con = 0;
           }

           if( flag1 ) {
              con++;
              vt+=con;
           }

        }
        return vt;
        
    }
};