class Solution {
public:
    int lengthOfLastWord(string s)
    {
//         int i, ans=0;
//         int n=s.length();
//         for(i=n-1;i>=0;i--)
//         {
//             //cout<<i<<"x";
            
//             if(s[i]==' ')
//                 break;
//             ans++;
//         }
//         return ans;
        string ans="";
        int i;
        int n=s.length();
        bool x=false;
        for(i=n-1;i>=0;i--)
        {
            if(x && s[i]==' ')
            {
                reverse(ans.begin(),ans.end());
                return ans.size();
            }
            else
            {
                if(s[i]==' ')
                    continue;
                else
                    x=true;
                    ans+=s[i];
            }
        }
        return ans.size();
    }
};
