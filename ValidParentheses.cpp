class Solution 
{
public:
    bool isValid(string s) 
    {
        stack <char> check;
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            if(c=='(' || c=='[' || c=='{')
                check.push(c);
            else if(c==')' || c==']' || c=='}')
            {
                if(check.empty())
                    return false;
                char temp=check.top();
                if(temp=='(' && c==')' )
                {   check.pop(); }
               else if(temp=='[' && c==']')
               {    check.pop(); }
               else if(temp=='{' && c=='}')
               {  check.pop();  }
                else
                {
                    return false;
                }
            } 
            
        }
         if(check.empty())
                return true;
         else
                return false;
            
        return true;
    }
};