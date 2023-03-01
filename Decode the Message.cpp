class Solution {
public:
    string decodeMessage(string key, string message) 
    {
        unordered_map<char,char> mp;
        char c='a';
        mp[' ']=' ';
        for(int i=0;i<key.size();i++)
        {
           if(!mp[key[i]])
           {
               mp[key[i]]=c;
               c = ((c-'a')+1)+'a';
           }  
        }
        string res = "";
        for (int i=0; i<message.size(); i++)
        {
            res += mp[message[i]];
        }
        return res;
    }
};
