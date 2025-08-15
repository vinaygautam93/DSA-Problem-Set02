class Solution {
public:
    bool isPowerOfFour(int n) {
          int x=1; 
     //   int k=n;
       if(n==0){
            return false;
        }
        else if(n==1){
            return true;
        }
        return n%4==0 && isPowerOfFour(n/4);  
    }
};