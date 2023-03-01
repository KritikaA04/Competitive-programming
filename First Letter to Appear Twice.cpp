class Solution {
public:
    char repeatedCharacter(string s) 
    {
        unordered_map<char,int> mp;
        int index=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]==2)
            {
                // index+=i;
                //return i;
                return s[i];
            } 
        }
        return -1;
    }
};