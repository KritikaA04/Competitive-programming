class Solution {
public:
    string longestCommonPrefix(vector<string>& str) 
    {
        int l=INT_MAX;
        int n=str.size();
        string s=str[0];
        for(int i=1;i<n;i++){
            int j=0;
            if(s==str[i]){
                j=s.size();
            }
            else{
                while(j<str[i].size()&&s[j]==str[i][j]){
                    j++;
                }
            }
            l=min(l,j);
            
        }
        return s.substr(0,l);
    }
};