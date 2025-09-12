class Solution {
public:
    bool doesAliceWin(string s2) {
        
        int mt=0;
        int n=s2.length();
        int big=INT_MIN;
        int dekh_Count = 0;
        int nt=0;
        for (char c : s2) 
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                dekh_Count++;
                mt++;
            }
            big = max(mt , big);
            nt++;
        }
        if(dekh_Count>0) {
         return true;
        }
        return false;
        
    }
};