class Solution {
public:
    int maxArea(vector<int>& v) {
        int n= v.size();
        int mx=0;
        int mostmx=0;
     /*   if(n==2) {
           // return v[0] * v[1];
        }  */
        vector<int>ans;

     //   for(int  i = 0 ; i<n; i++) {
           int e=n-1;
           int f=0;
           int an= 0;
           while( f < e) {
            int mid= abs(f-e);
            int bada= min(v[f], v[e]);
            int ans1= bada * mid;
            an = max( an ,ans1);
            if(v[f] < v[e] ) {
                f++;
            } 
            else {
            e--; 
            }
          //  ans.push_back(ans1);

           }

      //  }
      // sort(ans.begin(), ans.end());
      //  int size= ans.size();
      //  return ans[size-1];
      return an;
    }
};