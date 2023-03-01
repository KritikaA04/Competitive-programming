class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        int count = 0;
        bool flag = 0;
    
        sort(s.begin(), s.end());
    
        for(int i = 0; i < s.size(); i++)
        {
            if(mp[s[i]] >= 2){
                count += mp[s[i]] / 2;
                i += mp[s[i]] -1;
            }
            if(mp[s[i]] % 2 != 0)
            {
                flag = 1;
            }
        }
        int ans = 2*count;
        if(flag)
        {
            ans++;
        }

        return ans;
            
    }
};