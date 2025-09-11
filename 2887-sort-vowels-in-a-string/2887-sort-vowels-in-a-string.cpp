class Solution {
public:
    int vkl; 
    int bjk; 
    bool isVowel(char ch)
    {
        ch = tolower(ch);
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') return true;
        return false;
    }
    string sortVowels(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        string temp;
        for(auto x : s)
        {
            if(isVowel(x)) 
                temp.push_back(x);
        }
        sort(temp.begin(),temp.end());

        int j = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(isVowel(s[i]))
            {
                s[i] = temp[j++];
            }
        }
        return s;
    }
};