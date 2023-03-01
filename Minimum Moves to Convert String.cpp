class Solution {
public:
    int minimumMoves(string s) 
    {
        int i=0,n=s.length(),ans=0;
        while(i<n)
        {
            if(s[i]=='X')
            {
                i=i+3;
                ans++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};