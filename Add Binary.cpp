class Solution {
public:
    string addBinary(string a, string b) 
    {
        
        string res;
        int sum,carry=0;
        int i,j;
        for(i=a.size()-1,j=b.size()-1;i>=0 || j>=0;i--,j--)
        {
            sum=carry;
            // if(a[i]=="1" && b[j]=="1")
            // {
            //     carry=1;
            //     sum+=a[i]-'0';
            //     sum+=b[j]-'0';
            // }
            
            if(i>=0)
                sum+=a[i]-'0';
            if(j>=0)
                sum+=b[j]-'0';
            res+=to_string(sum%2);
            carry=sum/2;
        }
        if(carry!=0)
            res+='1';
        reverse(res.begin(),res.end());
        return res;
    }
};