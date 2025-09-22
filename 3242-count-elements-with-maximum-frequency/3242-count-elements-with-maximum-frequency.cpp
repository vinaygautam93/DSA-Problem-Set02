class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
     int vl;
      unordered_map<int, int>m;  
    int vin = 0;                  
    for (auto num : nums)
    {
        m[num]++;
       vin = max(vin, m[num]);
    }    
    int c = 0;
    for (auto v : m) 
    {
        if (v.second == vin) 
        {
            c += v.second; 
        }
    }

    return c;
    }
};