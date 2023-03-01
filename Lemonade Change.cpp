class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int a=0,b=0;
        if(bills[0]!=5)
            return false;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                a++;
            else if(bills[i]==10)
            {
                if(a==0)
                    return false;
                else
                {
                    a--;
                    b++;
                }
            }
            else
            {
                if(a==0) return false;
                if(b==0) 
                {
                    if(a<3) return false;
                    else a-=3;
                }
                else
                {
                    b--;
                    a--;
                }
            }
        }
        return true;
    }
};