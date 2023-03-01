class Solution {
public:
    bool digitCount(string num) 
    {
       map<int,int> m;
        for(int i=0;i<num.size();i++)
        {
            m[num[i]-'0']++;
            cout<<m[num[i]-'0']<<endl;
        }   
        for(int i=0;i<num.size();i++)
        {
            if(m[i]!=(num[i]-'0'))
                return false;
        }
        return true;
    }
};