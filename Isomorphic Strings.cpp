class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        // char a,b;
        // a=s.at(0);
        // b=t.at(0);
        // int x,y,diff;
        // x=int(a);
        // y=int(b);
        // diff=a-b;
        // while(s!="\0")
        
        
       //  for(int i=0;i<s.length();i++)
       //      for(int j=i+1;j<s.length();j++)
       //          if((s[i]==s[j])^(t[i]==t[j]))
       //              return false;
       // return true;
        
        
        if(s.size()!=t.size()) return false;
        unordered_map<char,char>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                for(auto it:mp){
                    if(it.second==t[i])return false;
                }
                mp[s[i]]=t[i];
            }
            else{
                if(mp[s[i]]!=t[i]) return false;
                
            }
            
        }
        return true;
    }
};